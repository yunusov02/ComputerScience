#include <stdio.h>

typedef struct complexNumber {
	int real;
	int img;
} complex;

// typedef is used to create a new type name complex for the struct complexNumber
// which is equivalent to
//      struct complexNumber num1;
//      complex num1;

complex add(complex x, complex y);

// int main()
// {
// 	complex a, b, sum;

// 	a.real = 2;
// 	a.img = 3;

// 	b.real = 4;
// 	b.img = 5;

// 	printf("\n a = %d + %di", a.real, a.img);

// 	printf("\n b = %d + %di", b.real, b.img);

// 	sum = add(a, b);

// 	printf("\n sum = %d + %di", sum.real, sum.img);

// 	return 0;
// }

int main() {
    int n;

    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);

    complex *arr = (complex *)malloc(n * sizeof(complex));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit with an error code
    }

    printf("Enter %d complex numbers (real and imaginary parts):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Complex number %d: ", i + 1);
        scanf("%d %d", &arr[i].real, &arr[i].img);
    }

    printf("\nEntered complex numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d + %di\n", arr[i].real, arr[i].img);
    }

    free(arr);

    return 0;
}


complex add(complex x, complex y)
{
	complex add;

	add.real = x.real + y.real;

	add.img = x.img + y.img;

	return (add);
}
