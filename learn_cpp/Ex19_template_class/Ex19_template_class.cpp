// Ex19_template_class.cpp : Template class.
//

#include <iostream>
using namespace std;

template<typename T>
class Calculator {

public:
    T add(T a, T b) {
        return a + b;
    }

    T sub(T a, T b) {
        return a - b;
    }
};


template<typename T, int length>
class Array {
public:

    T array[length];

    void fill(T value) {
        for (int i = 0; i < length; i++) {
            array[i] = value;
        }
    }

    void set(int index, T value) {
        array[index] = value;
    }

    T& get(int index) {
        return array[index];
    }

    void print() {
        for (int i = 0; i < length; i++) {
            cout << "array[" << i << "] = " << array[i] << endl;
        }
        cout << endl;
    }

};


int main()
{
    cout << "1. Demonstrate template class:\n";
    Calculator <int> intCalc;
    cout << "Add integers 1 and 2 using the template class: " << intCalc.add(1, 2) << endl;
    cout << "Subtract integers 1 and 2 using the template class: " << intCalc.sub(1, 2) << endl;

    Calculator <float> floatCalc;
    cout << "\nAdd float 1.2 and 2.1 using the template class: " << floatCalc.add(1.2, 2.1) << endl;
    cout << "Subtract float 1.2 and 2.1 using the template class: " << floatCalc.sub(1.2, 2.1) << endl;

    cout << "\n2. Demonstrate template class with two arguments:\n";
    Array<int, 5> int_array;
    cout << "-int array with 5 elements:\n";
    int_array.fill(255);
    int_array.set(2, 128);
    int_array.print();

    Array<string, 8> str_array;
    cout << "-string array with 8 elements:\n";
    str_array.fill("ABC");
    str_array.set(0, "123");
    str_array.set(1, "456");
    str_array.print();

    return 0;
}

