#include <iostream>
#include <string>
#include <set>
using namespace std;


class Person {
private:
	string name;
	int age;
public:
	Person(int age,string name) :name(name),age(age) {}
	string getName() const { return name; }
	bool operator<(const Person &other) const{
		return name < other.name;
	}
};
int main() {
	set<int> numbers;
	
	numbers.insert(3);
	numbers.insert(2);
	numbers.insert(1);


	set<Person>people;
	people.insert(Person(3, "Nikos"));
	people.insert(Person(3, "Bob"));
	people.insert(Person(3, "Raj"));

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	
	}
	for (set<Person>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->getName() << endl;

	}
	while (1);
	return 0;

}