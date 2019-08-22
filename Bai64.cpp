/*
	Lớp string và các phương thức của nó
	- hàm tạo
	- getline();
	- length();
	- push_back();
	- pop_back();
	
*/

#include<iostream>
#include <string>
using namespace std;

int main() {
	string name = "Than Trieu";
	
	for (size_t i = 0; i < name.length(); i++)
	{
		//cout << name[i] << endl;
		cout << name.at(i) << endl;
	}


	/*string name;
	name = "Than Trieu";
	name = "Thu Tran";
	name = "Hoa Nguyen";

	string address("Ha Noi");
	string address1(address);
	string nX(100, 'X');

	cout << nX << endl;
	cout << "nX co " << nX.length() << " ki tu";*/

	/*string fullName;
	cout << "Enter your full name: ";
	getline(cin, fullName);

	cout << "Hello " << fullName << "!" << endl;*/
}