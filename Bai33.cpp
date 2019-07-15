// Mảng hai chiều trong C++
/*	- khai báo
	- khởi tạo
	- truy xuất giá trị

*/
#include <iostream>
using namespace std;

int main() {

	int a[10][15];
	int b[100];
	std::fill(b, b+100, 20);

	//std::fill(a[0], a[0] + 10 * 15, 1);

	memset(a, 0, sizeof(a));

	for (size_t i = 0; i < 100; i++)
	{
		cout << b[i] << " ";
	}

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 15; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}