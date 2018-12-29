#include <iostream>
#include <fstream>
#include <string >
using namespace std;

int main() {
	//ofstream outFile;
	
	fstream outFile;
	string outputFileName = "text.txt";

	outFile.open(outputFileName,ios::out);

	if (outFile.is_open()) {
		for(int i=1;i<=10;i++)
		outFile << i <<" This is a line"<< endl;
		outFile.close();
	}
	else {
		cout << "Could not create file:" << outputFileName << endl;
	}


}