#include <stdio.h>


int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}


int armstrongSum(int n, int digits)
{
    if (n == 0)
        return 0;
    return power(n % 10, digits) + armstrongSum(n / 10, digits);
}

int main()
{
    int num, temp, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    if (armstrongSum(num, digits) == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
