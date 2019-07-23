/*
	Lớp template
*/

#include <iostream>
using namespace std;

template<class T> class Data {
private:
	T* data;
	size_t size;

public:
	Data(T*, size_t);
	void showData();
	void copyData(T*, size_t);
};

template<class T> Data<T>::Data(T* data, size_t size) {
	this->data = new T[size];
	this->size = size;
	this->copyData(data, size);
}

template<class T> void Data<T>::showData() {
	for (size_t i = 0; i < size; i++)
	{
		cout << this->data[i] << " ";
	}
	cout << endl;
}

template<class T> void Data<T>::copyData(T* data, size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		this->data[i] = data[i];
	}
}

template<class U, class V> class Pair {
private:
	U key;
	V value;

public:
	Pair(U, V);
	void showPair();
};

template<class U, class V> Pair<U, V>::Pair(U key, V value) {
	this->key = key;
	this->value = value;
}

template<class U, class V> void Pair<U, V>::showPair() {
	cout << "Key: " << key << " - Value: " << value << endl;
}

class Student {
private:
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];

public:
	Student();
	Student(char*);
	Student(char*, int);
	Student(char*, int, char*, char*, float);
	void showInfo();
};

Student::Student() {
	cout << "Call non para constructor" << endl;
	this->name[0] = '\0';
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = 0;
	this->mark = 0;
}

Student::Student(char* name) {
	cout << "Call 1 para constructor" << endl;
	strcpy_s(this->name, 99, name);
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = 0;
	this->mark = 0;
}

Student::Student(char* name, int age) {
	cout << "Call 2 params constructor" << endl;
	strcpy_s(this->name, 99, name);
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = age;
	this->mark = 0;
}

Student::Student(char* name, int age, char* id, char* address, float mark) {
	cout << "Call 5 params constructor" << endl;
	strcpy_s(this->name, 99, name);
	strcpy_s(this->ID, 19, id);
	strcpy_s(this->address, 99, address);
	this->age = age;
	this->mark = mark;
}

void Student::showInfo() {
	cout << "============== Student Info ===========" << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Id: " << ID << endl;
	cout << "Age: " << age << endl;
	cout << "Mark: " << mark << endl;
	cout << "=======================================" << endl;
}

int main() {
	/*char arr[] = { 'h', 'e','l', 'l', 'o', '!' };
	int b[] = { 1,2,3,4,5,6,7,8,9 };
	double c[] = { 1.23, 3.25, 6.39, 9.81, 7.34 };

	Data<char> charObj(arr, sizeof(arr) / sizeof(char));
	Data<int> intObj(b, sizeof(b) / sizeof(int));
	Data<double> doubleObj(c, sizeof(c) / sizeof(double));*/

	/*charObj.showData();
	intObj.showData();
	doubleObj.showData();*/

	Pair<string, int> one("One", 1);
	Pair<string, int> two("Two", 2);
	Pair<string, string> vniEng("Cat", "Con meo");
	Student student;
	Pair<string, Student> bestStudent("The best student", student);

	return 0;
}