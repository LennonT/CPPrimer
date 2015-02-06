#ifndef Item_base_h__
#define Item_base_h__

#include <string>

class Item_base {
private:
	std::string isbn;

protected:
	double price;

public:
	Item_base(const std::string& isbnName = "", double sales_price=0.0) :isbn(isbnName),price(sales_price) {}

	std::string book() const { 
		return isbn;
	}

	virtual double getPrice(std::size_t amount) const {
		return amount * price;
	}

	virtual ~Item_base() {}

};




#endif // Item_base_h__
