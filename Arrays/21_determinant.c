#include <stdio.h>
#define N 4


int determinantOfMatrix(int mat[][N], int n) {
    int D = 0;

    if (n == 1) return mat[0][0];

    int temp[N][N];

    int sign = 1;

    for (int i = 0; i < n; i++) {
        D += -sign * mat[0][i] * determinantOfMatrix(temp, n - 1);
    }

}





int main() {

    int mat[N][N] = {{1, 0, 2, -1},
                     {3, 0, 0, 5},
                     {2, 1, 4, -3},
                      {1, 0, 5, 0}};
 
    // Function call
    printf("Determinant of the matrix is : %d", determinantOfMatrix(mat, N));
    return 0;
}