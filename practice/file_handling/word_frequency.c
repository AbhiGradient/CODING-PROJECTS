#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char word[]) {
    int i;
    for (i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
}

int main() {
    FILE *fp;
    char word[50], temp[50];
    int count = 0;

    fp = fopen("data1.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%s", word);

    toLower(word);

    while (fscanf(fp, "%s", temp) != EOF) {
        toLower(temp);
        if (strcmp(word, temp) == 0)
            count++;
    }

    printf("Frequency of '%s' = %d", word, count);

    fclose(fp);

    return 0;
}
