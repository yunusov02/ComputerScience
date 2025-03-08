# Dynamic Memory Allocation

## malloc()
The `malloc` function allocates **a block of memory** of a given size and returns a pointer to it. However the allocated memory is not initialized

```c
void *malloc(size_t size);
```
- **Returns**: Pointer to the allocated memory
- **If allocation is fails**: Returns `NULL`

### Example

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocating memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory Allocation failed\n");
        return 1;
    }

    // Assign Values
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    // Print
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
}

```

## calloc()
The `calloc()` function allocates **multiple blocks** of memory and **initialized them to zero**

```c
void *calloc(size_t num, size_t, size);
```
- **num:** Number of elements
- **size:** Size of each elements
- **Returns** Pointer to allocated memory (initialized to zero)

### Example

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int *)malloc(5, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation is failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}

```

## realloc()
The `realloc()` function is used to resize a previously allocated memory block

```c
void *realloc(void *ptr, size_t new_size);
```

- `ptr` Pointer to existing memory block
- `new_size` New size of memory
- **Returns** Pointer to newly allocated memory;

### Example

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    // Allocate memory for 3 intergers
    ptr = (int *)malloc(3 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assigning Values
    for (int i = 0; i < 3; i++) {
        ptr[i] = i * i;
    }

    // Resizing memory for 5 integers
    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory Reallocation is failed\n");
        return 1;
    }

    // Assigning new values
    for (int i = 3; i < 5; i++) {
        ptr[i] = i * i;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}

```

## Everything in one
```c
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

```