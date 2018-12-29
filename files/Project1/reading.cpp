#include <iostream>
#include <fstream>
#include <string >
using namespace std;

int main() {
	

	ifstream inFile;
	string inFileName = "text.txt";

	inFile.open(inFileName);

	if (inFile.is_open()) {
		string line;
		while (inFile) {
			getline(inFile, line);
			cout << line << endl;
		}
		inFile.close();
	}
	else {
		cout << "Cannot not open file:" << inFileName << endl;
	}


}