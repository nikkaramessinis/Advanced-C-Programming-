#include <iostream>

using namespace std;

int main() {
	int cats = 5;
	//dn pernaei me reference still apla mporei na to allaksei 
	[cats]() mutable{
		cats = 3;
	
		cout << cats << endl;
	}();

	cout << cats << endl;

	while (1);
}