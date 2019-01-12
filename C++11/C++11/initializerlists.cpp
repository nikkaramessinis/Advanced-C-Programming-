#include <iostream>
#include <vector>
#include <initializer_list>
#include <string>
using namespace std;



class Test {
public:
	Test(initializer_list<string> texts) {
		for (auto value : texts) {
			cout << value << endl;
		}
	}

	void print(initializer_list<string> l) {
		for (auto valie : l) {
			cout << valie << endl;
		}
	}

};
int main() {
	vector<int> numbers{ 1,3,4,6 };
	cout << numbers[2] << endl;

	Test test{ "apple","orange","banana" };
	test.print({ "one","two","four" });
	while (1);
	return 0;


}