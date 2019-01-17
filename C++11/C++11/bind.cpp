#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

class Test{
public:
int add(int a, int b, int c) {
	cout << a << "," << b << "," << c << endl;

	cout << "a" << a << endl;
	return a + b + c;
} };

int run(function<int(int,int)> func) {
	return func(7, 3);
}
int main() {

	Test test;
	auto calculator = bind(&Test::add,test,_2,_1,2);
	cout << run(calculator);
	while (1);
	return 0;
}