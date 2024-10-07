// Ex26_virtual_functions.cpp : Virtual Functions demonstration
//

#include <iostream>
using namespace std;


class Base {
public:
    //virtual function
    virtual void print() {
        cout << "Base function!\n";
    }
};

class Derived : public Base {
public:
    //this function overrides the virtual function in the base class
    void print() override {
        cout << "Derived function!\n";
    }

};


int main()
{
    cout << "*** Virtual function Demo***" << endl;

    Derived derived1;
    // pointer of Base type that points to derived1
    Base* base1 = &derived1;
    //print() function of derived class will be executed
    base1->print();

    //Do the same, this time dynamicly allocate object memory
    Base *base2 = new Derived;
    base2->print();
    delete base2;

    return 0;
}

