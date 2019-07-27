/*
	Lớp bạn trong C++
*/

#include <iostream>
using namespace std;

class A;

class B {
public:
	void showA(A);
	void setAData(A&);
};

class A {
	int data;
	
public:
	A() {
		data = 100;
	}
	void show();
	friend class B;
};

void B::showA(A a) {
	cout << a.data << endl;
}

void A::show() {
	cout << data << endl;
}

void B::setAData(A& a) {
	a.data = 255;
}

int main() {

	A a;

	B b;
	b.showA(a); // hien thi du lieu goc

	b.setAData(a); // thay doi du lieu data cua doi tuong a, lop A
	b.showA(a);

	return 0;
}