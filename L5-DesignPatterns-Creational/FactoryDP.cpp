#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() = 0;
};

class Square: public Shape {
public:
	void draw() override {
		cout << "Drawing Square\n";
	}
};

class Circle: public Shape {
public:
	void draw() override {
		cout << "Drawing Circle\n";
	}
};

class Triangle: public Shape {
public:
	void draw() override {
		cout << "Drawing Triangle\n";
	}
};

class Rectangle: public Shape {
public:
	void draw() override {
		cout << "Drawing Rectangle\n";
	}
};


class ShapeFactory {
public:
	Shape* create(const string& s) {
		if (s == "circle") return new Circle();
		if (s == "square") return new Square();
		if (s == "triangle") return new Triangle();
		if (s == "reactangle") return new Rectangle();
		return NULL;
	}
};


int main() {
	ShapeFactory *factory = new ShapeFactory();

	Shape* s1 = factory->create("circle");
	Shape* s2 = factory->create("square");

	s1->draw();
	s2->draw();

	// Shape *s = new Square();
	// s->draw();

	return 0;
}
















