// Ex19a_constructor_delegation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <string>

using namespace std;

class Rectangles {
public:
    int length;
    int width;
    int area;
    string color;

    Rectangles(int l, int w) {
        length = l;
        width = w;
        area = length * width;
        cout << "constructor1 called!" << endl;
    }

    Rectangles(int l, int w, string c) : Rectangles(l, w) {
        color = c;
        cout << "Constructor1 is called by Constructor2 due to Constructor Delegation" << endl;
        cout << "constructor2 called!" << endl;
    }

    void print() {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Area = " << area << endl;
        cout << "Color = " << color << endl;
    }
};

int main()
{
    cout << "---Constructor Delegations ---\n";
    cout << "Constructor Delegations help to reduce code duplications in the Constructors.\n";
    cout << endl;
    cout << "Create first object, use Constructor1:" << endl;
    Rectangles rec1(2, 3);
    rec1.print();

    cout << endl;
    cout << "Create second object, use Constructor2:" << endl;
    Rectangles rec2(4, 5, "Green");
    rec2.print();
    cout << endl;

    return 0;
}

