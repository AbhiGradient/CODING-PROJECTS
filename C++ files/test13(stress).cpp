#include <iostream>
#include <fstream>
#include <cmath>
#include <chrono>
#include <vector>
#include <thread>
#include <cstdlib>

// Volatile result to prevent optimization
volatile double prevent_opt = 0.0;

// Function to simulate CPU-bound task (heavy calculations)
void cpu_bound_task(int iterations) {
    double result = 0.0;
    for (int i = 0; i < iterations; ++i) {
        result += std::sin(i * 3.14159);
    }
    prevent_opt = result; // Prevent compiler optimization
}

// Function to simulate Memory-bound task (allocate and write to memory)
void memory_bound_task(size_t mb) {
    size_t bytes = mb * 1024 * 1024;
    char* memory = new(std::nothrow) char[bytes];  // Allocate memory

    if (!memory) {
        std::cerr << "Memory allocation failed.\n";
        return;
    }

    // Write data to the allocated memory
    for (size_t i = 0; i < bytes; ++i) {
        memory[i] = static_cast<char>(i % 256);
    }

    delete[] memory; // Free memory
}

// Function to simulate Disk I/O-bound task (write to file)
void disk_io_bound_task(const std::string& filename, size_t mb) {
    std::ofstream outfile(filename, std::ios::binary);
    if (!outfile) {
        std::cerr << "Failed to open file for writing.\n";
        return;
    }

    size_t bytes = mb * 1024 * 1024;
    std::vector<char> buffer(bytes, 0); // Create a buffer to write to the file

    // Write large chunks of data to simulate disk I/O stress
    auto start = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < 10; ++i) {
        outfile.write(buffer.data(), bytes);
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << "Disk I/O task completed. Time: " << duration.count() << " seconds.\n";
}

int main() {
    std::cout << "Long-Running Stress Test Program\n";

    // Step 1: Randomize test parameters
    int cpu_iterations = rand() % 1000000000 + 100000000; // Between 100M and 1B iterations
    size_t memory_size = rand() % 8192 + 2048; // Random memory size between 2GB and 8GB
    size_t disk_size = rand() % 1024 + 512; // Random disk I/O size between 512MB and 1024MB
    std::string filename = "stress_test_output.dat"; // Output file name for I/O test

    std::cout << "Running CPU Bound Task with " << cpu_iterations << " iterations...\n";
    auto start = std::chrono::high_resolution_clock::now();
    cpu_bound_task(cpu_iterations);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> cpu_duration = end - start;
    std::cout << "CPU task completed in " << cpu_duration.count() << " seconds.\n";

    std::cout << "Running Memory Bound Task with " << memory_size << "MB...\n";
    start = std::chrono::high_resolution_clock::now();
    memory_bound_task(memory_size);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> memory_duration = end - start;
    std::cout << "Memory task completed in " << memory_duration.count() << " seconds.\n";

    std::cout << "Running Disk I/O Bound Task with " << disk_size << "MB...\n";
    start = std::chrono::high_resolution_clock::now();
    disk_io_bound_task(filename, disk_size);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> disk_duration = end - start;
    std::cout << "Disk I/O task completed in " << disk_duration.count() << " seconds.\n";

    std::cout << "Stress Test Completed. Final result to prevent optimization: " << prevent_opt << "\n";
    return 0;
}
