#include <stdio.h>

#include "armstrong_number.h"

int main() {
  int num;
  printf("Etner a number: ");
  scanf("%d", &num);

  if (armstrong_number(num) == 1)
    printf("ARMSTRONG NUMBER\n");
  else
    printf("NOT armstrong\n");

  return 0;
}