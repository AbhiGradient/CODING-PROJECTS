#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;   // long long used for larger results

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number is not defined.\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d is %lld\n", n, fact);
    }

    return 0;
}
