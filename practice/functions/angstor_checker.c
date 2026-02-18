#include <stdio.h>

int isArmstrong(int n) {
    int original, remainder, digits = 0, sum = 0, i, power;

    original = n;

    while(n != 0) {
        digits++;
        n /= 10;
    }

    n = original;

    while(n != 0) {
        remainder = n % 10;
        power = 1;

        for(i = 1; i <= digits; i++) {
            power = power * remainder;
        }

        sum = sum + power;
        n /= 10;
    }

    if(sum == original)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Number is an Armstrong number");
    else
        printf("Number is NOT an Armstrong number");

    return 0;
}
