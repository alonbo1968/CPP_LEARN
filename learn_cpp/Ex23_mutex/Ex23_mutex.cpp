// Ex23_mutex.cpp : Mutex demo
//

#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

mutex bike_mutex;

void common_func(std::string rider) {
    //unique_lock<mutex> bike_lock(bike_mutex); //Lock Mutex. You can use "lock_guard" instead
    lock_guard<mutex> bike_lock(bike_mutex); //Lock Mutex
    // Critical section start
    std::cout << std::endl;
    std::cout << rider << " is riding" << std::endl;
    std::this_thread::sleep_for(chrono::seconds(2));
    std::cout << rider << " is finished riding" << std::endl;
    // Critical section end
    //bike_lock.unlock();//Unlock Mutex not necessary when "lock_guard" is used
}

int main()
{
    std::cout << "*** Mutex demo***" << endl;

    thread t1(common_func, "Manual Letti");
    std::cout << "Created thread with ID=" <<t1.get_id() << endl;

    thread t2(common_func, "Johnny Walker");
    std::cout << "Created thread with ID=" << t2.get_id() << endl;

    t1.join();
    t2.join();

    //system("pause>nul");
    std::cin.get();
    //return 0;
}

