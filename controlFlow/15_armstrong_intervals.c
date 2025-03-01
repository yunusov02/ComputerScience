#include <stdio.h>

#include "armstrong_number.h"

int main() {
  int lowerLimit;
  printf("Etner a lower limit: ");
  scanf("%d", &lowerLimit);

  int upperLimit;
  printf("Etner an upper limit: ");
  scanf("%d", &upperLimit);

  for (int i = lowerLimit; i < upperLimit; i++) {
    if (armstrong_number(i) == 1) {
      printf("%d ", i);
    }
  }

  printf("\n");

  return 0;
}