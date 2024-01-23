#include <iostream>
using namespace std;

class SingleTon {
private:
	SingleTon() {}
	static SingleTon* instance;
	string name;
public:
	SingleTon(SingleTon& s) = delete;
	// This will not allow copy constructor
	// to work

	static SingleTon* getInstance() {
		if (instance == NULL) {
			instance = new SingleTon();
		}
		return instance;
	}

	void setName(const string&s) {
		name = s;
	}

	string getName() {
		return name;
	}

};

SingleTon* SingleTon::instance = NULL;

int x = 10;

int main() {
	int x = 200;

	cout << ::x << endl;

	SingleTon* s = SingleTon::getInstance();

	s->setName("Hello");
	cout << s->getName() << endl;


	return 0;
}
















