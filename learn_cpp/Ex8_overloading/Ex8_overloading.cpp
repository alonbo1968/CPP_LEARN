// Ex8_overloading.cpp : 
//

#include <iostream>

/* add() function in overloaded by either parameter number or types */
int add(int a, int b) {
    return (a + b);
}

int add(int a, int b, int c) {  
    return (a + b + c);
}

float add(float a, float b) {
    return (a + b);
}

int main()
{
    std::cout << "Demonstrate function overloading:\n";
    std::cout << "Original function with two int parameters 1 and 2 returns: " << add(1, 2) << '\n';
    std::cout << "Overloaded function with three int parameters 1 , 5, 2 returns: " << add(1, 5, 2) << '\n';
    std::cout << "Overloaded function with two float parameters 2.5 and 3 returns: " << add(2.5f, 3.0f) << '\n';

}
