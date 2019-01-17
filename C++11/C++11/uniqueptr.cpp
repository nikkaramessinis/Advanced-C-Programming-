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
	Temp():pTest(new Test[2]) {
	
	}

};

//auto_ptr is deprecated and you cannot use it with arrays
int main() {
	//edw kaleite duo fores h destroyed 
	{
	//	unique_ptr<Test[]> pTest(new Test[2]);
		Temp temp;
		//pTest[1].greet();
		//cout << *pTest << endl;
	}
	
	cout << "Finished" << endl;
	while (1);
	return 0;
}