// Ex19a_template_class.cpp : Template class example
//

#include <iostream>

using namespace std;

template <typename T, typename T1>
class Student {
    T grade;
    T1 name;
public:
    Student(T _grade, T1 _name) {
        grade = _grade;
        name = _name;
    }

    void Display() {
        cout << "Student " << name << " grade is " << grade << endl;
    }
};

int main()
{
    Student <int, string> student1(85, "Alon B.");
    Student <int, string> student2(87, "Johny W.");
    student1.Display();
    student2.Display();
    cout << endl;
    return 0;
}
