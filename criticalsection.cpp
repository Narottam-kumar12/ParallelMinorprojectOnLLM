#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <ctime>
#include <iomanip>

// Mutex for mutual exclusion
std::mutex mtx;

// Function for each process
void process_function(int process_id) {
    // Request to enter critical section
    std::lock_guard<std::mutex> lock(mtx); 

    
    auto now = std::chrono::system_clock::now();
    std::time_t enter_time = std::chrono::system_clock::to_time_t(now);
    std::cout << "Process " << process_id << " entered critical section at "
              << std::put_time(std::localtime(&enter_time), "%H:%M:%S") << "\n";

    // Simulate critical section work
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Get current time for exiting critical section
    now = std::chrono::system_clock::now();
    std::time_t exit_time = std::chrono::system_clock::to_time_t(now);
    std::cout << "Process " << process_id << " exited critical section at "
              << std::put_time(std::localtime(&exit_time), "%H:%M:%S") << "\n";
}

int main() {
    const int n = 5; 

    // Create and start threads
    std::thread threads[n];
    for (int i = 0; i < n; ++i) {
        threads[i] = std::thread(process_function, i + 1);
    }

    // Wait for all threads to complete
    for (int i = 0; i < n; ++i) {
        threads[i].join();
    }

    return 0;
}