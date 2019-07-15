// Debug trong C++

#include <iostream>
#include <iomanip>
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
	//cout << setprecision(2) << fixed << (10.0f / 3) << endl;
	return 0;
}