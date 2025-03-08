#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
  int first_value = arr[0];

  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = first_value;
}

void leftRotateByInterval(int arr[], int d, int n) {
  for (int i = 0; i < d; i++) {
    leftRotateByOne(arr, n);
  }
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(array) / sizeof(array[0]);

  leftRotateByInterval(array, 2, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
}