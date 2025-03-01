#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number > 0) {
    printf("POSITIVE\n");
  } else if (number == 0) {
    printf("ZERO\n");
  } else {
    printf("NEGATIVE\n");
  }

  return 0;
}