#include "Shop.h"
#include<iostream>

Shop::Shop()
{
	SetItems();
}

Shop::~Shop()
{
}

void Shop::SetItems()
{
	AddItem(Item(GameEnums::ItemType::ITEM_ARMOR, "°¡Á×°©¿Ê", "¼Ò°¡Á×À¸·Î ¸¸µç °Í", 5, 100, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_ARMOR, "Ã¶°©¿Ê", "Ã¶·Î ¸¸µç °Í", 5, 100, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_WEAPON, "Ã¶°Ë", "±×³É Ä®", 5, 200, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_WEAPON, "³ª¹«°Ë", "ÀÌ°Ô Ä®ÀÌ³Ä", 5, 200, 1));
}

void Shop::DisplayItems(GameEnums::ItemType type) const
{
	std::cout << "»óÁ¡ ¾ÆÀÌÅÛ ¸ñ·Ï (" << (type == GameEnums::ItemType::ITEM_WEAPON ? "¹«±â" : "¹æ¾î±¸") << "): " << std::endl;

	for (int i = 0; i < items.size(); ++i) {
		const Item& item = items[i];
		if (item.GetType() == type) {
			std::cout<<i+1<<". "<<item.GetName()<<
		}
	}
}

Item* Shop::BuyItem(GameEnums::ItemType type, const int index, int& gold)
{
	Item& item = items[index];

	if (gold >= item.GetPrice()) {
		gold -= item.GetPrice();
		std::cout << item.GetName() << "À» ±¸¸ÅÇÔ" << std::endl;

		return&item;
	}
	else {
		return nullptr;
	}
	
}

void Shop::AddItem(const Item& item)
{
	items.push_back(item);
}
