// ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> //Formating libraries
//#include <string> //Formating libraries

int main()
{
    using namespace std;//This enables "cout <<" instead of "std::cout<<"
    cout << "hello"<<"\n";
    cout << "Hello World!"<<endl;
    cout << "Hello World 2!\n";
    cout << "Hello World 3!\n";
    cout << "Hello 4!"<<setw(10)<<"Hello 5!"<<setw(30)<<"Hello 6!\n";

    std::string out_string = "\nBye Bye\n";
    
    cout << out_string << " string length is: " << out_string.length() << " bytes \n";

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
