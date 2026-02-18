#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct account {
    int accNo;
    int pin;
    float balance;
};

void logTransaction(char msg[]) {
    FILE *fp = fopen("atm_log.txt", "a");
    time_t t = time(NULL);
    fprintf(fp, "%s - %s", msg, ctime(&t));
    fclose(fp);
}

int main() {
    struct account acc = {1234, 1111, 5000};
    int pin, choice;
    float amount;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if(pin != acc.pin) {
        printf("Invalid PIN.\n");
        return 0;
    }

    do {
        printf("\nATM MENU\n");
        printf("1.Balance\n2.Deposit\n3.Withdraw\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Balance: %.2f\n", acc.balance);
                logTransaction("Balance inquiry");
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Deposit successful.\n");
                logTransaction("Deposit");
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if(amount <= acc.balance) {
                    acc.balance -= amount;
                    printf("Withdraw successful.\n");
                    logTransaction("Withdraw");
                } else {
                    printf("Insufficient balance.\n");
                }
                break;

            case 4:
                printf("Thank you.\n");
                break;
        }
    } while(choice != 4);

    return 0;
}