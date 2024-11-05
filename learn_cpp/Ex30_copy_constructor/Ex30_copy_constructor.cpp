// Ex30_copy_constructor.cpp : Copy constructor, Shallow Copy and Deep Copy
//

#include <iostream>

class Number{
public:
    int n;
    Number(int set_n) {
        n = set_n;
        std::cout << "Regular Constructor executed!" << std::endl;
    }
};

class Book {
public:
    int book_id;
    Book(int new_id) {
        book_id = new_id;
        std::cout << " Regular Constructor called." << std::endl;
    }
    Book(const Book& book) {
        book_id = book.book_id + 1;
        std::cout << " Non-Default Copy Constructor called." << std::endl;
    }
};

class House {
public:
    int *p;
    House(int set_p) {
        p = (int*)malloc(sizeof(int));
        *p = set_p;
        std::cout << " Regular Constructor called." << std::endl;
    }

    House(const House& other_number) {
        p = (int*)malloc(sizeof(int));
        *p = *(other_number.p);
        std::cout << " Non-Default Copy Constructor DEEP COPY version called." << std::endl;
    }

    ~House() {
        free(p);
    }

    int get() {
        return *p;
    }
};


int main()
{
    std::cout << "---Copy Constructor, Shallow Copy and Deep Copy---" << std::endl;
    std::cout << "1. create 1st object numberA:" << std::endl;
    Number numberA(5);
    std::cout << " numberA.n = " << numberA.n << std::endl;
 
    std::cout << "2. Create and initialize another object numberB, using a Default Copy Constructor:" << std::endl;
    std::cout << " Number numberB = numberA; //" << std::endl;
    std::cout << " Now the default Copy Constructor is executed, instead of regular Constructor." << std::endl;
    std::cout << " Copy Constructor assigns the value of member variables of existing object to the new object." << std::endl;
    Number numberB = numberA; //Now the default Copy Constructor is executed, instead of regular Constructor
    std::cout << " numberB.n = " << numberB.n << std::endl;

    std::cout << "3. Demonstrate Non-Default Copy constructor" << std::endl;
    std::cout << " Create 1st object BookA:" << std::endl;
    Book bookA(100005);
    std::cout << " bookA.book_id = " << bookA.book_id << std::endl;
    std::cout << " Create and initialize another object bookB, using Non-Default Copy Constructor:" << std::endl;
    std::cout << " Book bookB = bookA;" << std::endl;
    Book bookB = bookA;
    std::cout << " Now the Non-Default Copy Constructor is executed, instead of Regular Constructor." << std::endl;
    std::cout << " bookB.book_id = " << bookB.book_id << std::endl;

    std::cout << "4. Examples Copy Constructor: Here it creates a \"Deep Copy\" of the object data." << std::endl;
    std::cout << " \"Deep Copy\", is required when the class has a dynamicly allocated data!" << std::endl;
    std::cout << " Create and initialize first House object with regular Constructor:" << std::endl;
    House houseA(150);
    std::cout << " houseA size is : " << houseA.get() << " square meters" << std::endl;
    std::cout << " Create and initialize second House object with Deep Copy Constructor:" << std::endl;
    House houseB = houseA;
    std::cout << " houseB size is : " << houseB.get() << " square meters" << std::endl;
    std::cout << " Change second object data and verify the first is not changed:" << std::endl;
    *(houseB.p) = 200;
    std::cout << " houseA size is : " << houseA.get() << " square meters" << std::endl;
    std::cout << " houseB size is : " << houseB.get() << " square meters" << std::endl;
    return 0;
}

