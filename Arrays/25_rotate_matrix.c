#include <stdio.h>

#define N 3

void printArray(int matrix[][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

void rotateArray(int matrix[][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      //
    }
  }
}

int main() {
  int matrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  printArray(matrix);
  rotateArray(matrix);
  printArray(matrix);

  return 0;
}