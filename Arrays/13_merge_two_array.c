#include <stdio.h>
#include <stdlib.h>


int *mergeArrays(int arr1[], int n1, int arr2[], int n2) {
    int *res = (int *)malloc((n1 + n2) * sizeof(int));

    int index = 0;

    for (int i = 0; i < n1; i++) {
        res[index] = arr1[i];
        index++;
    }

    for (int i = 0; i < n2; i++) {
        res[index] = arr2[i];
        index++;
    }

    return res;
}

int main() {
    int arr1[] = {1, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Merge the two arrays
    int *res = mergeArrays(arr1, n1, arr2, n2);
    
    for (int i = 0; i < n1 + n2; i++) printf("%d ", res[i]);

    printf("\n");

    free(res);

    return 0;
}













// int main() {

//     int array1[] = {1, 3, 5};
//     int array2[] = {2, 4, 6};

//     int size1 = sizeof(array1) / sizeof(array1[0]);
//     int size2 = sizeof(array2) / sizeof(array2[0]);

//     int size = size1 + size2;

//     int array[size];

//     int index = 0;
//     for (int i = 0; i < size1; i++) {
//         array[index] = array1[i];
//         index++;
//     }

//     for (int i = 0; i < size2; i++) {
//         array[index] = array2[i];
//         index++;
//     }

//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }


//     return 0;
// }