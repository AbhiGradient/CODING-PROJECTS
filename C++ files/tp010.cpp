#include <iostream>
int main()
{         
    
    int n;
    std::cout << "Enter the size of the square matrix (n x n): ";
    std::cin >> n;

    int A[10][10], B[10][10], C[10][10];

    // Input matrix A
    std::cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> A[i][j];
        }
    }

    // Input matrix B
    std::cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> B[i][j];
        }
    }

    // Initialize result matrix C to zero
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication: C = A × B
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result matrix C
    std::cout << "Resultant matrix (A × B):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << C[i][j] << "\t";
        }
        std::cout << std::endl;
    }





    return 0;
}