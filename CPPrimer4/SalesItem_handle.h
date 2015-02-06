#ifndef SalesItem_handle_h__
#define SalesItem_handle_h__

#include "Item_base.h"

class Sales_item {
public:
	//  默认构造函数
	Sales_item() : p(0), use(new std::size_t(1)) { }
	// 
	Sales_item(const Item_base&);
	//拷贝构造函数
	Sales_item(const Sales_item &i) :
		p(i.p), use(i.use) {
		++*use;
	}
	~Sales_item() { decr_use(); }
	Sales_item& operator=(const Sales_item&);
	// member access operators 
	const Item_base *operator->() const {
		if (p) return p;
		else throw std::logic_error("unbound Sales_item");
	}
	const Item_base &operator*() const {
		if (p) return *p;
		else throw std::logic_error("unbound Sales_item");
	}
private:
	Item_base *p;        // pointer to shared item 
	std::size_t *use;    // pointer to shared use count 
	// called by both destructor and assignment operator to free pointers

	void decr_use()
	{
		if (--*use == 0) { delete p; delete use; }
	}
};

#endif // SalesItem_handle_h__