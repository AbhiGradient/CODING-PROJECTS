#include <iostream>
#include <chrono>
#include <cmath>
#include <thread>
#include <vector>
#include <cstring>
#include <cstdlib>

// Volatile result to prevent optimization
volatile double prevent_opt = 0.0;

// ==== CPU SINGLE THREAD ====
void cpu_single_thread(int iterations) {
    double result = 0.0;
    for (int i = 0; i < iterations; ++i) {
        result += std::sin(i * 3.14159);
    }
    prevent_opt = result;
}

// ==== CPU MULTI THREAD ====
void thread_worker(int iterations) {
    double result = 0.0;
    for (int i = 0; i < iterations; ++i) {
        result += std::sin(i * 3.14159);
    }
    prevent_opt += result;
}

void cpu_multi_thread(int iterations, int num_threads) {
    std::vector<std::thread> threads;
    int iters_per_thread = iterations / num_threads;

    for (int i = 0; i < num_threads; ++i) {
        threads.emplace_back(thread_worker, iters_per_thread);
    }

    for (auto &t : threads) {
        t.join();
    }
}

// ==== RAM STRESS ====
void ram_stress(size_t mb) {
    size_t bytes = mb * 1024 * 1024;
    char* memory = new(std::nothrow) char[bytes];
    if (!memory) {
        std::cerr << "Memory allocation failed.\n";
        return;
    }

    auto start = std::chrono::high_resolution_clock::now();

    for (size_t i = 0; i < bytes; ++i) {
        memory[i] = static_cast<char>(i % 256);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "RAM write stress (" << mb << " MB) took " << duration.count() << " seconds.\n";

    delete[] memory;
}

// ==== MAIN MENU ====
int main() {
    int choice;
    std::cout << "Select stress test:\n";
    std::cout << "1. CPU (Single-threaded)\n";
    std::cout << "2. CPU (Multi-threaded)\n";
    std::cout << "3. RAM Stress\n";
    std::cout << "4. GPU Stress (coming soon)\n";
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    auto start = std::chrono::high_resolution_clock::now();

    if (choice == 1) {
        int iterations;
        std::cout << "Enter number of iterations: ";
        std::cin >> iterations;
        cpu_single_thread(iterations);
    } else if (choice == 2) {
        int iterations, threads;
        std::cout << "Enter total iterations: ";
        std::cin >> iterations;
        std::cout << "Enter number of threads to use: ";
        std::cin >> threads;
        cpu_multi_thread(iterations, threads);
    } else if (choice == 3) {
        size_t ram_mb;
        std::cout << "Enter RAM size to allocate (in MB): ";
        std::cin >> ram_mb;
        ram_stress(ram_mb);
    } else if (choice == 4) {
        std::cout << "GPU stress test is coming soon. Requires OpenCL support.\n";
    } else {
        std::cout << "Invalid choice.\n";
        return 1;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Test completed in " << duration.count() << " seconds.\n";
    std::cout << "Final result to prevent optimization: " << prevent_opt << "\n";
    return 0;
}
