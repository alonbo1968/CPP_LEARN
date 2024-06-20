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

template <class T, typename Y> // "class" or "typename" keywords have the same meaning here
Y myMult1(T a, Y b) {
    return a * b;
}

int main()
{
    /**********************************************************************/
    cout << "---Function Templates---\n";
    // One function works for all data types. This would work
    // even for user defined types if operator '>' is overloaded

    cout << "*** myMax Template function ***" << endl;
    int a = 5, b = 7;
    cout << "Input is " << a << " and " << b << ". Max is " << myMax(a, b) << '\n';

    double x = 5.896F, y = 5.895F;
    cout << "Input is " << x << " and " << y << ". Max is " << myMax(x, y) << '\n';

    cout << "\n*** myMult Template function ***" << endl;
    int c = 5, d = 6;
    cout << "Input is " << c << " and " << d << ". Multiplication is is " << myMult(c, d) << '\n';

    double e = 5.33F, f = 5.55F;
    cout << "Input is " << e << " and " << f << ". Multiplication is is " << myMult(e, f) << '\n';

    float e1 = 7005.009F;
    double f1 = 1025.5879;
    cout << "Input is " << e1 << " and " << f1 << ". Multiplication is is " << myMult1(e1, f1) << '\n';

    return 0;
}
