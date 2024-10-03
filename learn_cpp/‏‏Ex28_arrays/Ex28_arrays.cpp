// Ex28_scope_resolution.cpp : Arrays
//

#include <iostream>
#include <numeric>
#include <iterator>
#include <array> 

using namespace std;

void foo() {
}


int main()
{
    cout << '\n';
    cout << "  1. --- Built In arrays (raw arrays)--- \n";
    int array1[10];//Raw array
    cout << "\nInitialize the array using iota library functions:\n";
    iota(begin(array1), end(array1), 100);
    cout << "\nPrint array1[]:\n";
    for (int i : array1) {
        cout << i << '\n';
    }

    cout << "\n  2. --- Std Template array library  ---";
    cout << "\n  Std arrays has some safety improvements \n";
    array<int, 10> array2;//Standard library array
    iota(begin(array2), end(array2), 1000);
    cout << "\nPrint array2[] using range  based for loop:\n";
    for (auto i : array2) {
        cout << i << '\n';
    }

    cout << "\nPrint half of array2[]:\n";
    for (int i = 0; i < array2.size()/2; i++) {
        cout << array2[i] << '\n';
    }

    cout << "\nFill array2[] using fill library:\n";
    fill(array2.begin(), array2.end(), 5555);
    for (auto i : array2) {
        cout << i << '\n';
    }

    int x;
    float y;
    char a;
    signed char b;
    unsigned char c;
    cout << '\n';
    cout << "Address of x " << &x << '\n';
    cout << "Address of y " << &y << '\n';
    cout << "Address of a " << (void*)&a << '\n';
    cout << "Address of b " << (void*)&b << '\n';
    cout << "Address of c " << (void*)&c << '\n';
    cout << '\n';
    cout << "Address of foo() " << (void*)&foo << '\n';
    cout << "Address of main() " << (void*)&main << '\n';


    return 0;
}

