#include <iostream>

using namespace std;

struct Test {
	virtual bool operator()(string &text) = 0;
	virtual ~Test() {};
};

struct MatchTest:public Test{
	virtual bool operator()(string &text) {
		return text == "lion";
	
	}
};
void check(string text,Test &test) {
	if (test(text)) {
		cout << "Text matches";
	}
	else {
		cout << "No match";
	}

}

int main() {
	//cout << "Hello World" << endl;
	MatchTest test;
	string value = "lion";
	//cout<<test(value)<<endl;
	check("lion", test);

	while (1);
	return 0;

}