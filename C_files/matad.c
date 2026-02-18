#include <stdio.h>
int main(){

    int i, j;
    int r, c;
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of column: ");
    scanf("%d", &c);

    int A[100][100], B[100][100], sum[100][100];


    printf("Enter the elements of matrix A:\n ");

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter the elements of matrix B:\n ");


    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            scanf("%d", &B[i][j]);
        }
    }
      
    printf("Sum of matrix :\n ");

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            sum[i][j] = A[i][j] + B[i][j];
            printf("%d", sum[i][j]);
        }
          printf("\n");
    
    }




return 0;
}