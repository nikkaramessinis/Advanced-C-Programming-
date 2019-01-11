#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

int main() {
	string value;

	cout << typeid(value).name();

	decltype(value) name="Bob";
	cout << typeid(name).name()<<endl;
	cout << name;




	while (1);
}