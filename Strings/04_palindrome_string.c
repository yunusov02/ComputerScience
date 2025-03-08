#include <stdio.h>
#include <string.h>

int palindromeString(char string[]) {
  size_t N = strlen(string);

  int start = 0, end = N - 1;

  while (start != end) {
    if (string[start] != string[end]) {
      return 0;
    }

    start++;
    end--;
  }

  return 1;
}

int main() {
  char string1[] = "madam";
  char string2[] = "hello";

  if (palindromeString(string1) == 1) printf("Palindrome: %s\n", string1);
  if (palindromeString(string2) == 1) printf("Palindrome: %s\n", string2);

  return 0;
}