#include "Item.h"
#include <iostream>
#include <string>

Item::Item()
	:name_("item")
	,price_(0)
{

}

Item::Item(const string& name, int price) : name_("item")
, price_(0)
{
	name_ = name;
	price_ = price;
}
const string& Item::GetName() const
{
	return name_;
}
int Item::GetPrice() const
{
	return price_;
}

void Item::PrintInfo() const
{

	cout << "[이름: " << name_ << ", 가격:" << price_ << "원]" << endl;
}

void Item::Clear()
{
	name_ = "";
	price_ = 0;
}