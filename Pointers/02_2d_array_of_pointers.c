#include <stdio.h>
#include <stdlib.h>

// First method is statically

// int main() {

//     int arr1[5][5] = {
//         {0, 1, 2, 3, 4},
//         {2, 3, 4, 5, 6},
//         {3, 4, 5, 6, 7},
//         {4, 5, 6, 7, 8},
//         {5, 6, 7, 8, 9}
//     };

//     int *arr2[5][5];

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             arr2[i][j] = &arr1[i][j];
//         }
//     }

//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             printf("%d ", *arr2[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

int main() {
  int arr1[5][5] = {{0, 1, 2, 3, 4},
                    {2, 3, 4, 5, 6},
                    {3, 4, 5, 6, 7},
                    {4, 5, 6, 7, 8},
                    {5, 6, 7, 8, 9}};

  int ***arr2 = (int ***)malloc(
      5 * sizeof(int **));  // if it was not a pointer
                            // int **arr2 = (int **)malloc(5 * sizeof(int *))

  for (int i = 0; i < 5; i++) {
    arr2[i] = (int **)malloc(
        5 * sizeof(int *));  // arr2[i] = (int *)malloc(5 * sizeof(int))
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      arr2[i][j] = &arr1[i][j];
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", *arr2[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 5; i++) {
    free(arr2[i]);
  }

  free(arr2);

  return 0;
}