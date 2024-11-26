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
	AddItem(Item(GameEnums::ItemType::ITEM_ARMOR, "���װ���", "�Ұ������� ���� ��", 5, 100, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_ARMOR, "ö����", "ö�� ���� ��", 5, 100, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_WEAPON, "ö��", "�׳� Į", 5, 200, 1));
	AddItem(Item(GameEnums::ItemType::ITEM_WEAPON, "������", "�̰� Į�̳�", 5, 200, 1));
}

void Shop::DisplayItems(GameEnums::ItemType type) const
{
	std::cout << "���� ������ ��� (" << (type == GameEnums::ItemType::ITEM_WEAPON ? "����" : "��") << "): " << std::endl;

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
		std::cout << item.GetName() << "�� ������" << std::endl;

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
