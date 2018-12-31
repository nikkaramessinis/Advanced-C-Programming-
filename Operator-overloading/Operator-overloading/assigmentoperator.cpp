#include <iostream>
#include <string>
using namespace std;
class Test {
private:
	int id;
	string name;
public:
	Test() :id(0), name("") {
	}
	Test(int id, string name) :id(id), name(name) {
	}
	void print() {
		cout << id << ":" << name << endl;
	}
const Test &operator=(const Test &other) {
		name = other.name;
		id = other.id;
		cout << "Assigment running";
		return *this;
	}
	Test(const Test &other) {
		cout << "Copy constructor running" << endl;
		id = other.id;
		name = other.name;
	}
	~Test() {}
};

int main() {
	Test test1(10, "Mike");
	cout << "Print test1: " << flush;
	test1.print();


	Test test2(20, "Bod");
	test2 = test1;
	cout << "Print test2: " << flush;
	test2.print();

	Test test3;
	test3.operator=(test2);
	cout << "Print test3: " << flush;

	//copy initialization
	Test test4 = test1;
	test4.print();
	while (1);
	return 0;


}