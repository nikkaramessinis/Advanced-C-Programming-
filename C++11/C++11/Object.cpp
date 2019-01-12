#include <iostream>
#include <string>
using namespace std;
class Test {
private:
	int id{ 3 };
	string name{ "Mike" };
public:
	Test() = default;
	Test(int id) :id(id) {}
	Test(const Test & other) = default;//copy constructor
	Test &operator=(const Test &other) = delete;//assigment operator
	void print() {
		cout << id << ":" << name<<endl;
	}


};


int main() {

	Test test;
	test.print();


	Test test1(77);
	test1.print();
	//calls copy constructor;
	Test test2 = test1;
/*Wont work we deleted it
calls assigment operator
	test2 = test1;
	*/
	while (1);
	return 0;
}