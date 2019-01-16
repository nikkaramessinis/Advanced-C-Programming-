#include <iostream>

using namespace std;


class Parent {
	int dogs{5};
	string text{"Hello"};
public:
Parent():Parent("Hello") {
		cout << "No parameter parent constructor";
	}
	Parent(string text) {
		dogs = 5;
		this->text = text;
		cout << "string parent constructor" << endl;
	}

};


class Child :public Parent {
public:
	Child() = default;
};


int main() {
	Parent parent;
	//Child child;

	while (1);
	return 0;

}