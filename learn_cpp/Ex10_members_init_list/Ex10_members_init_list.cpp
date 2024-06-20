// Ex10_members_init_list.cpp : Members initialized List
//
using namespace std;
#include <iostream>

class Book {

    const string title;
    const int pages;
public:
    //Constructor
    Book() : title("Diary"), pages(100) {};// Member initializer list

    void show() {
        cout << "Book name is " << title << ", it has " << pages << " pages!" << '\n';
    }

    //Destructor
    ~Book() {
        cout << "Destructor called at program end!\n";
    }
};

int main()
{
    {
        cout << "Initilize const members and references using Members initializer list:\n";
        Book book1;
        book1.show();
    } //Object is out of scope now

}
