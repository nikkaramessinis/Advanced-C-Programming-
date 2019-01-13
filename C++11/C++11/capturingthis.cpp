#include <iostream>
#include <string>
using namespace std;

class Test {
private:
	int one{ 1 };
	int two{ 2 };
public:
	void run() {
		int three{ 3 };
		int four{ 4 };
		//auto pLambda = [=,this]() { den ginetai epishs apothhkeuetai panta me refernerce
		//auto pLambda = [&this]() { auto ginetai 

		auto pLambda = [this,three,four]() {
			cout << three << endl;
			cout << four << endl;
			cout << one << endl;
			cout << two << endl;

		};
		pLambda();
	}




};




int main() {


	Test test;
	test.run();
	while (1);
	return 0;
}