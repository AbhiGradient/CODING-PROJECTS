#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

void addRecord() {
    FILE *fp = fopen("students.dat", "ab");
    struct student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Record added successfully.\n");
}

void displayRecords() {
    FILE *fp = fopen("students.dat", "rb");
    struct student s;

    if(fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\nStudent Records:\n");
    while(fread(&s, sizeof(s), 1, fp)) {
        printf("Roll: %d  Name: %s  Marks: %.2f\n",
               s.roll, s.name, s.marks);
    }
    fclose(fp);
}

void updateRecord() {
    FILE *fp = fopen("students.dat", "rb+");
    struct student s;
    int roll, found = 0;

    printf("Enter roll number to update: ");
    scanf("%d", &roll);

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.roll == roll) {
            printf("Enter new marks: ");
            scanf("%f", &s.marks);
            fseek(fp, -(long)sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);
            found = 1;
            break;
        }
    }
    fclose(fp);

    if(found)
        printf("Record updated.\n");
    else
        printf("Record not found.\n");
}

void deleteRecord() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct student s;
    int roll, found = 0;

    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.roll != roll)
            fwrite(&s, sizeof(s), 1, temp);
        else
            found = 1;
    }

    fclose(fp);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");

    if(found)
        printf("Record deleted.\n");
    else
        printf("Record not found.\n");
}

int main() {
    int choice;

    do {
        printf("\nSTUDENT RECORD MENU\n");
        printf("1.Add\n2.Display\n3.Update\n4.Delete\n5.Exit\n");
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