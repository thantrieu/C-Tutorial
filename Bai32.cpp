// Debug trong C++

#include <iostream>
using namespace std;

int caculateSum(int from, int to) {
	int sum = 0;
	for (int i = from; i <= to; i++)
	{
		sum += i;
	}
	return sum;
}

int main() {
	int a = 10, b = 35;
	int result = caculateSum(a, b);
	cout << result << endl;

	return 0;
}