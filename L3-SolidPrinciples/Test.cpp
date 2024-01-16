#include <iostream>
using namespace std;

class Person {
private:
	// string name;
	// int age;
	// const int legs;

public:
	// Person(){}
	// Person(string s, int n): legs(2), name(s), age(n) {}

	// string getName() {
	// 	return this->name;
	// }

	// void setName(string x) {
	// 	this->name = x;
	// }

	string hasMoney() {
		return "true";
	}

};

class Person {
public:
	string hasMoney() {
		return "true";
	}

};

// class derived_class_name: visibility base_class{}
class Child: public Person {
	string name;
public:
	Child(string n): name(n) {}
};


int main() {

	// Person p("Praveen", 20);
	// Child* c = new Child("Praveen");
	// cout << c->hasMoney() << endl;
	Child c("Praveen");
	cout << c.hasMoney() << endl;

	return 0;
}





