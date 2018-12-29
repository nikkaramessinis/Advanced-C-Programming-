#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#pragma pack(push,1)

struct Person {
	char name[50];
	int age;
	double weight;


};

#pragma pack(pop)

int main() {

	Person someone = {"Frodo",220,0.8};
	string fileName = "test.bin";


	// Write binary file
	ofstream outputFile;
	outputFile.open(fileName, ios::binary);
	if (outputFile.is_open()) {

		
		
		//outputFile.write((char *)&someone,sizeof(someone));
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(someone));


		outputFile.close();
	}
	else {
		cout << "Could not create file" + fileName;
	}


	Person someoneElse = {};
	//Read File 
	ifstream inputFile;
	inputFile.open(fileName, ios::binary);
	if (inputFile.is_open()) {



		//outputFile.write((char *)&someone,sizeof(someone));
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(someone));


		inputFile.close();
	}
	else {
		cout << "Could not create file" + fileName;
	}
	cout << someoneElse.name<<","<<someoneElse.age<<","<<someoneElse.weight;
	while (1);
}