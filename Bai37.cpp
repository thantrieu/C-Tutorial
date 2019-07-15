/*
	Con trỏ và tham chiếu
*/

#include <iostream>
using namespace std;

void changeNumber(int n) {
	n = 2 * n;
}

void changeNumber2(int* n) {
	*n = *n * 2;
}

void changeNumber3(int& n) {
	n = n * 2;
}

void changeNumber3(const int& n) {
	//n = n * 2;
}

int main() {
	int n = 100;
	cout << "Truoc khi goi ham changeNumber: " << n << endl;
	changeNumber(n);
	cout << "Sau khi goi ham changeNumber: " << n << endl;

	cout << "Truoc khi goi ham changeNumber2: " << n << endl;
	changeNumber2(&n);
	cout << "Sau khi goi ham changeNumber2: " << n << endl;

	cout << "Truoc khi goi ham changeNumber3: " << n << endl;
	changeNumber3(n);
	cout << "Sau khi goi ham changeNumber3: " << n << endl;

	return 0;
}