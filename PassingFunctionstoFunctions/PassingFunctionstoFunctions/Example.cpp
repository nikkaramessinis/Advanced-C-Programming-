#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool match(string test) {
	
	return test.size() == 3;
}


int countStrings(vector<string> &texts, bool(*matc)(string test)) {
	int counter = 0;
	for (unsigned i = 0; i < texts.size(); i++) {
		if (match(texts[i]))counter++;

	}
	return counter;

}
int main() {
	vector<string>texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");


	cout<<count_if(texts.begin(), texts.end(), match) << endl;
	cout << countStrings(texts, match);
	while (1);
	return 0;
}