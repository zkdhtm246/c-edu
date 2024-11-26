#pragma once
#include<vector>
#include"Item.h"
class Shop
{
private:
	std::vector<Item>items;
public:
	Shop();
	~Shop();

	void SetItems();
	void DisplayItems(GameEnums::ItemType type)const;
	Item* BuyItem(GameEnums::ItemType type, const int index, int& gold);
	void AddItem(const Item& item);


};

