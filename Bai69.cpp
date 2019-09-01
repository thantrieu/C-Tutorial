/*
	Đọc thông tin đối tượng từ file nhị phân
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
	char name[100];
	char address[100];
	char email[100];
	int age;

public:
	Person();
	Person(int, string, string, string);
	void showInfo();
	friend void writeToFile(Person, ofstream&);
	void setName(string name);
	void setAge(int age);
	void setEmail(string email);
	void setAddress(string address);
};

void writeToFile(Person p, ofstream& ofs) {
	ofs.write((char*)& p, sizeof(Person));
}

Person::Person() {
	age = 0;
}

Person::Person(int age, string name, string address, string email) {
	this->setAddress(address);
	this->setAge(age);
	this->setName(name);
	this->setEmail(email);
}

void Person::setAddress(string address) {
	size_t size = address.length();
	size = (size > 99) ? 99 : size;
	address.copy(this->address, size);
	this->address[size] = '\0';
}

void Person::setName(string name) {
	size_t size = name.length();
	size = (size > 99) ? 99 : size;
	name.copy(this->name, size);
	this->name[size] = '\0';
}

void Person::setEmail(string email) {
	size_t size = email.length();
	size = (size > 99) ? 99 : size;
	email.copy(this->email, size);
	this->email[size] = '\0';
}

void Person::setAge(int age) {
	this->age = (age < 0) ? 0 : age;
}

void Person::showInfo() {
	cout << "I am " << name << ", I'm " << age << " years old."
		<< "\nI live in " << address << ". My email address is "
		<< email << ".\nNice to meet you!\n";
	cout << endl;
}

void showInfo(Person* ps, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		ps[i].showInfo();
	}
}

int main() {
	ifstream ifs("PERSON.DAT", ios::binary);
	Person p;

	if (!ifs) {
		cout << "Loi doc du lieu" << endl;
	}
	else {
		int index = 0;
		cout << "Nhap vi tri muon doc: (0->3)";
		cin >> index;
		index = (index >= 0 && index <= 3) ? index : 0;

		ifs.seekg(index * sizeof(Person));
		ifs.read((char*)& p, sizeof(Person));
		if (ifs.good()) {
			p.showInfo();
		}
		//while (!ifs.eof()) { // doc tu dau toi cuoi file
		//	ifs.read((char*)& p, sizeof(Person));
		//	if (ifs.good()) {
		//		p.showInfo();
		//	}
		//}
	}

	return 0;
}
