#pragma once
#include <string>
using namespace std;


class Item
{
public:
	Item();
	Item(const string& name, int price);
	const string& GetName() const;
	int GetPrice()const;
	void Clear();
	void PrintInfo() const;

private:
	string name_;
	int price_;
};

