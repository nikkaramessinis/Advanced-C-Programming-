#include <iostream>
#include <vector>
#include <string>
#include "ring.h"
using namespace std;

int main() {


	//ring<int>::iterator it;
	//it.print();
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");

	for (ring<string>::iterator it = textring.begin();it!=textring.end(); it++) {
		cout << *it << endl;
	}

	for (string value : textring) {
		cout << value << endl;
	}

	for (auto value : textring) {
		cout << value << endl;
	}
	for (int i = 0; i < textring.size(); i++) {
		//cout << textring.get(i) << endl;
	}

	

	while (1);
	return 0;
}