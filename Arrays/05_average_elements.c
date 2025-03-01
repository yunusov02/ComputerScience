#include <stdio.h>


float calculate_average(int array[], int size) {
    float result;
    int total = 0;
    int count = 0;


    for (int i = 0; i < size; i++) {
        total += array[i];
        count += 1;
    }

    result = (float)total / count;

    return result;

}


int main() {

    int array[] = {34, 56, 23, 567, 34, -1, 34, 7};

    int size = sizeof(array) / sizeof(array[0]);

    float average = calculate_average(array, size);

    printf("%0.3lf\n", average);


    return 0;
}