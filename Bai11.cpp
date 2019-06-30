/*	Cấu trúc rẽ nhánh trong C++
	if(điều kiện){
		// Nội dung thực hiện nếu đk đúng
	} else {
		// Nội dung thực hiện nếu điều kiện sai
	}

	Sinh viên A có điểm trung bình môn là t, điểm để qua môn đó là 4.0
	Viết chương trình kiểm tra xem anh A có qua môn hay không.
*/
#include <iostream>
using namespace std;

#define PASS 4.0
#define GOOD 8.0
#define MEDIUM 6.5

int main() {
	float t = 5.5f;

	if (t >= GOOD) {
		cout << "A is Good student!" << endl;
	}
	else if(t >= MEDIUM && t < GOOD ) {
		cout << "A is a medium student!" << endl;
	}
	else if(t >= PASS && t < MEDIUM) {
		cout << "A passed this subject!" << endl;
	}
	else {
		cout << "A failed this subject!" << endl;
	}

	return 0;
}