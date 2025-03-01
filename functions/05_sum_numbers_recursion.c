#include <stdio.h>

int sumRecursion(int N) {
  if (N == 1) {
    return 1;
  }

  return N + sumRecursion(N - 1);
}

int main() {
  int N = 10;

  int total = sumRecursion(N);

  printf("Total is %d\n", total);

  return 0;
}