#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    // Ask user for operator
    printf("Enter an operator (+, -, *): ");
    scanf(" %c", &op); // Note the space before %c (to ignore newline)

    // Ask user for two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on input
    if (op == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    }
    else {
        printf("Error: Invalid operator!\n");
    }

    return 0;
}
