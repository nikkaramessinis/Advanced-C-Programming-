#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<double>numbers(0);
	cout << "Size :" << numbers.size() << endl;
	int capacity = numbers.capacity();
	

	for (int i= 0; i < 10000; i++) {
		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity:" << capacity << endl;
		}
		numbers.push_back(i);
	}
	//numbers.resize(100);
	numbers.reserve(99999999);
	cout << numbers[2] << endl;
	cout << "Size:" << numbers.size() << endl;
	cout << "Capacity:" << numbers.capacity()<< endl;
	while (1);
}