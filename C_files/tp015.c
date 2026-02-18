#include <stdio.h>
int main() {
        int A[100][100], B[100][100], C[100][100];
        int i, j, k;
        printf("ENter the elements of matrix 'A': ");

        for(i=1; i<=3; i++){
             for(j=1; j<=3; j++){
                printf("A[%d][%d]", i, j);
                scanf("%d", &A[i][j]);
             }
        }

        printf("ENter the elements of matrix 'B': ");
        for(i=1; i<=3; i++){
             for(j=1; j<=3; j++){
                printf("B[%d][%d]", i, j);
                scanf("%d", &B[i][j]);
             }
        }

        for(i=1; i<=3; i++){
            for(j=1; j<=3; j++){
                C[i][j]=  0;
            }
        }
        for(i=1; i<=3; i++){
            for(j=1; j<=3; j++){
                for(k=1;k<=3; k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
           
            }
        }
        printf("\n Resultantt Matrix C(axb):  \n");
        for(i=1; i<=3; i++){
            for(j=1; j<=3; j++){
              printf("%d\t", C[i][j]);
            }printf("\n");
        } 







    return 0;
}