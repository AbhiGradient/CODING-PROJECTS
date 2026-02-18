#include <stdio.h>

struct student {
    char name[50];
    int rno;
    float average;
};

void accept(struct student s[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].rno);
        printf("Average: ");
        scanf("%f", &s[i].average);
    }
}

void display(struct student s[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nStudent %d details:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].rno);
        printf("Average: %.2f\n", s[i].average);
    }
}

void topper(struct student s[], int n) {
    int i, pos = 0;

    for(i = 1; i < n; i++) {
        if(s[i].average > s[pos].average)
            pos = i;
    }

    printf("\nTopper Details:\n");
    printf("Name: %s\n", s[pos].name);
    printf("Roll No: %d\n", s[pos].rno);
    printf("Average: %.2f\n", s[pos].average);
}

int main() {
    struct student s[50];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    accept(s, n);
    display(s, n);
    topper(s, n);

    return 0;
}
