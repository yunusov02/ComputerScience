#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number <= 1) {
    printf("1\n");
  } else {
    int factorail = 1;
    for (int i = 2; i <= number; i++) {
      factorail *= i;
    }
    printf("Factorial of %d is equal %d\n", number, factorail);
  }

  return 0;
}