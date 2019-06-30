#include <iostream>
using namespace std;

/*	Hằng số trong C++
	1. Tại sao lại cần hằng số?
	2. Cách khai báo, tạo hằng số?
	3. Ví dụ minh họa

	Have fun!
*/

#define PI 3.141592

const int SCREEN_WIDTH = 1920;
const int SCREEN_HEIGHT = 1080;

int main() {

	cout << "PI = " << PI << endl;
	cout << "Screen width = " << SCREEN_WIDTH << endl;
	cout << "Screen height = " << SCREEN_HEIGHT << endl;

	return 0;
}