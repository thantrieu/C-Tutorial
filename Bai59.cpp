/*
	Q&A: - Lớp con kế thừa lại những gì từ lớp cha?
		 - Khi tạo đối tượng lớp con thì nó có tạo đối tượng lớp cha không?
		 - Mối quan hệ giữa lớp cha-lớp con còn được diễn đạt như thế nào?
		 - Lớp cha còn có tên gọi nào khác?
		 + Parent, super, base class.
		 - Lớp con còn có tên gọi nào khác không?
		 + Sub class, delivered class, child class, heir class
*/

#include <iostream>
using namespace std;

class Father {
public:
	Father() {
		cout << this << endl;
	}
};

class Child : public Father {
public:
	Child() {
		cout << this << endl;
	}
};

int main() {
	Child child;
	return 0;
}