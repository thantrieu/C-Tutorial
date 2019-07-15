/*
	Con trỏ và mảng một chiều
	+, -, ++, --, <, >, >=, <= , ==
*/

#include <iostream>
using namespace std;

void showResult(int* a) {
	int* posPtr = a;
	for (; posPtr <= &a[9]; posPtr++)
	{
		cout << *posPtr << " ";
	}
}

int main() {

	int b[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* ptr = b;

	showResult(b);

	return 0;
}