// Ex16_sets.cpp : Sets data structure.
//
using namespace std;

#include <iostream>
#include <set>
#include <unordered_set>


unordered_set<int> primes({2, 3, 5, 5});


int main()
{
    cout << "----- unordered sets: -----\n";
    cout << "Number of elements in the initialized unordered set is: " << primes.size() << '\n';
    cout << "Insert one elements: \n";
    primes.insert(7);
    cout << "Number of elements in the set is: " << primes.size() << '\n';
    cout << "erase one element: \n";
    if (primes.erase(2)) {
        cout << "Number of elements in the set is: " << primes.size() << '\n';
    }
    else {
        cout << "Could not erase the element!\n";
    }

    cout << "Check if the set is empty: ";
    if (primes.empty()) {
        cout << "The set is empty! \n";
    }
    else {
        cout << "The set is not empty! \n";
    }

    cout << "Erase all elements:\n";
    primes.erase(2);
    primes.erase(3);
    primes.erase(5);
    primes.erase(7);

    cout << "Check if the set is empty: ";
    if (primes.empty()) {
        cout << "The set is empty! \n";
    }
    else {
        cout << "The set is not empty! \n";
    }


    cout << "\n----- print ordered sets: -----\n";
    set<int> ordered({ 5, 3, 1, 2 });

    for (int n: ordered) {
        cout << n << ' ';
    }
    cout << '\n';

    cout << "\n----- print unordered sets: -----\n";
    unordered_set<int> unordered({ 5, 3, 1, 2 });
    for (int n: unordered) {
        cout << n << ' ';
    }
    cout << '\n';

    cout << "\n----- print unordered set using an iterator: -----\n";
    unordered_set <int>::iterator itr;
    for (itr = unordered.begin(); itr != unordered.end(); itr++) {
        cout << *itr << ' ';
    }
    cout << '\n';





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
