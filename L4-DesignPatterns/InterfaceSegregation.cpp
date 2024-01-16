#include <iostream>
using namespace std;

class Employee {
public:
	virtual void jobRole() = 0;
};

class pensionEmployee {
public:
	virtual void pension() = 0;
};

class privateEmployee: public Employee {
public:
	void jobRole() {
		cout << "Ok you are a private employee!\n";
	}
};

class govtEmployee: public Employee, pensionEmployee {
public:
	void jobRole() {
		cout << "Ok you are a govt employee!\n";
	}

	void pension() {
		cout << "Ok, you'll get pension too!\n";
	}
};

int main() {

	govtEmployee* g = new govtEmployee();
	privateEmployee* p = new privateEmployee();

	g->jobRole();
	g->pension();

	p->jobRole();



	return 0;
}
















