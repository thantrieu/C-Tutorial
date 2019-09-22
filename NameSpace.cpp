/*
	Name space in c++:
	- cú pháp tổng quát:
		namespace name {
			...
		}
	- cho phép nhiều namespace có cùng tên đối tượng mong muốn
	- nhiều namespace có cùng tên vẫn được coi là hợp lệ
	- namespace chỉ được khai báo ở phạm vi toàn cục
	- namespace không chứa các access modifiers
	- namespace có thể lồng nhau
	- sau ngoặc đóng của namespace } không cần có ;
*/

#include <iostream>
#include "NameSpaceExample.h"
using namespace std;
using namespace example1;

namespace space1 {
	namespace s1 {
		int x;
		int a;

		void sayHello() {
			cout << "Hello" << endl;
		}

		class X {

		};
	}

	namespace s2 {
		int x;
		int a;

		void sayHello() {
			cout << "Hello" << endl;
		}

		class X {

		};
	}
}

namespace space2 {
	const int X = 100;

	void sayHello();
}

void space2::sayHello() {
	cout << "Hi there!" << endl;
}

int main() {
	NameSpaceExample* ex = new NameSpaceExample();

	return 0;
}