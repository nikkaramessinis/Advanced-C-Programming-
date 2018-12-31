#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;


class Test {
private:
	string name;
	
public:
	Test(string name) :name(name) {}
	string getName() const { return name; }
	bool operator<(const Test &other) const {
		return name < other.name;
	}
	void print() { cout << name<<endl; }
	~Test() {
	}
};
int main() {
	//LIFO
	stack<Test> testStack;
	testStack.push(Test("Sue"));
	testStack.push(Test("John"));
	testStack.push(Test("Mike"));
	//This is invalid code
	/*Test test1 = testStack.top();
	testStack.pop();
	test1.print();
	*/
	while(testStack.size() > 0) {
		
		Test &test1 = testStack.top();
		test1.print();
		testStack.pop();
	}

	//FIFO
	queue<Test> testQueue;
	testQueue.push(Test("Sue"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Mike"));
	//This is invalid code
	/*Test test1 = testStack.top();
	testStack.pop();
	test1.print();
	*/
	while (testQueue.size() > 0) {

		Test &test1 = testQueue.front();
		test1.print();
		testQueue.pop();
	}


	return 0;

}