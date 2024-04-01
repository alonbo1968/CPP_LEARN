// ex2_fileio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream myfile_o;
    ifstream myfile_i;
    fstream myfile;
    string line;

    myfile_o.open("test.txt", ios::app);
    if(myfile_o.is_open())
    {
        myfile_o << "I am trying to add 1st text line!\n";
        myfile_o << "I am trying to add 2nd text line!\n";

        myfile_o.close();
    }
    else
    {
        cout << "Error opening the file for writing\n";
    }

    myfile_i.open("test.txt");
    if (myfile_i.is_open())
    {
        while (getline(myfile_i, line))
        {
            cout << line << '\n';
        }
        myfile_i.close();
    }
    else
    {
        cout << "Error opening the file for reading\n";
    }
        

/* This section does not function well!
    myfile.open("test1.txt", ios::app);
    if (myfile.is_open())
    {
        myfile << "Add text using fstream! \n";
        getline(myfile, line);
        cout << line << '\n';
        myfile.close();
    }
*/

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
