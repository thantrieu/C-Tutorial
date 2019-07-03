/*	Truyền tham chiếu và truyền giá trị
	- Truyền tham chiếu khi muốn cho phép hàm thay đổi giá trị của biến
	truyền vào hàm.
	- Truyền giá trị khi kiểu của tham số là những kiểu đơn giản
*/

#include <iostream>
using namespace std;

void updateNumber(int& b) {
	b = b * 5;
}

void updateBalance(int& balance, int change) {
	balance += change;
}

int main() {
	int a = 100;
	int amount = 1000;
	// nap tien vao tk the
	updateBalance(amount, 2000);

	cout << amount << endl;

	// rut tien khoi tk the
	updateBalance(amount, -3000);

	cout << "So du tk sau khi rut: " << amount << endl;

	return EXIT_FAILURE;
}