// Ex22_threads.cpp : C++ Threads
//

#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono_literals; //For the time literals like ms (mili second)

/*
void common_func(int a) {
    for (int i = 0; i < 200; i++) {
        cout << a;
    }
}
*/

void refreshForecast(map <string, int>  forecastUpdate) {
    while (1) {
        cout << endl;
        for (auto& item: forecastUpdate) { //"item must be a reference ('&', otherwise the original element would not be updated!
            item.second++; //Increse temperature in this location
            cout << "Temp.in " << item.first << " is " << item.second << endl;//Show location and the updated Temperature 
        }
        this_thread::sleep_for(2000ms); //Put the thread in Sleep for 2 seconds
    }
}

int main()
{
/*  
    cout << "First threads example: Creat two threads using the same function with a parameter" << endl;
    int param1 = 1;
    int param2 = 2;
    std::cout << "*** Demonstrate threads creation ***\n";
    thread thread1(common_func, param1);//Create thread1
    thread thread2(common_func, param2);//Create thread2
*/


   cout << "Second threads example : A thread executes every 2 seconds" << endl;
   map <string, int> forecastMap = { //Hash map
        {"New York", 31},
        {"London", 25},
        {"Rome", 28}
    };
    thread bgWorker(refreshForecast, forecastMap);


    system("pause>nul");
    //return 0;
}

