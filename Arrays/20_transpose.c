#include <stdio.h> 
#define N 4 

void transpose(int A[][N], int B[][N]) 
{ 
	int i, j; 
	for (i = 0; i < N; i++) 
		for (j = 0; j < N; j++) 
			B[i][j] = A[j][i]; 
} 

int main() 
{ 
	int A[N][N] = { { 1, 1, 1, 1 }, 
					{ 2, 2, 2, 2 }, 
					{ 3, 3, 3, 3 }, 
					{ 4, 4, 4, 4 } }; 

	int B[N][N], i, j; 

	transpose(A, B); 

	printf("Result matrix is \n"); 
	for (i = 0; i < N; i++) { 
		for (j = 0; j < N; j++) 
			printf("%d ", B[i][j]); 
		printf("\n"); 
	} 

	return 0; 
}
