#include <stdio.h>

int main() {
  int real1, img1;
  int real2, img2;

  int realSum, imgSum;

  printf("Enter first complex number: ");
  scanf("%d+%di", &real1, &img1);

  printf("Enter second complex number: ");
  scanf("%d+%di", &real2, &img2);

  realSum = real1 + real2;
  imgSum = img1 + img2;

  printf("Sum of two complex number is: %d+%di\n", realSum, imgSum);

  return 0;
}