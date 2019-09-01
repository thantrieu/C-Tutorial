#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <fstream>
#include <locale>
#include <codecvt> //possible C++11?
using namespace std;

int main()
{
	wifstream ifs(L"inputA.txt");
	
	_setmode(_fileno(stdin), _O_WTEXT);
	_setmode(_fileno(stdout), _O_WTEXT);
	wstring test;
	std::locale loc(std::locale(), new std::codecvt_utf8<wchar_t>);  // UTF-8
	while (!ifs.eof()) {
		getline(ifs, test);
		if (ifs.good()) {
			wcout << test << endl;
		}
	}
	ifs.close();
	wcout << L"Chuỗi ký tự mà bạn vừa mới nhập:" << endl;
	wcout << test;
	return 0;
}