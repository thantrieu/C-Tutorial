/*
	Chồng toán tử: + - * / hai đa thức
	Những toán tử nào không thể nạp chồng?
	 . :: ?: sizeof
*/

#include <iostream>
using namespace std;

class PhanSo {
	int tu;
	int mau;
public:
	PhanSo() {
		tu = 0;
		mau = 1;
	}
	PhanSo(int a, int b) {
		tu = a;
		mau = (b == 0) ? 1 : b;
	}
	void showInfo() {
		cout << tu << "/" << mau << endl;
	}
	PhanSo operator + (PhanSo const&);
	PhanSo operator * (PhanSo const&);
	friend PhanSo operator - (PhanSo const&, PhanSo const&);
	friend PhanSo operator / (PhanSo const&, PhanSo const&);
};

PhanSo PhanSo::operator+(PhanSo const& b) {
	PhanSo s;
	s.tu = tu * b.mau + mau * b.tu;
	s.mau = mau * b.mau;
	return s;
}

PhanSo PhanSo::operator*(PhanSo const& b) {
	PhanSo s;
	s.tu = tu * b.tu;
	s.mau = mau * b.mau;
	return s;
}

PhanSo operator-(PhanSo const& a, PhanSo const& b) {
	PhanSo s;
	s.tu = a.tu * b.mau - a.mau * b.tu;
	s.mau = a.mau * b.mau;
	return s;
}

PhanSo operator/(PhanSo const& a, PhanSo const& b) {
	PhanSo s;
	s.tu = a.tu * b.mau;
	s.mau = a.mau * b.tu;
	return s;
}

int main() {

	PhanSo a(10, 3);
	PhanSo b(6, 9);
	PhanSo tong = a + b;
	PhanSo hieu = a - b;
	PhanSo tich = a * b;
	PhanSo thuong = a / b;

	tong.showInfo();
	hieu.showInfo();
	tich.showInfo();
	thuong.showInfo();

	return 0;
}