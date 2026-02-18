#include <iostream>
#include <chrono>
#include <cmath>
#include <thread>
#include <vector>
#include <cstdlib>
#include <ctime>

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

// ==== RANDOM TEST SELECTION ====
void random_test() {
    // Initialize random seed
    srand(time(0));

    // Choose random test
    int test_choice = rand() % 3; // 0, 1, or 2 for 3 types

    // Randomize parameters
    int iterations = rand() % 100000000 + 10000000; // Between 10M and 100M
    int num_threads = rand() % 4 + 1;  // Between 1 and 4 threads
    size_t ram_mb = rand() % 2048 + 512; // Between 512MB and 2048MB

    auto start = std::chrono::high_resolution_clock::now();

    switch (test_choice) {
        case 0: // CPU Single-threaded
            std::cout << "Running CPU Single-threaded Stress...\n";
            cpu_single_thread(iterations);
            break;

        case 1: // CPU Multi-threaded
            std::cout << "Running CPU Multi-threaded Stress with " << num_threads << " threads...\n";
            cpu_multi_thread(iterations, num_threads);
            break;

        case 2: // RAM Stress
            std::cout << "Running RAM Stress, allocating " << ram_mb << "MB...\n";
            ram_stress(ram_mb);
            break;

        default:
            std::cout << "Unknown test type!\n";
            return;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Test completed in " << duration.count() << " seconds.\n";
    std::cout << "Final result to prevent optimization: " << prevent_opt << "\n";
}

int main() {
    std::cout << "Random Stress Test Program\n";
    random_test();
    return 0;
}
