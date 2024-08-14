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
    //fstream myfile;
    string line;

    myfile_o.open("test.txt", ios::app); //Open the file in "append" mode
    if(myfile_o.is_open())//Verify the file opened succesfuly
    {
        myfile_o << "I am trying to add 1st text line!\n";//Append text
        myfile_o << "I am trying to add 2nd text line!\n";

        myfile_o.close();//close the file
    }
    else
    {
        cout << "Error opening the file for writing\n";
    }

    /* Print the file line by line */
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

    return 0;
}
