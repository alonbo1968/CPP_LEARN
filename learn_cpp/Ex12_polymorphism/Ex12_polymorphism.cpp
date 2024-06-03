// Ex12_polymorphism.cpp : Polymorphism.
//

#include <iostream>
using namespace std;

class Animal {
public:
    void action() {
        cout << "Animals have different properties: \n";
    }
};

class Fish :public Animal{
public:
    void action() {
        cout << " Fish Swims. \n";
    }
};

class Bird :public Animal {
public:
    void action() {
        cout << " Bird Flies. \n";
    }
};

int main()
{
    Animal new_animal;
    Fish new_fish;
    Bird new_bird;

    new_animal.action();
    new_fish.action();
    new_bird.action();

    return 0;
}

