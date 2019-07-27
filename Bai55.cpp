/*
	Hàm bạn trong C++
*/

#include <iostream>
using namespace std;

class A;

class B {
public:
	void showA(A);
};

class A {
	friend void setData(A&);
	int data;

public:
	A() {
		data = 100;
	}
	void show();
	friend void B::showA(A);
};

void B::showA(A a) {
	cout << a.data << endl;
}

void A::show() {
	cout << data << endl;
}

void setData(A& a) {
	a.data = 255;
}

int main() {

	A a;
	setData(a);

	B b;
	b.showA(a);

	return 0;
}