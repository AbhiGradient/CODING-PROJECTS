#include<stdio.h>
#include<conio.h>

int main()
{
    float area1, area2, area3, length_rectangle, width_rectangle, base_triangle, height_triangle, side_square;
    printf("enter length rectangle: ");
    scanf("%f", &length_rectangle);

    printf("enter width of rectangle: ");
    scanf("%f", &width_rectangle);
    
    area1 = length_rectangle * width_rectangle;
    printf("Area of Rectangle = %.2f\n", area1);

    printf("enter base of triangle: ");
    scanf("%f", &base_triangle);

    printf("enter height of triangle: ");
    scanf("%f", &height_triangle);

    area2 = 0.5* base_triangle * height_triangle;
    printf("area of triangle = %.2f\n", area2);

    printf("enter side of square: ");
    scanf("%f", &side_square);

    area3 = side_square * side_square;
    printf("area of square = %.2f", area3);

    



    
    return 0;

    
}