#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;


class Test {
private:
	string name;
	int id;
public:
	Test(int id,string name) :id(id),name(name) {}
	void print() { cout << name <<id<< endl; }
	bool operator<(Test &other) {
		return id < other.id;
	}
	~Test() {
	}
	friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a,const Test &b) {
	return a.id >b.id;
}
int main() {
	vector<Test> tests;
	tests.push_back(Test(5,"Mike"));
	tests.push_back(Test(10, "Sue"));
	tests.push_back(Test(7, "Raj"));
	tests.push_back(Test(3, "Vicky"));

	sort(tests.begin(),tests.end(),comp);

	for (int i = 0; i < tests.size(); i++) {
		tests[i].print();
	}
	return 0;

}