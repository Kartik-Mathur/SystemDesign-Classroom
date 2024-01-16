#include <iostream>
using namespace std;

void printValue(void* p) {
	cout << *p << endl;
}

int main() {

	int *a = new int;
	float *f = new float;

	*a = 10;
	*f = 10.11;

	printValue(a);
	printValue(f);

	return 0;
}
















