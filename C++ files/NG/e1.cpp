#include <iostream>
using namespace std;

long long sumOfDigits(long long number) {
    long long sum = 0;

    while (number > 0) {
        long long digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

int main() {
    long long number;

    cout << "=== Experiment 1: Numerical Data Processing ===\n";
    cout << "Enter a positive integer: ";

    if (!(cin >> number) || number <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    cout << "Sum of digits = " << sumOfDigits(number) << '\n';

    return 0;
}