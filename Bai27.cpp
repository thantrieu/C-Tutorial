// Hàm có tham số mặc định

#include <iostream>
using namespace std;

inline int sumOfNumbers(int a = 10, int b = 20, int c = 30) {
	return a + b + c;
}

int main() {

	cout << sumOfNumbers() << endl;

	return 0;
}