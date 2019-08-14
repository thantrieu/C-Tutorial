#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream ofs("output.txt");
	const char* x = "Than Yeu Hoa";
	ofs.write(x, sizeof(x));

	ofs.close();
	return 0;
}