#include <stdio.h>

int main() {
    int number, originalNumber, lastDigit, reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number > 0) {
        lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        number = number / 10;
    }

    if (originalNumber == reversedNumber)
        printf("%d is a Palindrome Number.\n", originalNumber);
    else
        printf("%d is not a Palindrome Number.\n", originalNumber);

    return 0;
}
