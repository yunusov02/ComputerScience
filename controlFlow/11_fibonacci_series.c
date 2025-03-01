#include <stdio.h>

int main() {
  int N;
  printf("Enter a number of series: ");
  scanf("%d", &N);

  if (N <= 0) {
    printf("Error\n");
    return 1;
  }

  int first = 0;
  int second = 1;
  int temp = 0;

  for (int i = 0; i < N; i++) {
    temp = first;
    first = second;
    second = temp + second;

    printf("%d ", temp);
  }

  return 0;
}