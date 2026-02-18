#include <stdio.h>

void primeFactors(int n) {
    int i;

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors are: ");
    primeFactors(n);

    return 0;
}
