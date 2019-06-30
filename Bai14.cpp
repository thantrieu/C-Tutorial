/* Cấu trúc rẽ nhánh switch

	switch(variable) {
		case value1:
			...
			break;
		case value2:
			...
			break;
		...
		default:
			...
	}
	
	Câu hỏi: đâu là thủ đô của Việt Nam?
	A. Hà Nội
	B. Thành phố Hồ Chí Minh
	C. Đà Nẵng
	D. Nghệ An
*/
#include <iostream>
using namespace std;

int main() {
	char choice = ' ';
	cout << "====================================\n";
	cout << "Dau la thu do cua Viet Nam?\n";
	cout << "A. Ha Noi\n";
	cout << "B. Thanh pho Ho Chi Minh\n";
	cout << "C. Da Nang\n";
	cout << "D. Nghe An\n";
	cout << "Ban chon dap an? \n";
	cin >> choice; // nhap lua chon tu ban phim

	switch (choice)
	{
	case 'A':
	case 'a':
		cout << "Chinh Xac!" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Gan dung roi, hay chon lai!" << endl;
		break;
	case 'C':
	case 'c':
		cout << "Chua dung roi, hay chon lai dap an khac!" << endl;
		break;
	case 'D':
	case 'd':
		cout << "Ban nham roi, chon lai di nha!" << endl;
		break;

	default:
		cout << "Dap an ban chon khong hop le, vui long thu lai!" << endl;
		break;
	}
	cout << "\n====================================\n";

	return 0;
}