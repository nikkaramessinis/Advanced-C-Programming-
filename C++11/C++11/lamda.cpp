#include <iostream>
#include <string>
using namespace std;

void test(void(*pfunc)()) {
	pfunc();
}
void runDivide(double(*divide)( double a, double)) {
	auto rval = divide(9, 3);
	cout << rval<<endl;

}

void testGreet(void(*greet)(string)) {
	greet("Bob");
}

int main() {


	auto func = []() {cout << "Hello" << endl; };

	test(func);
	test([]() {cout << "Hello" << endl; });



	auto pGreet = [](string name) {cout << "Hello" << name << endl; };
	pGreet("Mike");
	testGreet(pGreet);

	auto pDivide = [](double a, double b)->double {
		if (b == 0.0) {
			return 0;
		}
		return a / b; };

	cout << pDivide(10.0, 0)<<endl;

	runDivide(pDivide);


	int one = 1;
	int two = 2;
	int three = 3;
	//Capture one and two by value
	[one,two]() {cout << one <<":"<<two<< endl; }();
	//Capture all local variables by value but capture by reference
	[=, &three]() {three = 7; cout << one << ":" << two<<":"<<three<< endl; }();
	//default  capture all by reference
	[&]() {two = 1; cout << one << ":" << two << ":" << three << endl; }();
	cout << three;
	//default capture all local by reference but two and three by value
	[&,two ,three]() { cout << one << ":" << two << ":" << three << endl; }();

	while (1);
	return 0;
}