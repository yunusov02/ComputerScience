#include <stdio.h>

int main() {
  // LCM(a, b) = a * b / GCD(a, b)

  int a, b;
  printf("Enter a and b: ");
  scanf("%d %d", &a, &b);

  int multiply = a * b;

  if (a < b) {
    int temp = a;
    a = b;
    b = temp;
  }
  // GCD
  // a is max
  while (a - b != 0) {
    a -= b;

    if (a < b) {
      int temp = a;
      a = b;
      b = temp;
    }
  }

  printf("LCM of two values is equal %d\n", multiply / a);
  return 0;
}