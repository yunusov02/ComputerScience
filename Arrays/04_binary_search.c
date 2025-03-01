#include <stdio.h>

int binarySearch(int array[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (array[middle] == key) {
            return middle;
        } else if (array[middle] > key) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }

    return -1;
}




int main() {

    int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int key = 91;

    int size = sizeof(array) / sizeof(array[0]);

    int position = binarySearch(array, size, key);


    printf("%d\n", position);

    return 0;
}