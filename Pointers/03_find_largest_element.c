#include <stdio.h>
#include <stdlib.h>


void findLargest(int *arr, int N) {
    for (int i = 0; i < N; i++) {
        if (*arr < *(arr + i)) {
            *arr = *(arr + i);
        }
    }

    printf("%d\n", *arr);
}

int main() {
    int N = 4;

    int *arr;

    arr = (int *)calloc(N, sizeof(int));

    if (arr == NULL) {
        printf("No memory Allocation");
        exit(0);
    }

    *(arr + 0) = 14;
    *(arr + 1) = 11;
    *(arr + 2) = 19;
    *(arr + 3) = 4;

    findLargest(arr, N);
    
    return 0;
}