/*
	Các phương thức thường sử dụng của lớp string
	- append(stringToAppend): string
	- compare(otherString): int
	- clear(): void
	- c_str(): const char*
	- empty(): bool
	- erase(from, numberCharacterToDelete): string
	- find(stringToFind): int
	- find_first_of(stringToFind): int
	- find_last_of(stringToFind): int
	- insert(position, stringToInsert): string
	- substr(from, lengthOfSubString): string
	- ...
*/

#include <iostream>
using namespace std;

int main() {
	string s = "3.1415926875";
	string f = "";
	int pos = s.find(".");
	f = s.substr(pos + 1);
	cout << f << endl;

	return 0;
}