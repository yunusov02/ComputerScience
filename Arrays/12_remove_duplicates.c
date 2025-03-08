#include <stdio.h>

int removeDuplicates(int arr[], int n) {
  if (n == 0) return 0;

  int j = 0;
  for (int i = 1; i < n - 1; i++) {
    if (arr[i] != arr[j]) {
      j++;
      arr[j] = arr[i];
    }
  }

  return j + 1;
}

int main() {
  int array[] = {1, 1, 2, 2, 2, 3, 4, 6, 6, 6};

  int size = sizeof(array) / sizeof(array[0]);

  printf("Original Array\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  printf("Array after removing duplicates\n");

  int new_size = removeDuplicates(array, size);
  for (int i = 0; i < new_size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}