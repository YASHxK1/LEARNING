#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>

class CPUStressTester {
private:
    volatile bool* running;
    int* data_array;
    size_t array_size;
    
public:
    CPUStressTester(size_t size) : array_size(size) {
        running = new volatile bool(true);
        data_array = new int[array_size];
        
        // Initialize array with random values
        std::srand(static_cast<unsigned>(std::time(nullptr)));
        for (size_t i = 0; i < array_size; ++i) {
            data_array[i] = std::rand();
        }
    }
    
    ~CPUStressTester() {
        delete running;
        delete[] data_array;
    }
    
    // CPU-intensive task using pointer arithmetic
    void intensive_computation(int thread_id) {
        int* ptr = data_array;
        int* end_ptr = data_array + array_size;
        long long operations = 0;
        
        while (*running) {
            // Pointer-based array traversal and computation
            while (ptr < end_ptr && *running) {
                // Intensive mathematical operations
                *ptr = (*ptr * 17 + 23) ^ (*ptr >> 3);
                *(ptr + 1) = (*(ptr + 1) << 2) | (*(ptr + 1) >> 30);
                
                // More pointer arithmetic
                int* temp_ptr = ptr + 2;
                if (temp_ptr < end_ptr) {
                    *temp_ptr += (*ptr) * (*(ptr + 1));
                }
                
                ptr += 3;
                operations += 3;
            }
            
            // Reset pointer to beginning
            ptr = data_array;
            
            // Additional CPU-intensive operations
            for (int i = 0; i < 1000; ++i) {
                volatile double result = 0.0;
                for (int j = 0; j < 100; ++j) {
                    result += std::sqrt(i * j + 1.0) * std::sin(i) * std::cos(j);
                }
            }
        }
        
        std::cout << "Thread " << thread_id << " completed " << operations << " operations\n";
    }
    
    void start_stress_test(int num_threads, int duration_seconds) {
        std::cout << "Starting CPU stress test with " << num_threads << " threads for " 
                  << duration_seconds << " seconds...\n";
        
        std::vector<std::thread> threads;
        threads.reserve(num_threads);
        
        // Create worker threads
        for (int i = 0; i < num_threads; ++i) {
            threads.emplace_back(&CPUStressTester::intensive_computation, this, i);
        }
        
        // Run for specified duration
        std::this_thread::sleep_for(std::chrono::seconds(duration_seconds));
        
        // Signal threads to stop
        *running = false;
        
        // Wait for all threads to complete
        for (auto& thread : threads) {
            if (thread.joinable()) {
                thread.join();
            }
        }
        
        std::cout << "Stress test completed!\n";
    }
};

void matrix_multiplication_stress(int** matrix_a, int** matrix_b, int** result, int size) {
    for (int i = 0; i < size; ++i) {
        int* row_a = matrix_a[i];
        int* row_result = result[i];
        
        for (int j = 0; j < size; ++j) {
            row_result[j] = 0;
            
            for (int k = 0; k < size; ++k) {
                row_result[j] += row_a[k] * matrix_b[k][j];
            }
        }
    }
}

void memory_intensive_operations(size_t memory_size) {
    std::cout << "Starting memory-intensive operations...\n";
    
    // Allocate large chunks of memory using pointers
    char* large_buffer = new char[memory_size];
    char* ptr = large_buffer;
    char* end_ptr = large_buffer + memory_size;
    
    // Fill memory with patterns
    while (ptr < end_ptr) {
        *ptr = static_cast<char>((ptr - large_buffer) % 256);
        ++ptr;
    }
    
    // Random access pattern to stress memory subsystem
    for (int i = 0; i < 1000000; ++i) {
        size_t random_offset = std::rand() % memory_size;
        char* random_ptr = large_buffer + random_offset;
        *random_ptr = (*random_ptr + 1) % 256;
    }
    
    delete[] large_buffer;
    std::cout << "Memory operations completed.\n";
}

int main() {
    std::cout << "=== CPU Stress Test Program ===\n\n";
    
    // Get number of hardware threads
    unsigned int num_cores = std::thread::hardware_concurrency();
    if (num_cores == 0) num_cores = 4; // fallback
    
    std::cout << "Detected " << num_cores << " CPU cores\n";
    
    // Configuration
    size_t array_size = 1000000;  // 1M integers
    int test_duration = 10;       // 10 seconds
    size_t memory_size = 100 * 1024 * 1024;  // 100MB
    
    try {
        // Main CPU stress test
        CPUStressTester tester(array_size);
        tester.start_stress_test(static_cast<int>(num_cores), test_duration);
        
        // Additional matrix multiplication stress test
        std::cout << "\nStarting matrix multiplication test...\n";
        int matrix_size = 200;
        
        // Allocate matrices using pointers
        int** matrix_a = new int*[matrix_size];
        int** matrix_b = new int*[matrix_size];
        int** result = new int*[matrix_size];
        
        for (int i = 0; i < matrix_size; ++i) {
            matrix_a[i] = new int[matrix_size];
            matrix_b[i] = new int[matrix_size];
            result[i] = new int[matrix_size];
            
            // Initialize with random values
            for (int j = 0; j < matrix_size; ++j) {
                matrix_a[i][j] = std::rand() % 100;
                matrix_b[i][j] = std::rand() % 100;
            }
        }
        
        auto start_time = std::chrono::high_resolution_clock::now();
        matrix_multiplication_stress(matrix_a, matrix_b, result, matrix_size);
        auto end_time = std::chrono::high_resolution_clock::now();
        
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
        std::cout << "Matrix multiplication completed in " << duration.count() << " ms\n";
        
        // Cleanup matrices
        for (int i = 0; i < matrix_size; ++i) {
            delete[] matrix_a[i];
            delete[] matrix_b[i];
            delete[] result[i];
        }
        delete[] matrix_a;
        delete[] matrix_b;
        delete[] result;
        
        // Memory stress test
        memory_intensive_operations(memory_size);
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    std::cout << "\n=== All stress tests completed! ===\n";
    return 0;
}