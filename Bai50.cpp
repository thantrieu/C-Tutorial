/*
	Con trỏ this
	- Vấn đề:
	- Là cái gì?
	- Sử dụng khi nào?
*/

#include <iostream>
using namespace std;

template<class T> T findMax(T a, T b) {
	return (a > b) ? a : b;
}

template<class T> void showInfo(T* arr, size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "=======================" << endl;
}

template<class T> class Info {
private:
	T* data;
	size_t size;

public:
	Info() {

	}
	Info(T* data, size_t size) {
		this->data = data;
		this->size = size;
	}

	template<class T> void showData() {
		for (size_t i = 0; i < size; i++)
		{
			cout << data[i] << " ";
		}
		cout << "\n=========================\n";
	}
};

int main() {
	cout << findMax<int>(10, 20) << endl;
	char arr[] = { 'h', 'e', 'l', 'l', 'o', '!' };
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	float x[] = { 1.23f, 3.45f, 6.2f, 7.9f, 4.6f, 7.8f, 9.5f };
	
	Info<char> f1(arr, 5);
	Info<int> f2(a, sizeof(a) / sizeof(int));
	Info<float> f3(x, sizeof(x) / sizeof(float));

	f1.showData<char>();
	f2.showData<int>();
	f3.showData<float>();

	return 0;
}