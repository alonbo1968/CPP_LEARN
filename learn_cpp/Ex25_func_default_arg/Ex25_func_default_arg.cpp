// Ex25_func_default_arg.cpp : Function default arguments
//

#include <iostream>

int sum(int a, int b, int c = 0, int d = 0) { //c and d have default argument of 0
    return a + b + c + d;
}

int main()
{
    std::cout << "--- Demonstrate Function default arguments ---\n";
    std::cout << " Call the function with 4 parameters of 1: Result = " << sum(1, 1, 1, 1) << std::endl;
    std::cout << " Call the function with 3 parameters of 1: Result = " << sum(1, 1, 1) << ". 4th argument default of 0 is used" << std::endl;
    std::cout << " Call the function with 2 parameters of 1: Result = " << sum(1, 1) << ". 3rd and 4th argument default of 0 is used" << std::endl;
}

