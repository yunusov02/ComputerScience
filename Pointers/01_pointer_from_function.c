// Pointer in C programming language is a variable which is used to store the
// memory address of another variable.

#include <stdio.h>

int *func() {
  static int A = 30;

  return (&A);
}

int main() {
  int *p;

  p = func();

  printf("%d\n", *p);

  return 0;
}