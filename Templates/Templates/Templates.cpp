#include <iostream>
#include <string>
using namespace std;

template<class T, class K>
class Test {
private:
	T obj;
public:
	Test(T obj) {
	this->obj = obj;
}
	void print() {
		cout << obj << endl;
}


};
template<class T>
void  print(T n) {
	cout << n << endl;
}
int main() {
	Test<string, int>test1("Hello");
	test1.print();
	print<string>("hello");
	print<int>(5);

	while (1);
	return 0;
}