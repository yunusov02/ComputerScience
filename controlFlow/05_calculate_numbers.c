#include <stdio.h>

int main() {
  int N, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    sum += i;
  }

  printf("Sum is %d\n", sum);
}