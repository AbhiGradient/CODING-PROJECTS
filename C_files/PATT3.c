#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 4; i++) {          // 4 rows
        for (j = 1; j <= i; j++) {      // print i characters in each row
            printf("%c ", ch);
            ch++;                       // move to next alphabet
        }
        printf("\n");
    }

    return 0;
}

