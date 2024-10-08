// ex3_pointers.cpp : Function pointers
//

#include <iostream>


using namespace std;

int main()
{
    cout << " 1. Regular Pointers \n";
    int a = 153;
    int *pa;
    cout << "a = " << a << '\n';
    cout << "Address of a = " << &a << '\n';
    pa = &a;
    cout << "a = " << *pa << '\n';
    cout << "Address of a = " << pa << '\n';

    cout << "\n 2. Pointers to dynamic memory \n";
    cout << "Dynamicly allocate memory using \'new\' keyword \n";
    int *array = new int[100];
    for (int i = 0; i <100; i++) {
        array[i] = 0;
    }

    int* p_array = array;
    cout << "Pointer address: " << p_array << '\n';
    cout << "Pointer first element: " << *p_array << '\n';
    cout << "Create a second pointer:" << '\n';
    int* p2 = p_array;
    cout << "Second pointer: " << *p2 << '\n';

    cout << "De-allocate memory using \"delete\" keyword. Note the \"[]\" after delete keyword: \n";
    delete[] array;







    return 0;
}

