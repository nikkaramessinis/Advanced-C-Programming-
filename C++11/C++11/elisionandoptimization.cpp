#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
	Test() {
		cout << "constructor" << endl;
	}

	Test(int i) {
		cout << "parameterized constructor" << endl;
	}

	Test(const Test &other) {
		cout << "Copy constructor" << endl;
	}

	Test &operator=(const Test &other) {
		cout << "assignment" << endl;
	}
	~Test() {
		cout << "destructor" << endl;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};


ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}
Test getTest() {
	return Test();
}
int main() {
	Test test1=getTest();


	cout << test1;
	
	while (1);
	return 0;
}