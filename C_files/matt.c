#include <stdio.h>

int main() {
    int i, j;
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Adjust the array sizes based on the input
    int A[r][c], B[r][c], sum[r][c];

    printf("Enter the elements of matrix A:\n ");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n ");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate the sum of matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of matrix:\n");

    // Print the elements of the sum matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}