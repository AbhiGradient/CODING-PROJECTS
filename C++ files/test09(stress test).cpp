#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <chrono>

// Function to multiply two matrices
void matrixMultiply(int size) {
    std::vector<std::vector<int>> A(size, std::vector<int>(size));
    std::vector<std::vector<int>> B(size, std::vector<int>(size));
    std::vector<std::vector<int>> result(size, std::vector<int>(size));

    // Initialize matrices A and B with random values
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            A[i][j] = rand() % 100;
            B[i][j] = rand() % 100;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to sort a large array
void sortLargeArray(int size) {
    std::vector<int> arr(size);
    
    // Initialize the array with random values
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000;
    }
    
    // Sort the array
    std::sort(arr.begin(), arr.end());
}

// Function to simulate a complex calculation
void simulateComplexComputation(int iterations) {
    double result = 0.0;
    
    // Perform a large number of complex calculations
    for (int i = 0; i < iterations; ++i) {
        result += (i % 2 == 0 ? 1.0 : -1.0) * (i * 3.14159);
    }
}

int main() {
    srand(time(0));  // Seed for random number generation
    
    int choice;
    int size;
    int iterations;

    std::cout << "Choose a stress test option:\n";
    std::cout << "1. Matrix Multiplication\n";
    std::cout << "2. Sort Large Array\n";
    std::cout << "3. Simulate Complex Computation\n";
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;
    
    std::cout << "Enter the size of the test (e.g., 1000 for 1000x1000 matrix or 1000000 for large array): ";
    std::cin >> size;

    if (choice == 1) {
        auto start = std::chrono::high_resolution_clock::now();
        matrixMultiply(size);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        std::cout << "Matrix multiplication completed in " << duration.count() << " seconds.\n";
    } else if (choice == 2) {
        auto start = std::chrono::high_resolution_clock::now();
        sortLargeArray(size);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        std::cout << "Array sorted in " << duration.count() << " seconds.\n";
    } else if (choice == 3) {
        std::cout << "Enter the number of iterations for the computation: ";
        std::cin >> iterations;
        auto start = std::chrono::high_resolution_clock::now();
        simulateComplexComputation(iterations);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = end - start;
        std::cout << "Complex computation completed in " << duration.count() << " seconds.\n";
    } else {
        std::cout << "Invalid choice.\n";
    }

    return 0;
}
