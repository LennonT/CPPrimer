#ifndef Account_h__
#define Account_h__

#include <string>

class Account {

public:
	Account(std::string ow, double am):owner(ow), amount(am) {}
	
	void applyInt(double am) {
		amount += amount * interestRate;
	}
	static double getRate() {
		return interestRate;
	}
	static void setRate(double newRate) {
		interestRate = newRate;
	}


private:
	std::string owner;
	int amount;
	static double interestRate;
	static double intiRate();



};




#endif // Account_h__