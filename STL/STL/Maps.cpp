#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<string, int>ages;
	ages["Mike"] = 40;
	ages["raj"] = 20;
	ages["Vicky"] = 30;

	
	ages.insert(pair<string, int>("Peter", 100));
	ages.insert(make_pair("Kostas", 290));
	cout << ages["raj"] << endl;
	cout << ages["Sue"] << endl;
	if (ages.find("Vicky") != ages.end()) {
		cout << "Found Vicky"<<endl;
	}
	else {
		cout << "Key not found";
	}
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;

		cout << age.first << ":" << age.second<<endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << ":" << it->second << endl;
	}

	while (1);
	return 0;

}