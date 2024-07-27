// Ex22_threads.cpp : C++ Threads
//

#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono_literals; //For the time literals like ms (mili second)

void common_func(int a) {
    for (int i = 0; i < 2000; i++) {
        cout << a;
    }
}


int main()
{
        cout << "First threads example: Creat two threads using the same function with a parameter" << endl;
        int param1 = 1;
        int param2 = 2;
        std::cout << "*** Demonstrate threads creation ***\n";
        thread thread1(common_func, param1);//Create thread1
        thread thread2(common_func, param2);//Create thread2

    system("pause>nul");
}

