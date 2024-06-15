// Ex11_inheritance.cpp : Inheritance
//
using namespace std;
#include <iostream>


class Animal {
private:
    int color;
protected:
    string gender;
    int age;
public:
    Animal(string new_gender, int new_age)
        : gender(new_gender), age(new_age) {};//member Initializer List
};

class Dog :public Animal {
    string breed;

public:
    Dog(string new_gender, int new_age, string new_breed)  //Constructor, using Animal inherited constructor
        : Animal(new_gender, new_age), breed(new_breed) {}

    void sound() {
        cout << " Woof\n";
    }

    void details() {
        cout << " Aninal gender is " << gender << ", Animal age is " << age << ", Dog breed is " << breed << "\n";
    }
};

int main()
{
    cout << "Create Dog object, inherited from Animal class\n";
    Dog buddy("male", 8, "Husky");
    cout << "Execute Dog member functions:\n";
    buddy.details();
    buddy.sound();
}

