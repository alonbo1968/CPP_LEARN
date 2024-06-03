// ex5_classes_b.cpp : 
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

