#include <stdio.h>

#include "armstrong_number.h"

int main() {
  int num;
  printf("Etner a number: ");
  scanf("%d", &num);

  for (int i = 1; i < num; i++) {
    if (armstrong_number(i) == 1) {
      printf("%d ", i);
    }
  }

  printf("\n");

  return 0;
}