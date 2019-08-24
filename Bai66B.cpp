/* 
	Đọc từ đầu đến cuối file
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	fstream ifs("input3.txt");
	string s;

	while (!ifs.eof()) {
		getline(ifs, s);
		cout << s << "\n";
	}

	ifs.close();
	return 0;
}