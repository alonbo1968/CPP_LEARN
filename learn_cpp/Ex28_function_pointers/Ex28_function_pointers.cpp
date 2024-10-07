// Ex28_function_pointers.cpp : Function Pointers
//

#include <iostream>
#include <functional> //For definning function pointers by std::functional


int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int main()
{
    std::cout << "std::endl";
    std::cout << "---Demonstrate c++ function pointers---\n";
    std::cout << "1. Standard methos used in C:\n";
     
    int (*pFP)(int, int);
    
    std::cout << "Set the function pointer to add function: " << std::endl;
    pFP = add;
    std::cout << "Add x and y: " << pFP(2, 3) << std::endl;
    std::cout << "Set the function pointer to multiply function: " << std::endl;
    pFP = mul;
    std::cout << "Multiply x and y: " << pFP(2, 3) << std::endl;

    std::cout << std::endl << "2. Using Functional Library:\n";
    std::cout << "Use standard function template to define a function pointer:";
    std::function<int(int, int)> op;
    std::cout << "Set the function pointer to add function: " << std::endl;
    op = add;
    std::cout << "Add x and y: " << op(3, 4) << std::endl;
    op = mul;
    std::cout << "multiply x and y: " << op(3, 4) << std::endl;

    return 0;
}

