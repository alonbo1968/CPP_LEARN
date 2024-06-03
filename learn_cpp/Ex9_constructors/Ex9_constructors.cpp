// Ex9_constructors.cpp : Demonstrate constructors and member initializer list 
//

#include <iostream>
#include "main.hpp"

int main()
{
    std::cout << "Demonstrate Constructors:\n";

    std::cout << "1. Constructor with parameters:\n";
    Car car1("Corola", "Toyota", 105, 14000);//
    car1.summery();

    std::cout << "2. Constructor with dafault and non-default parameters:\n";
    Car car2("Rav4");
    car2.summery();

}

