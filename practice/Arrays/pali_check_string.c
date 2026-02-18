#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("String is a Palindrome");
    else
        printf("String is NOT a Palindrome");

    return 0;
}