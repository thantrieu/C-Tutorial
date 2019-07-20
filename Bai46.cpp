/*
	Tổng quan về class trong C++
	- Lý do cần phải có class
	- Định nghĩa class
	- Tổng quát cú pháp tạo class
	- Object tạo ra từ class
	- Cách sử dụng class
*/
#include <iostream>
using namespace std;

class Student {
public:
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];

	void showIdCard() {

	}

	void study(char *subject) {

	}

	void doExample(char* subjName) {

	}

	void payFee(float amount) {

	}
};

class Cat {
public:
	char name[100];
	int age;
	float weight;
	char color[100];
	char eyesColor[100];

	void move() {

	}

	void sleep() {

	}

	void eat() {

	}

	void speak() {

	}
};

int main() {
	
	Student s1;
	s1.mark = 8.5;
	s1.age = 20;

	cout << "Age: " << s1.age << endl;

	Cat cat;
	cat.name;

	return 0;
}