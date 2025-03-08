#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int array[], int size) {
  int swapped;

  for (int i = 0; i < size - 1; i++) {
    swapped = 0;

    for (int j = i + 1; j < size; j++) {
      if (array[i] > array[j]) {
        swap(&array[i], &array[j]);
        swapped = 1;
      }
    }

    if (swapped == 0) {
      break;
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
}

int main() {
  int array[] = {34, 54, 1, 67, 3, 12};

  int size = sizeof(array) / sizeof(array[0]);

  bubble_sort(array, size);

  printArray(array, size);

  return 0;
}