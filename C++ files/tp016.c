#include <stdio.h>
void square() 
{
    int n, result;
    printf("ENter the value \n");
    scanf("%d", &n);
    result = n * n;
    printf("square of given number is=%d\n", result);
}
int main (){
    square();
    printf("Hello!!\n");
    square();




    return 0;
}