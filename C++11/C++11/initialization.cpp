#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int values[] = { 1,2,4 };
	cout << values[0] << endl;

	class C {
	public:
		string text;
		int id;

	};

	C c1 = { "Hello",7 };
	cout << c1.text << endl;

	struct S {
		string text;
		int id;

	};

	S s1 = { "Hello",7 };
	cout << s1.text << endl;

	//

	struct R {
		string text;
		int id;

	}r1 = { "Hello",7 }, r2{"Hi",8};
	cout << r1.text <<endl<<r2.text<< endl;


	vector<string> strings;


	strings.push_back("One");
	strings.push_back("Three");
	strings.push_back("Two");



	//c++11

	int value{5};
	cout << value << endl;


	string text{ "Hello" }; 
	int numbers[]{ 1,3,5 };
	for (auto number : numbers) {
		cout << number<<endl;
	}
	int *pInts = new int[3]{ 1,2,3 };
	cout << pInts[1] << endl;



	int value1{};
	cout << value1 << endl;

	int *pSomething{};
	cout << pSomething << endl;
	delete pInts;

	struct {
		int value;
		string text;
	}s7{ 5,"HI" };
	cout << s7.text;


	vector<string> strings11{ "ine","two","three" };
	cout << strings11[2];


	while (1);
	return 0;

}