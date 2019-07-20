/*
	Struct và con trỏ
*/
#include <iostream>
using namespace std;

struct Car {
	char owner[100];
	char brand[100];
	char color[100];
	int weight;
	int height;
	int width;
};

struct Cat {
	char name[100];
	int age;
	float weight;
	char color[100];
	char eyesColor[100];
};

struct Student {
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];
	Car car;
	Cat pet;
};

void getInfo(Student& s) {
	cout << "Enter name: ";
	cin.getline(s.name, 99);

	cout << "Enter age: ";
	cin >> s.age;

	cout << "Enter address: ";
	cin.ignore();
	cin.getline(s.address, 99);

	cout << "Enter mark: ";
	cin >> s.mark;

	cin.ignore();
	cout << "Car color: ";
	cin >> s.car.color;

}

void getInfo2(Student* s) {
	cout << "Enter name: ";
	cin.getline(s->name, 99);

	cout << "Enter age: ";
	cin >> s->age;

	cout << "Enter address: ";
	cin.ignore();
	cin.getline(s->address, 99);

	cout << "Enter mark: ";
	cin >> s->mark;

	cin.ignore();
	cout << "Car color: ";
	cin >> s->car.color;

}

void showInfo(Student s) {
	cout << "========== Student Info ==========\n";
	cout << "Name: " << s.name << endl;
	cout << "Address: " << s.address << endl;
	cout << "Age: " << s.age << endl;
	cout << "Mark: " << s.mark << endl;
	cout << "Car color: " << s.car.color << endl;
	cout << "==================================\n";
}

void showInfo2(Student *s) {
	cout << "========== Student Info ==========\n";
	cout << "Name: " << (*s).name << endl;
	cout << "Address: " << (*s).address << endl;
	cout << "Age: " << (*s).age << endl;
	cout << "Mark: " << (*s).mark << endl;
	cout << "Car color: " << (*s).car.color << endl;
	cout << "==================================\n";
}

int main() {

	Student s;
	Student* sPtr;
	getInfo(s);
	sPtr = &s;

	showInfo2(sPtr);

	//delete sPtr;

	return 0;
}