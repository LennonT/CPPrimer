#include "Person.h"

using std::string;

string Person::getAddress() const {
	return this->address;
}

string Person::getName() const {
	return this->name;
}

Person::Person(const string &name, const string &address) :name("Tom"), address("Nothing.") {
}


