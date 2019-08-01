/*
	Kế thừa trong C++
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
	string firstName;
	string lastName;
	string id;
public:
	Person();
	Person(string id);
	Person(string id, string first, string last);
	string getId();
	string getFirstName();
	string getLastName();
	string fullName();
};

Person::Person() {
	firstName = "";
	lastName = "";
	id = "";
}

Person::Person(string id) {
	Person();
	this->id = id;
}

Person::Person(string id, string first, string last) {
	this->id = id;
	this->lastName = last;
	this->firstName = first;
}

string Person::fullName() {
	return this->firstName + " " + this->lastName;
}

string Person::getId() {
	return id;
}

string Person::getFirstName() {
	return firstName;
}

string Person::getLastName() {
	return lastName;
}

class Student : public Person {
	string studentID;
	float mark;
	float fee;

public:
	Student();
	Student(string, float, float);
	Student(string, string, string, string, float, float);
	void study(string);
	void payFee(float);
	void doExamp(string);
	void showInfo();
};

Student::Student(string id, string first, string last, 
	string sId, float mark, float fee) : Person(id, first, last) {
	this->studentID = sId;
	this->mark = mark;
	this->fee = fee;
}

void Student::showInfo() {
	cout << "ID: " << getId() << endl;
	cout << "Full name: " << fullName() << endl;
	cout << "Student ID: " << studentID << endl;
	cout << "Mark: " << mark << endl;
}

class Employee : public Person {
	string eID;
	float sallary;
	string role;

public:
	Employee();
	Employee(string, float, string);
	void doHisWork();
	void goToWorkSpace();
	bool getPayment();
};



int main() {
	Student s("12345485", "Than", "Trieu", "B20DCCN123", 3.36f, 20.5f);
	s.showInfo();
	return 0;
}