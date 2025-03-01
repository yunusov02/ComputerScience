#include <stdio.h>

int main() {
  char a;

  printf("Enter a character to convert to integer: ");
  scanf("%c", &a);

  printf("%c ascii value is %d\n", a, a);

  return 0;
}