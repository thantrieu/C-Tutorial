/*	Phép toán giữa các giá trị số
	+ - * / %
*/

#include <iostream>
using namespace std;

int main() {
	int a = 100;
	int b = 200;

	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;

	int remain = 100 % b;

	cout << "Sum of a and b: " << sum << endl;
	cout << "Substruct of a and b: " << sub << endl;
	cout << "Multiply of a and b: " << mul << endl;
	cout << "Divide of a and b: " << div << endl;
	cout << "Remain of a and b: " << remain << endl;

	return 0;
}