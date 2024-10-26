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
    cout << "Input is int " << a << " and int " << b << ". Max is " << myMax(a, b) << '\n';

    double x = 5.896F, y = 5.895F;
    cout << "Input is double" << x << " and double" << y << ". Max is " << myMax(x, y) << '\n';

    cout << "\n*** myMult Template function ***" << endl;
    int c = 5, d = 6;
    cout << "Input is int " << c << " and int " << d << ". Multiplication is " << myMult(c, d) << '\n';

    double e = 5.33F, f = 5.55F;
    cout << "Input is " << e << " and " << f << ". Multiplication is " << myMult(e, f) << '\n';

    float f1 = 7005.009F;
    double d1 = 1025.5879;
    cout << "Input is float " << f1 << " and double " << f1 << ". Multiplication is double " << myMult1(f1, d1) << '\n';

    cout << endl << "Comment: Function Templates used by multiple source files, have to be defined in a header file!" << endl;
    return 0;
}
