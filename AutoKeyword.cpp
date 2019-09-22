/*
	auto keyword
*/
#include <iostream>
using namespace std;

auto showInfo() {
	// ..
}

auto isOk(int x) {
	if (x < 5) {
		return true;
	}
	return false;
}

int main() {
	auto x = 0;
	auto y = 1.25f;
	auto z = 2.56;

	cout << "Kieu cua bien z: " << typeid(showInfo()).name() << endl;

	return 0;
}