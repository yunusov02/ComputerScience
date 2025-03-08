#include <stdio.h>
#define N 4

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int array[][N] = {{3, 5, 6, 4}, {5, 5, 1, 5}, {1, 5, 3, 2}, {0, 2, 2, 1}};

  int cli = 0;
  while (cli < N) {
    for (int i = 0; i < N - 1; i++) {
      for (int j = i + 1; j < N; j++) {
        if (array[i][cli] > array[j][cli]) {
          swap(&array[i][cli], &array[j][cli]);
        }
      }
    }
    cli += 1;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}
