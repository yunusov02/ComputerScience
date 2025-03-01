// C program to implement
// the above approach
#include <stdio.h>

int reverseDigits(int num) {
  int rev_num = 0;
  while (num > 0) {
    rev_num = rev_num * 10 + num % 10;
    num = num / 10;
  }
  return rev_num;
}

int main() {
  int num = 12321;
  printf("Reversed number %d\n", reverseDigits(num));

  if (reverseDigits(num) == num) {
    printf("This number is Palindrome\n");
  }

  return 0;
}
