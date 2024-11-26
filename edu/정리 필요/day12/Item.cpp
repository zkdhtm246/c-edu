#include "Item.h"




std::string Item::GetName() const { return name; }

std::string Item::GetDescription() const { return description; }

GameEnums::ItemType Item::GetType() const
{
	return type();
}

int Item::GetAttribute() const
{
	return attribute;
}

int Item::GetPrice() const
{
	return price;
}

int Item::GetCount() const
{
	return 0;
}

void Item::SetCount(int const)
{
}
