#include <iostream>
using namespace std;

class Guitar {
public:
	string madeBy() {
		return "Wooden Guitar" ;
	}

	string model() {
		return "2014";
	}
};

class newThemeGuitar: public Guitar {
public:
	string newTheme() {
		return "Electric Guitar";
	}
};

int main() {

	Guitar *g = new Guitar();

	newThemeGuitar* n = new newThemeGuitar();

	cout << n->newTheme() << endl;
	cout << n->madeBy() << endl;
	cout << g->madeBy() << endl;

	return 0;
}
















