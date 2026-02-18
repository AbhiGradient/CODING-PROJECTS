#include <iostream>
#include <chrono>
#include <cmath>

// Volatile global variable to prevent optimization
volatile double prevent_optimization = 0.0;

void simulateHeavyLoop(int iterations) {
    double result = 0.0;
    for (int i = 0; i < iterations; ++i) {
        // Real math: sin() prevents compiler from optimizing it away
        result += (i % 2 == 0 ? 1.0 : -1.0) * std::sin(i * 3.14159);
    }
    prevent_optimization = result; // Store result to volatile variable
}

int main() {
    int iterations;

    std::cout << "Simulating REAL heavy loop.\n";
    std::cout << "Enter number of iterations: ";
    std::cin >> iterations;

    auto start = std::chrono::high_resolution_clock::now();

    simulateHeavyLoop(iterations);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Loop completed in " << duration.count() << " seconds.\n";
    std::cout << "Final (protected) result: " << prevent_optimization << "\n";

    return 0;
}
