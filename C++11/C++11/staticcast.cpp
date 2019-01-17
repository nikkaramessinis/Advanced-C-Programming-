#include <iostream>

using namespace std;

class Parent {
public:
	virtual void speak() {
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
	Sister sister;
	float value = 3.23f;

	//cout << int(value)<<endl;
	//cout << static_cast<int>(value) << endl;


	Parent *pp = &brother;

	//Brother *pb = static_cast<Brother*>(&parent);
	Parent *ppb = &brother;
	//cout << pb << endl;
	//Brother * pbb = static_cast<Brother*>(ppb);

	//Parent &&p = Parent();
	Parent &&p = static_cast<Parent &&>(parent);
	//p.speak();


	//Brother *pbb = dynamic_cast<Brother*>(ppb);
	//if (pbb == nullptr) {
		//cout << "invalid cast" << endl;
	//}
	//else {
		//cout << pbb << endl;
	//}
	Sister *pbb = reinterpret_cast<Sister*>(ppb);
	if (pbb == nullptr) {
		cout << "invalid cast" << endl;
	}
	else {
		cout << pbb << endl;
	}


	while (1);
		return 0;
}