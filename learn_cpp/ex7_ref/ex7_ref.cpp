// ex7_ref.cpp : Demonstrate Refrences
//

#include <iostream>

void swap(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

int main()
{
    std::cout << "...Demonstrate Refrences!...\n";

    int a = 5;
    int b = 10;
    std::cout << "Refrence must be initialized on declaration!\n";
    int& ref_to_a = a;
    std::cout << "a = " << a << '\n';
    std::cout << "ref_to_a = " << ref_to_a << '\n';
    ref_to_a++;
    std::cout << "ref_to_a after it is increments is " << ref_to_a << '\n';
    std::cout << "a after ref_to_a is increments is " << a << '\n';

    std::cout << "\nPass by reference function variables:\n";
    std::cout << "Before swapping: a = " << a << ", b = " << b << '\n';
    swap(a, b);
    std::cout << "After swapping: a = " << a << ", b = " << b << '\n';
    swap(ref_to_a, b);//Func. parameters may be either 'a' or "ref_to_a"
    std::cout << "After swapping back: a = " << a << ", b = " << b << '\n';
}

