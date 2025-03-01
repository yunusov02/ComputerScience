#include <stdio.h>


int findMax(int array[], int size) {
    int max = array[0];

    for (int i = 1; i < size; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }

    return max;
}



int main() {
    int array[] = {4, 6, 1, 9};

    int s = sizeof(array) / sizeof(array[0]);

    int maxElement = findMax(array, s);

    printf("%d\n", maxElement);

    return 0;
}
