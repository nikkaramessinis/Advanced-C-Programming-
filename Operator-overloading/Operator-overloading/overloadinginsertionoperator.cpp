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
		//cout << "Assigment running";
		return *this;
	}
	Test(const Test &other) {
		//cout << "Copy constructor running" << endl;
		id = other.id;
		name = other.name;
	}
	friend ostream &operator<<(ostream &out,const Test &test) {
		out << test.id<<":"<<test.name<<endl;
		return out;
	}
	~Test() {}
};

int main() {
	Test test1(10, "Mike");
	cout << test1 << endl;
	//while (1);
	return 0;


}