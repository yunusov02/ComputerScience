#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(2 * sizeof(int));

    if (arr == NULL) {
        printf("Memory Allocation failed\n");
    }
    int count = 0, capacity = 2, num;

    printf("Enter numbers (0 to stop): \n");    

    while (1) {
        scanf("%d", &num);

        if (num == 0) break;

        if (count == capacity) {
            capacity *= 2;
            arr = (int *)realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Memory reallocation is failed");
                return 1;
            }
        }

        arr[count] = num;
        count++;
    }

    printf("Print Entered values\n");

    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
