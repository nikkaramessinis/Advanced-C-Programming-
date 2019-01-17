#include <iostream>


using namespace std;


class Test{};

template<typename T>
void call(T &&arg) {
	check(static_cast<T>(arg));
}


void check(Test &test) {
	cout << "lvalue" << endl;
}


void check(Test &&test) {
	cout << "rvalue" << endl;
}

int main(){ 
	Test test;
	auto &&t = Test();
	call(Test());
	//check(t);
	while (1);
	return 0;
}