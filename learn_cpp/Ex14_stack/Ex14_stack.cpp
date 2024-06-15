// Ex14_stack.cpp : stack data structure.
//

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> plates;

    std::cout << "Push three data elements to the stack:\n";
    plates.push(1);
    std::cout << plates.top() << '\n';
    plates.push(2);
    std::cout << plates.top() << '\n';
    plates.push(3);
    std::cout << plates.top() << '\n';

    std::cout << "\nPop and print each element until the stack is empty:\n";
    while (!plates.empty()) {
        std::cout << "Upper plate is " << plates.top() << '\n';
        plates.pop();
    }

    std::cout << "stack is empty now!\n";
}