#include <iostream>
using namespace std;

class Employee {
public:
	virtual string jobRole() = 0; // Pure Virtual Function
};

class Mentors: public Employee {
public:
	string jobRole() override {
		return "I'm a Mentor";
	}
};

class Marketing: public Employee {
public:
	string jobRole() override {
		return "I'm a Marketing Guy";
	}
};

void printJobRole(Employee* e) {
	cout << e->jobRole() << endl;
}

int main() {

	Mentors* m = new Mentors();
	Marketing* n = new Marketing();

	printJobRole(new Mentors());
	printJobRole(new Marketing());

	/*
		cout << m->jobRole() << endl;
		cout << n->jobRole() << endl;
	*/
	return 0;
}
















