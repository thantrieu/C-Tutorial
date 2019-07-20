/*
	Thu hồi bộ nhớ chủ động: 
	Cú pháp: delete pointer_name; or delete[] pointer_name;
	- với con trỏ null
	- với con trỏ có/không có tham chiếu
	- với con trỏ mảng
	- với con trỏ void
	- với con trỏ trỏ tới con trỏ
*/
#include <iostream>
using namespace std;

int main() {
	int* nPtr = NULL;
	delete nPtr;

	double* dPtr = new double;
	delete dPtr;

	float* fPtr = new float(3.141592f);
	delete fPtr;

	int* aPtr;
	int *a = new int(100);
	aPtr = a;
	// ....
	delete aPtr;

	int* arr = new int[100];
	//....
	delete[] arr;

	void* vPtr;
	int* b = new int(100);
	vPtr = (int*)b;
	delete vPtr;

	int** xPtr;
	xPtr = new int* [100];
	for (size_t i = 0; i < 100; i++)
	{
		xPtr[i] = new int[12];
	}
	// ...
	for (size_t i = 0; i < 100; i++)
	{
		delete[] xPtr;
	}
	delete xPtr;

	return 0;
}