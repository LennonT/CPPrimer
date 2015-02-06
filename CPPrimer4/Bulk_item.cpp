#include "Bulk_item.h"

double Bulk_item::getPrice(std::size_t amount) const {
	if (amount > min_amount) {
		return (1 - discount) * price;
	}
	else {
		return Item_base::getPrice(amount);
	}
}