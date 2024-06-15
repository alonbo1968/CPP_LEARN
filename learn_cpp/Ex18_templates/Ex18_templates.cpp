// Ex18_templates.cpp : C++ Template Functions
//

#include <iostream>
using namespace std;

template <typename T>
T myMax(T a, T b) {   //'T' can be another character
    return (a > b) ? a : b;
}

template <typename M>
M myMult(M a, M b) {
    return a * b;
}


int main()
{
    /**********************************************************************/
    cout << "---Function Templates---\n";
    // One function works for all data types. This would work
    // even for user defined types if operator '>' is overloaded

    int a = 5, b = 7;
    cout << "Input is " << a << " and " << b << ". Max is " << myMax(a, b) << '\n';

    double x = 5.896F, y = 5.895F;
    cout << "Input is " << x << " and " << y << ". Max is " << myMax(x, y) << '\n';

    double c = 5.33, d = 5.55;
    cout << "Input is " << c << " and " << d << ". Multiplication is is " << myMult(x, y) << '\n';

    return 0;
}
