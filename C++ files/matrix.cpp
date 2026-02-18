#include <iostream>
using namespace std;

// Function to input matrix elements
void inputMatrix(int matrix[10][10], int rows, int cols) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}

// Matrix addition
void addMatrix(int a[10][10], int b[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = a[i][j] + b[i][j];
}

// Matrix subtraction
void subtractMatrix(int a[10][10], int b[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = a[i][j] - b[i][j];
}

// Matrix multiplication
void multiplyMatrix(int a[10][10], int b[10][10], int result[10][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k)
                result[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, choice;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    inputMatrix(a, r1, c1);

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    inputMatrix(b, r2, c2);

    cout << "\nChoose an operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        if (r1 == r2 && c1 == c2) {
            addMatrix(a, b, result, r1, c1);
            cout << "\nResult (Addition):\n";
            displayMatrix(result, r1, c1);
        } else {
            cout << "Matrix addition not possible (size mismatch).\n";
        }
        break;

    case 2:
        if (r1 == r2 && c1 == c2) {
            subtractMatrix(a, b, result, r1, c1);
            cout << "\nResult (Subtraction):\n";
            displayMatrix(result, r1, c1);
        } else {
            cout << "Matrix subtraction not possible (size mismatch).\n";
        }
        break;

    case 3:
        if (c1 == r2) {
            multiplyMatrix(a, b, result, r1, c1, c2);
            cout << "\nResult (Multiplication):\n";
            displayMatrix(result, r1, c2);
        } else {
            cout << "Matrix multiplication not possible (invalid dimensions).\n";
        }
        break;

    default:
        cout << "Invalid choice!\n";
    }

    return 0;
}
