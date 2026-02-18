#include <iostream>
#include <chrono>
#include <cmath>

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i <= std::sqrt(n); ++i) {
        bool divisible = false;
        for (int j = 0; j < 100; ++j) { // Artificial delay
            divisible |= (n % i == 0);
        }
        if (divisible) return false;
    }
    return true;
}

int main() {
    const long long RANGE_END = 100000; // Increase this to stress more

    auto start = std::chrono::high_resolution_clock::now();

    long long primeCount = 0;
    for (long long i = 1; i <= RANGE_END; ++i) {
        if (isPrime(i)) primeCount++;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Total primes found: " << primeCount << std::endl;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}