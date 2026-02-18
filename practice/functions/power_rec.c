#include <stdio.h>

int power(int x, int y) {
    if(y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}

int main() {
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("Result = %d", power(base, exp));

    return 0;
}
