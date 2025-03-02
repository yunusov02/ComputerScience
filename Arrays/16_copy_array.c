#include <stdio.h>

void copyArr(int *arr1, int *arr2, int n) {
    for (int i = 0; i < n; i++) {

        *(arr2 + i) = *(arr1 + i);
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n];

    copyArr(arr1, arr2, n);
  
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}
