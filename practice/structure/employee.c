#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

void accept(struct employee e[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
}

void display(struct employee e[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d details:\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("ID: %d\n", e[i].id);
        printf("Salary: %.2f\n", e[i].salary);
    }
}

void search(struct employee e[], int n, char sname[]) {
    int i, found = 0;

    for(i = 0; i < n; i++) {
        if(strcmp(e[i].name, sname) == 0) {
            printf("\nRecord Found:\n");
            printf("Name: %s\n", e[i].name);
            printf("ID: %d\n", e[i].id);
            printf("Salary: %.2f\n", e[i].salary);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nRecord not exists");
}

int main() {
    struct employee e[50];
    int n;
    char sname[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    accept(e, n);
    display(e, n);

    printf("\nEnter employee name to search: ");
    scanf("%s", sname);

    search(e, n, sname);

    return 0;
}
