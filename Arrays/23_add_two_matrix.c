#include <stdio.h>
#include <stdlib.h>

#define N 3

int **addTwoMatrix(int matrix1[][N], int matrix2[][N]) {
  int **arr = (int **)malloc(N * sizeof(int *));

  for (int i = 0; i < N; i++) {
    arr[i] = (int *)malloc(N * sizeof(int));
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      arr[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  return arr;
}

void printArray(int **array) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  printf("\n");
}

int main() {
  int matrix1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int matrix2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

  int **res = addTwoMatrix(matrix1, matrix2);

  printArray(res);

  for (int i = 0; i < N; i++) {
    free(res[i]);
  }

  free(res);

  return 0;
}
