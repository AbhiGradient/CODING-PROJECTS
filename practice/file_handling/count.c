#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, tabs = 0, chars = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;
        if (ch == '\t')
            tabs++;
    }

    printf("Number of characters = %d\n", chars);
    printf("Number of lines = %d\n", lines);
    printf("Number of tabs = %d\n", tabs);

    fclose(fp);

    return 0;
}
