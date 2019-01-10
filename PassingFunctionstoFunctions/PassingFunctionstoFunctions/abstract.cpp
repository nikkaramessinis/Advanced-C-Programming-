#include <iostream>
#include <string>


using namespace std;

class Animal {
public:
	virtual void run() = 0;
	virtual void speak() = 0;
};

class Dog: public Animal {
public:
	 virtual void speak() {
		cout << "Woof" << endl;
	}


};

class Labrador :public Dog {
public:
	Labrador() {
		cout << "new labrador" << endl;
	}
	virtual void run() {
		cout << "Running" << endl;
	}

};

void test(Animal &a) {

	a.run();
}


int main() {

	Labrador labrador;
	labrador.speak();
	labrador.run();
	Animal* animals[5];
	animals[1] = &labrador;
	animals[1]->run();
	test(labrador);
	while (1);
}
