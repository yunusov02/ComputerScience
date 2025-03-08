#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **splits(const char *str, const char delimeter, int *count) {
  int i, j = 0, k = 0;
  int len = strlen(str);

  // Count of number substring
  *count = 1;
  for (int i = 0; i < len; i++) {
    if (str[i] == delimeter) {
      (*count)++;
    }
  }

  // Allocate memory for array of string
  char **result = malloc((*count) * sizeof(char *));
  if (!result) return NULL;

  // Allocate memory max size for first word
  result[k] = malloc(len + 1);
  if (!result[k]) return NULL;

  for (int i = 0; i < len; i++) {
    if (str[i] == delimeter) {
      result[k][j] = '\0';
      k++;  // Move to the next string
      j = 0;
      result[k] = malloc(len + 1);
      if (!result[k]) return NULL;
    } else {
      result[k][j++] = str[i];
    }
  }

  result[k][j] = '\0';

  return result;
}

int main() {
  char text[] = "Hello,World,This,is,C";
  int count, i;

  char **words = splits(text, ',', &count);

  printf("Splitted strings:\n\n");
  for (i = 0; i < count; i++) {
    printf("%s\n", words[i]);
    free(words[i]);
  }
  free(words);

  return 0;
}