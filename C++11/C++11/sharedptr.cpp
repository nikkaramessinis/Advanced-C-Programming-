#include <iostream>
#include <memory>


using namespace std;

class Test {
public:
	Test() {
		cout << "Created" << endl;
	}
	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}

};

class Temp {
private:
	unique_ptr<Test[]>pTest;

public:
	Temp() :pTest(new Test[2]) {

	}

};
int main() {

	shared_ptr<Test> pTest2(nullptr);
	{
		shared_ptr<Test> pTest1 = make_shared<Test>();
		pTest2 = pTest1;
	}

	cout << "Finished" << endl;
	while (1);
	return 0;
}