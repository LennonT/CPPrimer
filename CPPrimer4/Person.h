#ifndef Person_h__
#define Person_h__

#include <string>

class Person {
private:
	std::string name;
	std::string address;

public:
	Person(const std::string &name, const std::string &address);
	std::string getName() const;
	std::string getAddress() const;

};

#endif