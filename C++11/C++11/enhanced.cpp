#include <iostream>
#include <vector>
using namespace std;

int main() {
	auto texts = { "1","2","four" };

	for (auto text : texts) {
		cout << text;
	}

	vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(56);
	numbers.push_back(7);
	numbers.push_back(8);

	for (auto number : numbers) {
		cout << number << endl;
	}

	string hello = "Hello";
	for (auto c : hello) {
		cout << c << endl;
	}

	while (1);
	return 0;
}