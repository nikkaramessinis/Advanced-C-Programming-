#include <iostream>
#include <string>
#include <map>
using namespace std; 
class Person{
private:
	int age;
	string name;
public:
Person(string name, int age) :name(name), age(age) {}

void print() const{
	cout << name << ":" << age << endl;
}
bool operator<(const Person &other) const {
	if (name == other.name) { return age < other.age; }
	else{ return name < other.name; }
}


};
int main() {


	map<Person, int>people;
	people[Person("Mike", 40)] = 40;
	people[Person("Mike", 40)] = 30;
	//cannot change key
	people[Person("Mike", 1000)] = 30;
	people[Person("Sue", 30)] = 30;
	people[Person("Raj", 20)] = 20;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->second << ":" << flush;
		it->first.print();
	}
}