#include <stdio.h>

int main() {
    int i, j;

    for (i = 4; i >= 1; i--) {      // start from 5 stars down to 1
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
