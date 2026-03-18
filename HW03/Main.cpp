#include "Inventory.h"
#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

void main()
{
	Inventory<Item>* itemInventory = new Inventory<Item>();
	for (int i = 0; i < 11; ++i)
	{
		Item tem = Item("Item" + to_string(i), i * 100);
		itemInventory->AddItem(tem);
	}

	itemInventory->PrintAllItems();

	delete itemInventory;

}