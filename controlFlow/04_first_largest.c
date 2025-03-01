#include <stdio.h>

int main() {
  int a, b, c, max;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  max = a;

  if (max < b) max = b;
  if (max < c) max = c;

  printf("Maximum ot these three number is %d\n", max);

  return 0;
}