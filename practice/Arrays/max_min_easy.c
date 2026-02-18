#include<stdio.h>
int  main(){


 int i, n;
 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
     int A[n];

    
    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);   
     }
 int max=A[0];
    int min=A[0];
    
    for(int i=1; i<n; i++){
        if(A[i]>max){
            max = A[i];
        }
        if(A[i]<min){
            min = A[i];
        }

    }
    printf("Maximum value is: %d\n", max);
    printf("Minimum value is: %d\n", min);
    return 0;
}