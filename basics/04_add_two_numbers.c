#include <stdio.h>

int main() {
  int a, b, sum = 0;

  printf("Enter two Integers: ");
  scanf("%d %d", &a, &b);

  sum = a + b;

  printf("Sum of a and b is equal %d\n", sum);

  return 0;
}