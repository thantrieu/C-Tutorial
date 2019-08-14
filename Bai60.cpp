/*
	Đa hình trong C++
	- Đa hình tại thời điểm biên dịch hay compile time polimophirm:
	  Thể hiện ở việc nạp chồng hàm, nạp chồng toán tử.

	- Đa hình tại thời điểm chương trình chạy hay runtime polimophirm:
	  Thể hiện ở việc ghi đè các phương thức của lớp cha.

	- Lesson 60: function overloading
	- Lesson 61: operator overloading
	- Lesson 62: function overriding
*/

#include <iostream>
using namespace std;

class Caculator {
public:
	int sum(int a, int b) {
		return a + b;
	}

	float sum(float a, float b) {
		return a + b;
	}

	long sum(long a, long b) {
		return a + b;
	}

	float sum(int a, float b) {
		return a + b;
	}

	float sum(float a, int b) {
		return a + b;
	}

	int sum(int* a, size_t size) {
		int s = 0;
		for (size_t i = 0; i < size; i++)
		{
			s += a[i];
		}
		return s;
	}
};

class Payment {
public:

};

int main() {
	Caculator c;
	cout << c.sum(100, 200) << endl;
	cout << c.sum(100, 25.25f) << endl;
	cout << c.sum(25.0f, 30.0f) << endl;

	return 0;
}