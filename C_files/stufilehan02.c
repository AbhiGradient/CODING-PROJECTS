#include <stdio.h>

struct student {
    char name[50];
    int marks;
};

int main() {
    FILE *fp = fopen("marks.txt","r");
    struct student s;
    int count=0, max=0, min=100, sum=0;

    while(fscanf(fp,"%s %d", s.name, &s.marks) != EOF) {
        if(s.marks > max) max = s.marks;
        if(s.marks < min) min = s.marks;
        sum += s.marks;
        count++;
    }
    fclose(fp);

    printf("Highest: %d\n", max);
    printf("Lowest: %d\n", min);
    printf("Average: %.2f\n", (float)sum/count);

    return 0;
}