#include <stdio.h>
#define N 4

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int arr[]) {
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (arr[i] > arr[j]) {
        swap(&arr[i], &arr[j]);
      }
    }
  }
}

int main() {
  int array[][N] = {{8, 5, 7, 2}, {7, 3, 0, 1}, {8, 5, 3, 2}, {9, 4, 2, 1}};

  for (int i = 0; i < N; i++) {
    bubbleSort(array[i]);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}