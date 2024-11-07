// Ex23a_mutex_a.cpp : Mutex
//

#include <iostream>
#include <thread>
#include <mutex>

#define MAX_COUNT   100000

long counter = 0;
std::mutex mtx;

void increase_count(int thread_num) {
    for(int i = 0; i < MAX_COUNT; i++) {
        counter = counter + 1;
        //std::cout << thread_num;
    }
}

void increase_count_with_mutex(int thread_num) {
    for (int i = 0; i < MAX_COUNT; i++) {
        //mtx.lock();//lock mutex before critical section
        std::lock_guard<std::mutex> lock(mtx);
        counter = counter + 1;
        //mtx.unlock();//release mutex after critical section
        
        //std::cout << thread_num;
    }
}


int main()
{
    std::cout << "1. Create two threads with no mutex, execute a few times and check result for consistancy:\n";
    std::thread thread1(increase_count, 1);
    std::thread thread2(increase_count, 2);
    thread1.join();
    thread2.join();
    std::cout << "counter without using a mutes = " << counter << std::endl;
    if (counter < (2 * MAX_COUNT)) {
        std::cout << "counter did not reach the expected value due to race condition." << std::endl;
    }
    else {
        std::cout << "counter reached expected value!" << std::endl;
    }

    counter = 0;
    std::cout << std::endl;
    std::cout << "2. Create two threads wIth mutex, execute a few times and check result for consistancy:\n";
    std::thread thread3(increase_count_with_mutex, 3);
    std::thread thread4(increase_count_with_mutex, 4);
    thread3.join();
    thread4.join();
    std::cout << "counter WITH MUTEX = " << counter << std::endl;
    if (counter < (2 * MAX_COUNT)) {
        std::cout << "counter did not reach the expected value due to race condition" << std::endl;
    }
    else {
        std::cout << "counter reached expected value!" << std::endl;
    }

    return 0;

}

