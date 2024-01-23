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

class Ellipse: public Shape {
public:
	void draw() override {
		cout << "Drawing Ellipse\n";
	}
};

class Oval: public Shape {
public:
	void draw() override {
		cout << "Drawing Oval\n";
	}
};

class AbstractFactory {
public:
	virtual Shape* createShape(const string& s) = 0;
};


class RoundedShapeFactory: public AbstractFactory {
public:
	Shape* createShape(const string& s) {
		if (s == "circle") return new Circle();
		if (s == "ellipse") return new Ellipse();
		if (s == "oval") return new Oval();
		return NULL;
	}
};

class ShapeFactory: public AbstractFactory {
public:
	Shape* createShape(const string& s) {
		if (s == "square") return new Square();
		if (s == "triangle") return new Triangle();
		if (s == "rectangle") return new Rectangle();
		return NULL;
	}
};


int main() {

	AbstractFactory* roundedFactory = new RoundedShapeFactory();
	AbstractFactory* shapeFactory = new ShapeFactory();

	Shape* circle = roundedFactory->createShape("circle");
	Shape* ellipse = roundedFactory->createShape("ellipse");

	Shape* square = shapeFactory->createShape("square");
	Shape* rectangle = shapeFactory->createShape("rectangle");


	circle->draw();
	ellipse->draw();

	square->draw();
	rectangle->draw();


	return 0;
}
















