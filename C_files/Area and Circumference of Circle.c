#include <stdio.h>
#define PI 3.1416

int main() 
{
    float r, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("Area = %.2f\nCircumference = %.2f", area, circumference);
    return 0;
}