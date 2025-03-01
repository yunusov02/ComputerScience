#include <stdio.h>

int main() {
  int no_row, c = 1;

  printf("Input number of rows: ");
  scanf("%d", &no_row);

  for (int i = 0; i < no_row; i++) {
    for (int blk = 1; blk <= no_row - i; blk++) printf("  ");

    for (int j = 0; j <= i; j++) {
      if (j == 0 || i == 0)
        c = 1;  // If it's the first column or first row, set c to 1.
      else
        c = c * (i - j + 1) / j;
      printf("% 4d", c);
    }

    printf("\n");
  }

  return 0;
}
