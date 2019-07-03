// Khai báo hàm nguyên mẫu

#include <iostream>
using namespace std;

int addTwoNumbers(int, int);
float divAbyB(int, int);
void showResult(float);

int main() {
	
	cout << addTwoNumbers(100, 266) << endl;

	return 0;
}

int addTwoNumbers(int a, int b) {
	return (a + b);
}

float divAbyB(int a, int b) {
	return 1.0f * a / b;
}

void showResult(float result) {
	cout << "Result =" << result << endl;
}