#include <string>

class Person {
private:
	std::string name;
	std::string address;

public:
	Person(const std::string &name, const std::string &address) :name("Tom"), address("Nothing.") {}
	std::string getName();
	std::string getAddress();

};