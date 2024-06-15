// Ex12_polymorphism.cpp : Polymorphism.
//

#include <iostream>
using namespace std;

class Animal {
public:
    void action() {
        cout << "-action() method output: Animals have different properties: \n";
    }
};

class Fish :public Animal{
public:
    void action() {
        cout << "-action() method output: Fish Swims. \n";
    }
};

class Bird :public Animal {
public:
    void action() {
        cout << "-action() method output: Bird Flies. \n";
    }
};

int main()
{
    Animal new_animal;
    Fish new_fish;
    Bird new_bird;

    cout << "Polymorphism allows a derived class to override methods inherited from its base class:\n";
    new_animal.action();
    new_fish.action();
    new_bird.action();

    return 0;
}

