/*
	Khởi tạo mảng một chiều, 2 chiều với giá trị cho trước
	- dùng vòng lặp
	- dùng hàm std:: fill(from, to, value);
*/
#include <iostream>
using namespace std;

int main() {

	int a[1000];
	int b[10][10];

	//fill(a, a + 1000, -1);

	fill(b[0], b[0] + 10 * 10, -99);

	//for (size_t i = 0; i < 10; i++)
	//{
	//	for (size_t j = 0; j < 10; j++)
	//	{
	//		b[i][j] = -9;
	//	}
	//}

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	/*for (size_t i = 0; i < 1000; i++)
	{
		cout << a[i] << " ";
		if (i % 20 == 0) {
			cout << endl;
		}
	}*/
	
	return 0;
}