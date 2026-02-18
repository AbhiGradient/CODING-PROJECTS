#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {        // rows
        for (j = 1; j <= i; j++) {    // print numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
