// ex4_classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

	class Student
	{
		string name;
		int id;
		int gradDate;

	public:
		void setName(string nameIn);
		void setId(int idIn);
		void setGradDate(int dateIn);
		string getName();
		int getId();
		int getGradDate();
		void print();
	};

	void Student::setName(string nameIn)
	{
		name = nameIn;
	}
	void Student::setId(int idIn)
	{
		id = idIn;
	}
	void Student::setGradDate(int dateIn)
	{
		gradDate = dateIn;
	}
	string Student::getName()
	{
		return name;
	}
	int Student::getId()
	{
		return id;
	}
	int Student::getGradDate()
	{
		return gradDate;
	}
	void Student::print()
	{
		cout<<name<<"  "<< id<<"  "<<gradDate<<'\n';
	}


int main()
{
	Student student1;

	student1.setName("Alon B.");
	student1.setId(100001);
	student1.setGradDate(2017);

	cout << "Print class memebers using class print function: \n";
	student1.print();

	cout << "Print class memebers using class get functions: \n";
	cout << "Name = " << student1.getName() << '\n';
	cout << "ID = " << student1.getId() << '\n';
	cout << "Graduation = " << student1.getGradDate() << '\n';


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
