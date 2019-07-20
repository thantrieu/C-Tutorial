/*
	Con trỏ null, con trỏ void
*/
#include <iostream>
using namespace std;

void showExample(void* data, int size) {
	if (size == sizeof(char)) {
		char* charPtr = (char*)data; // ep kieu con tro tu kieu void* sang char*
		cout << *charPtr << endl;
	}
	else if (size == sizeof(int)) {
		int* ptr = (int*)data;
		cout << *ptr << endl;
	}
	else if(size == sizeof(double)) {
		double * dPtr = (double*) data;
		*dPtr *= 2;
		cout << *dPtr << endl;
	}
}

int main() {
	double x = 3.141592;
	char c = 'H';
	int* ptr;
	int a = 255;
	ptr = &a;
	showExample(&x, sizeof(double));
	showExample(&c, sizeof(char));
	showExample(ptr, sizeof(int));
	return 0;
}