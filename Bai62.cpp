/*
	Override
*/
#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() {
		cout << "Animal is moving..." << endl;
	}
};

class Bird : public Animal {
public:
	void move() override {
		cout << "Bird is flying..." << endl;
	}
};

class Fish : public Animal {
public:
	void move() override {
		cout << "Fish is swimming..." << endl;
	}
};

class Cat : public Animal {
public:
	void move() override {
		cout << "Cat is running on the ground..." << endl;
	}
};

int main() {
	Animal* a = new Bird();
	a->move();
	
	a = new Fish();
	a->move();

	a = new Animal();
	a->move();

	a = new Cat();
	a->move();

	return 0;
}