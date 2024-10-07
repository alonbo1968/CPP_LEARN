// Ex27_abstruct_class.cpp : Abstruct Class - Pure Virtual Function
//
#include <iostream>

//Define an Abstruct class 
class Base {
public:
    //Pure Virtual function is defined as " = 0"  
    virtual int Operation(int a, int b) = 0;
};

class Add : public Base {
    int Operation(int a, int b) override{
        std::cout << "Add x + y: Result = ";
        return a + b;
    }
};

class Sub : public Base {
    int Operation(int a, int b) override {
        std::cout << "Subtract x - y: Result = ";
        return a - b;
    }
};


int main()
{
    std::cout << "***Pure Virtual Functions and Abstruct classes***\n";
    int x = 5;
    int y = 2;

    std::cout << "Input numbers: " << "x = " << x << ", y = " << y << '\n';
    Base* pOperation = new Add;
    std::cout << pOperation->Operation(x, y) << '\n';
    delete pOperation;
    pOperation = NULL;

    pOperation = new Sub;
    std::cout << pOperation->Operation(x, y) << '\n';
    delete pOperation;
 
    return 0;
 }

