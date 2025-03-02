#include <stdio.h>

int remove_elements(int array[], int size, int value) {
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] != value) {
            array[index] = array[i];
            index++;
        }
    }

    return index;
}



int main() {

    int array[] = {1, 1, 2, 1, 1, 3, 1, 4, 5, 6, 1, 1, 1, 4};
    int size = sizeof(array) / sizeof(array[0]);

    int value = 1;

    int new_size = remove_elements(array, size, value);


    for (int i = 0; i < new_size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");


    return 0;
}