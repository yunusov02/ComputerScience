#include <stdio.h>

int main() {
  int number = 7;

  for (int i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", i, number, i * number);
  }
}