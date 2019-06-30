/*	Các phép toán kết hợp điều nhiều kiện
	|| && !

	1. Viết chương trình tính bình phương của một số thỏa mãn:
		a) là số lẻ
		b) chia hết cho 5

	2. Viết chương trình tính bình phương của một số thỏa mãn:
		a) là số chẵn hoặc
		b) chia hết cho 5
*/

#include <iostream>
using namespace std;

int main() {
	bool b = true;

	cout << !b << endl;

	b = false;
	cout << !b << endl;

	/*if (!(a % 2 != 0) || a % 5 == 0) {
		cout << "a^2 = " << a * a << endl;
	}
	else {
		cout << "a khong thoa man de bai!" << endl;
	}
*/
	/*if ((a > 0) && (a % 5 == 0) && (a % 10 == 0)) {
		cout << "a^2 = " << a * a << endl;
	}
	else {
		cout << "a khong thoa man dieu kien de bai!" << endl;
	}*/

	return 0;
}