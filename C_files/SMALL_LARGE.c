#include <stdio.h>

int main() {
    int num, digit;
    int smallest = 9, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;  // extract last digit

        if (digit > largest)
            largest = digit;

        if (digit < smallest)
            smallest = digit;

        num = num / 10;  // remove the last digit
    }

    printf("Smallest digit = %d\n", smallest);
    printf("Largest digit = %d\n", largest);

    return 0;
}
