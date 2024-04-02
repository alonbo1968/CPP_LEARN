// ex5_classes_b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "main.hpp"


int main()
{
    Dog dog1, dog2;

    dog1.setName("Trixie");
    dog1.setLicenseNumber(1234);
    dog2.setName("kali");
    dog2.setLicenseNumber(5678);

    cout << "\nPrint class info using the class print function:\n";
    dog1.printInfo();
    dog2.printInfo();

    cout << "\nPrint class info using the class functions:\n";
    cout << "First dog name is " << dog1.getName() << '\n';
    cout << "First dog License is " << dog1.getLicenseNumber() << '\n';
    cout << "Second dog name is " << dog2.getName() << '\n';
    cout << "Second dog License is " << dog2.getLicenseNumber() << '\n';
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
