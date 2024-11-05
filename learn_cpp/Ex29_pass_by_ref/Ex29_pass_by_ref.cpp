// Ex29_pass_by_ref.cpp : Demonstrate pass By Reference on variables and Objects
//

#include <iostream>

class Counters {
public:
    int count1;
    int count2;
    int count3;
    Counters(int c1 = 0, int c2 = 0, int c3 = 0) {
        count1 = c1;
        count2 = c2;
        count3 = c3;
    }

    void show() {
        std::cout << "  Counter1 = " << count1 << std::endl;
        std::cout << "  Counter2 = " << count2 << std::endl;
        std::cout << "  Counter3 = " << count3 << std::endl;
    }

};

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void increment(Counters& counter_A) {
    counter_A.count1++;
    counter_A.count2++;
    counter_A.count3++;
}


int main()
{
    std::cout << "---Demonstrate pass By Reference on variables and Objects---\n";

    std::cout << "1. Simple variables function arguments passed by reference:" << std::endl;
    std::cout << "   If the function needs to change many variables, it is conveniant to use References." << std::endl;
    int x = 2;
    int y = 3;
    std::cout << "BEFORE swapping: x=" << x << ", y=" << y << std::endl;
    swap(x, y);
    std::cout << "AFTER swapping: x=" << x << ", y=" << y << std::endl;

    std::cout << std::endl << "2. Object arguments passed by reference:" << std::endl;
    std::cout << "   Send the Object REFERENCE as an argument." << std::endl;
    Counters main_counters(0, 0, 0);
    std::cout << "BEFORE increment:" << std::endl;
    main_counters.show();
    increment(main_counters);
    std::cout << "AFTER increment:" << std::endl;
    main_counters.show();
    std::cout << "Passing an object by VALUE genertates a SHALLOW COPY. " << std::endl;
    std::cout << "This is bad if the Object has Dynamic Memory Allocation." << std::endl;
    std::cout << "So passing the Object as a Refernce creates DEEP COPY." << std::endl;
    return 0;
}

