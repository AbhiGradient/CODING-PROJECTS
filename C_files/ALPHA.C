#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("It is an Alphabet and Uppercase.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("It is an Alphabet and Lowercase.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("It is a Digit.\n");
    }
    else {
        printf("It is a Special Symbol.\n");
    }

    return 0;
}
