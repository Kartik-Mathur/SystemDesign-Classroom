#include <iostream>
using namespace std;

class Car {
private:
	string name;
	int price;
	string engine;
public:

	void setEngine(string engine) {
		this->engine = engine;
	}

	void setName(string name) {
		this->name = name;
	}

	void setPrice(int price) {
		this->price = price;
	}

	void print() {
		cout << "Name    : " << this->name << endl;
		cout << "Engine  : " << this->engine << endl;
		cout << "Price   : " << this->price << endl << endl;
	}

};

class CarBuilder {
public:
	virtual void setName(string name) = 0;
	virtual void setPrice(int price) = 0;
	virtual void setEngine() = 0;
	virtual Car* getResult() = 0;
};

class AutomaticBuilder: public CarBuilder {
private:
	Car *car;
public:
	AutomaticBuilder() {
		car = new Car();
	}

	void setEngine() override {
		car->setEngine("Automatic Engine");
	}

	void setName(string name) override {
		car->setName(name);
	}

	void setPrice(int price) override {
		car->setPrice(price);
	}

	Car* getResult() override {
		return car;
	}
};

class ManualBuilder: public CarBuilder {
private:
	Car *car;
public:
	ManualBuilder() {
		car = new Car();
	}

	void setEngine()  override {
		car->setEngine("Manual Engine");
	}

	void setName(string name) override {
		car->setName(name);
	}

	void setPrice(int price)  override {
		car->setPrice(price);
	}

	Car* getResult()  override {
		return car;
	}
};


class CarAssembler {
public:
	Car* makeAutomaticCar(CarBuilder *builder) {
		builder->setPrice(100);
		builder->setName("Audi");
		builder->setEngine();
		return builder->getResult();
	}

	Car* makeManualCar(CarBuilder *builder) {
		builder->setPrice(10);
		builder->setName("Maruti");
		builder->setEngine();
		return builder->getResult();
	}
};


int main() {

	CarAssembler *carAssembler = new CarAssembler();

	AutomaticBuilder* automaticBuilder = new AutomaticBuilder();
	ManualBuilder* manualBuilder = new ManualBuilder();

	Car *Audi = carAssembler->makeAutomaticCar(automaticBuilder);
	Car *Maruti = carAssembler->makeManualCar(manualBuilder);

	Audi->print();
	Maruti->print();


	return 0;
}
















