#ifndef Bulk_item_h__
#define Bulk_item_h__

#include <string>
#include "Item_base.h"


class Bulk_item : public Item_base {
	
	Bulk_item(const std::string& isbnName = "", double sales_price = 0, std::size_t min_a=0, double disc=0.0) :
		Item_base(isbnName, sales_price), min_amount(min_a), discount(disc)
	{}

	double getPrice(std::size_t amount) const;
private:
	std::size_t min_amount;  //最低可打折购买数目
	double discount;  //折扣率 如8%


};



#endif // Bulk_item_h__
