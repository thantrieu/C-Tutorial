#pragma once
class A;
class B {
public:
	void showA(A&);
};

class A {
	int data;

public:
	A() {
		data = 100;
	}

	void show();
	friend void setData(A&);
	friend void B::showA(A&);
};