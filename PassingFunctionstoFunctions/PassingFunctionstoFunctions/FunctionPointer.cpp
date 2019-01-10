#include <iostream>
using namespace std;

void test(int value) {
	cout << "Hello" <<value<< endl;
}

int main() {
	test(3);
	void (*pTest)(int)=test;

	//pTest = test;
	pTest(4);

	//while (1);
	return 0;
}