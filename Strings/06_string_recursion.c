#include <stdio.h>
#include <string.h>

void revRecursive(char *l, char *r) {
  if (l != r) {
    char c = *l;
    *l = *r;
    *r = c;

    // Recursive call
    revRecursive(l + 1, r - 1);
  }
}

void rev(char *string) { revRecursive(string, string + strlen(string) - 1); }

int main() {
  char string[] = "Hello World";

  rev(string);

  printf("%s\n", string);
}