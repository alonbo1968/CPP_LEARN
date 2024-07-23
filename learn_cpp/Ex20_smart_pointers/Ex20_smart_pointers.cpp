// Ex20_smart_pointers.cpp : Smart pointers
//

#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:

    MyClass() {
        cout << "Constructor called" << endl;
    }
    ~MyClass() {
        cout << "Destructor called" << endl;
    }

    void print() {
        cout << "Hello!" << endl << endl;
    }
};



int main()
{
    cout << "Regular new/delete:" << endl;
    MyClass* pointer_class = new(MyClass);
    pointer_class->print();
    delete pointer_class;

    cout << "*** 1. Smart Pointers demo - unique pointers: ***" << endl;
    cout << "Smart Pointers to int demo:" << endl;
    unique_ptr<int>unPtr1 = make_unique <int>(25);//unPtr1 is an int unique smart pointer, holding address of make_unique
    cout << "Address of make_unique smart pointer is " << unPtr1 << endl;
    cout << "Contents of make_unique smart pointer is " << *unPtr1 << endl;

    cout << "\nMove the unique pointer ownership to unPtr2 from unPtr1:\n";
    unique_ptr<int>unPtr2 = move(unPtr1);//
    cout << "*unPtr2 = " << *unPtr2 << endl;
    cout << "unPtr1 becomed NULL: unPtr1= " << unPtr1 << endl;

    cout << "\nSmart Pointers to object demo:" << endl;
    {
        unique_ptr<MyClass>unPtr3 = make_unique<MyClass>();
        cout << "If the destructor is called, it means that the allocated memory were released!" << endl;
    }
        
    cout << "\n*** 2. Smart Pointers demo - shared pointers: ***" << endl;
    {
        shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
        cout << "Number of owners (Shared count) is: " << shPtr1.use_count() << endl;
        cout << "Assign another shared pointer: " << endl;
        {
            shared_ptr<MyClass>shPtr2 = shPtr1;
            cout << "Number of owners (Shared count) is: " << shPtr1.use_count() << endl;
        }
        cout << "Number of owners (Shared count) is: " << shPtr1.use_count() << endl;
    }

    cout << "\n*** 3. Smart Pointers demo - weak pointers: ***" << endl;
    weak_ptr<int>wePtr1;
    {
        shared_ptr<int>shPtr2 = make_shared<int>(25);
        wePtr1 = shPtr2;
    }






    return 0;
}
