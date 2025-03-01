#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int j = 0;
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] != arr[j]) arr[++j] = arr[i];
    }

    return j + 1;

}


int main() {

    int array[] = {1, 1, 2, 2, 2, 3, 4, 6, 6, 6};

    int size = sizeof(array) / sizeof(array[0]);

    size = removeDuplicates(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}