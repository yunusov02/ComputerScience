#include <stdio.h>

int main() {
  float temp;
  float faherneit;

  printf("Enter a value: ");
  scanf("%f", &temp);

  faherneit = (temp - 32) * 5 / 9;

  printf("Fahrenheit value is %0.3f\n", faherneit);

  return 0;
}
