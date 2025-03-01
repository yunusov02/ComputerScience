#include "armstrong_number.h"

int armstrong_number(int number) {
  int power = 0;
  int temp = number;

  while (temp % 10 != 0) {
    power += 1;
    temp /= 10;
  }

  int armStrongNumber = 0;

  temp = number;
  while (temp % 10 != 0) {
    int last_number = temp % 10;
    armStrongNumber += pow(last_number, power);
    temp /= 10;
  }

  if (armStrongNumber == number)
    return 1;
  else
    return 0;
}
