#include <stdio.h>

struct product {
    char pname[50];
    int pid;
    float price;
};

void accept(struct product p[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter details of product %d\n", i + 1);
        printf("Product Name: ");
        scanf("%s", p[i].pname);
        printf("Product ID: ");
        scanf("%d", &p[i].pid);
        printf("Price: ");
        scanf("%f", &p[i].price);
    }
}

void display(struct product p[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nProduct %d details:\n", i + 1);
        printf("Name: %s\n", p[i].pname);
        printf("ID: %d\n", p[i].pid);
        printf("Price: %.2f\n", p[i].price);
    }
}

void search_by_id(struct product p[], int n, int id) {
    int i, found = 0;

    for(i = 0; i < n; i++) {
        if(p[i].pid == id) {
            printf("\nRecord Found:\n");
            printf("Name: %s\n", p[i].pname);
            printf("ID: %d\n", p[i].pid);
            printf("Price: %.2f\n", p[i].price);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nRecord is not exists");
}

int main() {
    struct product p[50];
    int n, id;

    printf("Enter number of products: ");
    scanf("%d", &n);

    accept(p, n);
    display(p, n);

    printf("\nEnter product ID to search: ");
    scanf("%d", &id);

    search_by_id(p, n, id);

    return 0;
}
