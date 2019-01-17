#include <iostream>

using namespace std;

class Parent {
public:
	void speak() {
		cout << "parent!" << endl;
	}
};

class Brother :public Parent {

};

class Sister :public Parent {

};

int  main() {
	Parent parent;
	Brother brother;

	float value = 3.23f;

	//cout << int(value)<<endl;
	cout << static_cast<int>(value) << endl;


	Parent *pp = &brother;

	//Brother *pb = static_cast<Brother*>(&parent);
	Parent *ppb = &brother;
	//cout << pb << endl;
	Brother * pbb = static_cast<Brother*>(ppb);

	//Parent &&p = Parent();
	Parent &&p = static_cast<Parent &&>(parent);
	p.speak();
	while (1);
		return 0;
}