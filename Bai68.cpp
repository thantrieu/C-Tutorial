/*
	Ghi thông tin ra file nhị phân
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
	ofs.write((char*)&p, sizeof(Person));
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
	//ofstream ofs("E:\\OUTPUT.PDF", ios::binary | ios::out);

	/*ifstream ifs("E:\\OUTPUT.PDF", ios::binary);
	int age;
	string email, name, address;
	Person p;
	while (ifs.good() && !ifs.eof()) {
		ifs.read((char*)& p, sizeof(Person));
		if (!ifs.bad()) {
			p.showInfo();
		}
	}

	ifs.close();*/

	cout << "@@@" << endl;
	
	//ofs.close();
	return 0;
}