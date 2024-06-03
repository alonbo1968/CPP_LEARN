// ex4_classes.cpp : 
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
		cout<<name<<"  "<< id<<"  "<<gradDate<<"\n\n";
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

