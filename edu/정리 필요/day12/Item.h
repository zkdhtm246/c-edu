#pragma once
#include<string>
#include"GameEnums.h"
class Item
{
public:
	Item() {}
	Item(GameEnums ItemType type,const std::string&name, const std::string&description,int attruibute,int price,);


	std::string GetName()const;
	std::string GetDescription()const;
	GameEnums::ItemType GetType()const;
	int GetAttribute()const;
	int GetPrice()const;
	int GetCount()const;
	void SetCount(int const);
private:

	GameEnums::ItemType type;
	std::string name;
	std::string description;
	int attribute;


};

