#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int *_pBuffer;
public:
	Test() {
		cout << "constructor" << endl;
		_pBuffer = new int[SIZE] {};

	}

	Test(int i) {
		_pBuffer = new int[SIZE] {};
		cout << "parameterized constructor" << endl;


		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = 7 * i;
		}
	}

	Test(const Test &other) {
		cout << "Copy constructor" << endl;
		_pBuffer = new int[SIZE] {};
		memcpy(_pBuffer, other._pBuffer,sizeof(int)*SIZE);
		
	}

	Test &operator=(const Test &other) {
		cout << "assignment" << endl;
	}
	~Test() {
		cout << "destructor" << endl;
		delete[] _pBuffer;
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

void check(const Test&value) {

	cout << "lvalue function" << endl;
}


void check(Test &&value) {

	cout << "rvalue function" << endl;
}
int main() {
	Test test1=getTest();


	cout << test1;
	


	vector<Test> vec;
	vec.push_back(Test());

	//lvalue=rvalue
	int value1 = 7;
	//lvalue anything you can take the address of
	int *pValue1 = &value1;

	//cause 7 is an rvalue
	//int *pValue = &7;

	Test *pTest1 = &test1;
	//temporary value rvalue
	//Test *pTest2 = &getTest();

	//increments the value and then uses it 
	int *pValue3 = &++value1;
	cout << *pValue3 << endl;

	//error use the value and then increment it so temporary value is made so rvalue
	//int *pValue4 = &value++;

	//rvalue even though value 1 is an rvalue
	//int s = &(7 + value1);


	Test &rTest1 = test1;

	// Test& rTest2 = getTest();

	const Test& rTest2 = getTest();
	
	Test test2(Test(1));
	

	Test &ltest1 = test1;
	Test &&rtest1 = Test();
	Test &&rtest2 = getTest();
	//rvalue references
	cout << "References" << endl<<endl;
	//error
	//Test &&rtest1 = test1;
	check(test1);
	check(getTest());
	check(Test());
	
	while (1);
	return 0;
}