#include <stdio.h>

int main() {
  int a;
  printf("Enter a number to check prime or not: ");
  scanf("%d", &a);

  if (a == 1) {
    printf("1 is even prime or even number\n");
    return 0;
  }

  for (int i = 2; i <= a / 2; i++) {
    if (a % i == 0) {
      printf("%d is not a prime\n", a);
      return 0;
    }
  }

  printf("%d is a prime number\n", a);

  return 0;
}