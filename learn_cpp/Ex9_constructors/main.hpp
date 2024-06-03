#pragma once
//using namespace std
using namespace std;

class Car {
	string manufacture;
	string model;
	int power;
	int price;

public:
	//default constructor - no parameters
	Car() {
		manufacture = "Ford";
		model = "Focus";
		power = 100;
		price = 15000;
	}

	//constructor with parameters
	Car(string name = "Corola", string company = "Toyota", int pow = 100, int pri = 15000) {
		manufacture = company;
		model = name;
		power = pow;
		price = pri;
	}

	void summery() {
		cout << "Model = " << model << '\n';
		cout << "Manufacture = " << manufacture << '\n';
		cout << "Power = " << power << '\n';
		cout << "price = " << price << '\n';
	}
};


