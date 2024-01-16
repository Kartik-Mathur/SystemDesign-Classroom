#include <iostream>
using namespace std;

class Employee {
public:
	virtual string jobRole() {
		return "Employee";
	}
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

int main() {

	Mentors* m = new Mentors();
	Marketing* n = new Marketing();

	cout << m->jobRole() << endl;
	cout << n->jobRole() << endl;

	return 0;
}
















