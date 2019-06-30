/* Mảng kí tự trong C++ 
	- Luôn kết thúc bởi kí tự null '\0'
	- Lấy độ dài thực tế của mảng kí tự
*/

#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Enter your age: ";
	cin >> age;

	cin.ignore();

	cout << "Enter your name: ";
	char fullName[200];
	cin.getline(fullName, 199);

	cout << "\nHello " << fullName << ", you are " << age << endl;

	return 0;
}