#include <stdio.h>

int main() {
  char operation;
  int a, b, result;

  printf("Enter your calculation: ");
  scanf("%d %c %d", &a, &operation, &b);

  switch (operation) {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    case '/':
      if (b == 0) {
        printf("Second number can't be zero\n");
        return 1;
      }
      result = a / b;
    default:
      break;
  }

  printf("The result is: %d\n", result);

  return 0;
}