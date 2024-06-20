// Ex13_vectors.cpp : Vectors.
//

#include <iostream>
#include <vector> //built-in std::vector lives in the <vector> standard library

using namespace std;

vector < int > primes = { 2, 3, 5, 7, 11 };
vector < int > primes2 = (7);

void print_vector(int vec[]) {
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << " >> ";
    }
    cout << '\n';
}


int main()
{
    cout << "Demonstrate Vectors data structures and Vector Methods.\n";

    cout << "\nVector is initialized with 5 elements:\n";
    print_vector(&primes[0]);

    cout << "\nPrint the 3rd element:\n";
    cout << primes[2] << '\n';

    cout << "\nPrint front and rear elements:\n";
    cout << primes.front() << '\n';
    cout << primes.back() << '\n';
    print_vector(&primes[0]);

    cout << "\nAdd two elements to the back of the vector:\n";
    primes.push_back(13);
    primes.push_back(17);
    print_vector(&primes[0]);

    cout << "\nRemove last elements:\n";
    primes.pop_back();
    print_vector(&primes[0]);

    cout << '\n';

    return 0;
}

