// Ex24_exceptions.cpp : Exceptions demo
//
#include <iostream>
#include "header.h"

const int CHARS_PER_PAGE = 10;

using namespace std;

class Printer {
    string name;
    int num_of_papers;
public:
    Printer(string _name, int _num_of_papers) {
        name = _name;
        num_of_papers = _num_of_papers;
    }

    void print(string data_to_print) {
        int pages_to_print;
        pages_to_print = (data_to_print.size() / CHARS_PER_PAGE) + 1;

        if (pages_to_print > num_of_papers) {
            //throw "No Paper!";  //Char Exception
            throw 101;         //int Exception
        }
        
        cout << data_to_print << endl;
        num_of_papers -= pages_to_print; //Update the remaining number of papers in the printer
    }
};

int main()
{
    std::cout << "*** Exceptions demo ***" <<endl;
    Printer printer("HP 4000", 10); //Create the printer object

    try {
        printer.print("Hello. This is a printer test!");
        printer.print("Hello. This is a printer test!");
        printer.print("Hello. This is a printer test!");
    }
    catch (const char* txtException) {
        cout << "Exception: " << txtException << endl;
    }
    catch (int codeException) { //
        cout << "Exception code: " << codeException << endl;
    }
    catch (...) { //Default Exception 
        cout << "Un-recognized exception" << endl;
    }

    return 0;
}

