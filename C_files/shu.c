#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

void addRecord() {
    FILE *fp = fopen("students1.txt", "a");
    struct student s;

    if(fp == NULL) {
        printf("File error!\n");
        return;
    }

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%d|%s|%.2f\n", s.roll, s.name, s.marks);
    fclose(fp);

    printf("Record added successfully.\n");
}

void displayRecords() {
    FILE *fp = fopen("students1.txt", "r");
    struct student s;

    if(fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n----Student Records:----\n");


    while (fscanf(fp, "%d|%[^|]|%f\n",
                  &s.roll, s.name, &s.marks) != EOF) {
        printf("Roll: %d  Name: %s  Marks: %.2f\n",
               s.roll, s.name, s.marks);
    }

    fclose(fp);
}

void updateRecord() {
    FILE *fp = fopen("students1.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct student s;
    int roll, found = 0;

    if(fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter roll number to update: ");
    scanf("%d", &roll);

    while (fscanf(fp, "%d|%[^|]|%f\n",
                  &s.roll, s.name, &s.marks) != EOF) {
        if (s.roll == roll) {
            printf("Enter new marks: ");
            scanf("%f", &s.marks);
            found = 1;
        }
        fprintf(temp, "%d|%s|%.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
    fclose(temp);

    remove("students1.txt");
    rename("temp.txt", "students1.txt");

    if(found)
        printf("Record updated successfully.\n");
    else
        printf("Record not found.\n");
}

void deleteRecord() {
    FILE *fp = fopen("students1.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct student s;
    int roll, found = 0;

    if(fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    while (fscanf(fp, "%d|%[^|]|%f\n",
                  &s.roll, s.name, &s.marks) != EOF) {
        if (s.roll != roll) {
            fprintf(temp, "%d|%s|%.2f\n",
                    s.roll, s.name, s.marks);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("students1.txt");
    rename("temp.txt", "students1.txt");

    if(found)
        printf("Record deleted successfully.\n");
    else
        printf("Record not found.\n");
}

int main() {
    int choice;

    do {
        printf("\nSTUDENT RECORD MENU\n");
        printf("1. Add Record\n");
        printf("2. Display Records\n");
        printf("3. Update Record\n");
        printf("4. Delete Record\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addRecord(); break;
            case 2: displayRecords(); break;
            case 3: updateRecord(); break;
            case 4: deleteRecord(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 5);

    return 0;
}
