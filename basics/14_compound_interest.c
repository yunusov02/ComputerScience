#include <math.h>
#include <stdio.h>

int main() {
  // Principal amount
  double principal = 10000;

  // Annual rate of interest
  double rate = 5;

  // Time
  double time = 2;

  // Calculating compound Interest
  double Amount = principal * pow((1 + rate / 100), time);
  double CI = Amount - principal;

  printf("Compound Interest is : %0.lf\n", CI);
  return 0;

  return 0;
}