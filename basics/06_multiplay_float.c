#include <stdio.h>

int main() {
  float a, b, multiplay;

  printf("Enter two floating point number\n");

  scanf("%f %f", &a, &b);

  multiplay = a * b;

  printf("%0.2f\n", multiplay);

  return 0;
}