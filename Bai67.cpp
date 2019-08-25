/*
	Ghi thông tin ra file text
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
	string name;
	string address;
	string email;
	int age;

public:
	Person();
	Person(int, string, string, string);
	void showInfo();
	friend void writeToFile(Person, ofstream&);
};

void writeToFile(Person p, ofstream& ofs) {
	ofs << p.name << endl;
	ofs << p.address << endl;
	ofs << p.email << endl;
	ofs << p.age << endl;
}

Person::Person() {
	age = 0;
	name = "";
	address = "";
	email = "";
}
Person::Person(int age, string name, string address, string email) {
	this->age = age;
	this->name = name;
	this->address = address;
	this->email = email;
}

void Person::showInfo() {
	cout << "I am " << name << ", I'm " << age << " years old."
		<< "\nI live in " << address << ". My email address is '"
		<< email << "'.\nNice to meet you!\n";
	cout << endl;
}

void showInfo(Person* ps, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		ps[i].showInfo();
	}
}

int main() {
	//fstream ofs("OUTPUT.txt", ios::app);
	////ofs.open("OUTPUT.txt", ios::app);

	//string message = "Have a nice day!";
	//ofs << message << endl;

	//ofs.close();

	Person p(20, "Tran Thu Thuy", "Ha Noi", "ngthuy@hmail.com");
	ofstream ofs2("E:\\OUTPUT.PDF", ios::app);
	writeToFile(p, ofs2);
	ofs2.close();

	return 0;
}