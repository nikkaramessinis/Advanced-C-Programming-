#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int>integers;
	integers.push_back(3);
	integers.push_back(2);
	integers.push_back(1);

	for (unsigned int i = 0; i < integers.size(); i++) {
		cout << integers[i]<<endl;
	}
	for (vector<int>::iterator it = integers.begin(); it != integers.end(); it++) {
		cout << *it << endl;
	}
	while (1);
}