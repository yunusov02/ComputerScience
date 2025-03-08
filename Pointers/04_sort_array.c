#include <stdio.h>

void sort(int *arr, int N) {
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    printf("%d ", *(arr + i));
  }

  printf("\n");
}

int main() {
  int n = 5;
  int arr[] = {0, 23, 14, 13, 3};

  sort(arr, n);

  return 0;
}