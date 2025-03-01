#include <stdio.h>

struct pair {
    int min;
    int max;
};


struct pair findMinMax(int array[], int size) {
    struct pair minMax;

    minMax.max = array[0];
    minMax.min = array[1];

    for (int i = 0; i < size; i++) {
        if (minMax.max < array[i]) {
            minMax.max = array[i];
        } else if (minMax.min > array[i]) {
            minMax.min = array[i];
        }
    }

    return minMax;

}


int main() {


    int array[] = {100, -2, 4, 6, -35, 40, 120};

    int size = sizeof(array) / sizeof(array[0]);

    struct pair getMinMax = findMinMax(array, size);

    printf("The maximum element of an array: %d\n", getMinMax.max);
    printf("The minimum element of and array: %d\n", getMinMax.min);

    return 0;
}