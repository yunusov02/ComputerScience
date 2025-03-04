#include <stdio.h>


void reverseString(int arr[], int N) {
    int index;

    for (int i = 0; i < N / 2; i ++) {
        index = N - i - 1;

        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        
    }

}



int main() {

    int arr[] = {1, 2, 3, 4, 5};

    int N = sizeof(arr) / sizeof(arr[0]);

    reverseString(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}