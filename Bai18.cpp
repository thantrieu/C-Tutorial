/*Vòng lặp vô hạn, break, continue*/

#include <iostream>
using namespace std;

int main() {
	char input;

	//for (;;) { // thoat: Ctrl C
	//	cout << "Nhap q de thoat chuong trinh! ";
	//	cin >> input;
	//	if (input == 'q' || input == 'Q') {
	//		//break;
	//	}
	//}

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 != 0) {
			continue;
		}
		cout << i << endl;
		// do something...
	}

	return 0;
}
