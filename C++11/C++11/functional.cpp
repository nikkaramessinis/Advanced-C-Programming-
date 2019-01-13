#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;
bool check(string &test) {
	return test.size() == 3;
}

class check {
public:
	bool operator()(string &test) {
		return test.size() == 5;
	}
}check1;


void run(function<bool(string&)> check) {
	string test = "dog";
	cout << check(test) << endl;
}
int main() {
	vector<string> vec{ "one","two","three" };
	int size = 5;

	auto lambda1 = [size](string test) {return test.size() == 3; };
	int count=count_if(vec.begin(), vec.end(),lambda1 );
	cout << count << endl;

	count = count_if(vec.begin(), vec.end(), check);
	cout << count << endl;

	count = count_if(vec.begin(), vec.end(), check1);
	cout << count << endl;

	run(lambda1);
	run(check1);
	run(check);

	function<int(int, int)>add = [](int one, int two) {return one + two; };
	cout << add(7, 3)<<endl;
	while (1);
	return 0;
}