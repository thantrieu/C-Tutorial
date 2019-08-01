#include <iostream>
using namespace std;

class Father {
private:
	string name;
protected:
	string address;
public:
	string email;
	Father() {
		cout << this << endl;
	}
};

class Children : private Father {
private:
	string toy;
public:
	Children() {
		cout << this << endl;
	}
	Children(string);
	Children(string, string, string, string);
	void showInfo();
};

void Children::showInfo() {
	toy = "Tedy";
	address = "New York";
	email = "abc@xmail.com";
}

int main() {
	Children c;
	return 0;
}

/*
	public: 
	protected: 
	private:
*/