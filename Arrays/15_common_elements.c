#include <stdio.h>
#include <stdlib.h>


int main() {
    int array1[] = { 1, 2, 2, 3, 5, 6, 7, 8, 18, 29, 37 };
    int array2[] = { 2, 2, 4, 5, 7, 9, 10, 18 };

    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    int index = 0;
    int common_array[n1 + n2];

    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (array1[i] < array2[j]) {
            i++;
        } else if (array1[i] > array2[j]) {
            j++;
        } else {
            int flag = 0;

            for (int k = 0; k < index; k++) {
                if (array1[i] == common_array[k]) flag = 1;
            }

            if (flag == 0) {
                common_array[index] = array1[i];
                index++;
            }
            i++;
            j++;
        }
    }


    for (int i = 0; i < index; i++) {
        printf("%d ", common_array[i]);
    }
    printf("\n");

    return 0;
}







// BELOW CODE IS NOT EFFICIENT

// int *remove_duplicates(int array[], int size, int *new_size) {
//     int *res = (int *)malloc(size * sizeof(int));
//     if (!res) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }

//     int index = 0;
//     for (int i = 0; i < size; i++) {
//         int has_element = 0;
//         for (int j = 0; j < index; j++) {
//             if (array[i] == res[j]) {
//                 has_element = 1;
//                 break;
//             }
//         }
//         if (has_element == 0) {
//             res[index++] = array[i];
//         }
//     }

//     *new_size = index;  // Store the new size
//     return res;
// }

// int main() {
//     int arr1[] = {8, 2, 3, 4, 5, 6, 7, 1, 4, 4};
//     int arr2[] = {4, 5, 7, 11, 6, 1, 4, 4};

//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);

//     int new_size1, new_size2;
//     int *new_arr1 = remove_duplicates(arr1, n1, &new_size1);
//     int *new_arr2 = remove_duplicates(arr2, n2, &new_size2);

//     // Find common elements
//     printf("Common elements: ");
//     for (int i = 0; i < new_size1; i++) {
//         for (int j = 0; j < new_size2; j++) {
//             if (new_arr1[i] == new_arr2[j]) {
//                 printf("%d ", new_arr1[i]);
//                 break;
//             }
//         }
//     }

//     free(new_arr1);
//     free(new_arr2);

//     printf("\n");

//     return 0;
// }
