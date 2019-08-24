/*
	Đọc ghi file trong C++
	- $66: đọc file text
	- $67: ghi file text
	- $68: ghi file nhị phân
	- $69: đọc file nhị phân
	- $70: Bài tập tổng hợp đọc ghi file với object
*/

#include <iostream>
#include <fstream>
using namespace std;

void showInfo(int* a, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\nDONE";
}

int main() {
	// mo file -> doc du lieu -> dong file
	// fstream ifs("input.txt", ios::in); // c1
	// ifs.open("C:/Users/ADMIN/Desktop/input.txt"); // c2

	ifstream ifs2("input.txt");

	// ifs2.open("input.txt");
	size_t n;
	int* arr;

	ifs2 >> n;
	arr = new int[n];

	for (size_t i = 0; i < n; i++)
	{
		ifs2 >> arr[i];
	}

	showInfo(arr, n);

	ifs2.close();

	return 0;
}