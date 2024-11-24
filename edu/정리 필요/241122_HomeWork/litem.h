#pragma once
#include<iostream>

class Item
{
protected:
	std::string itemName;
	int volume;
	int price;
	int type;
public:

};

class Equip :public Item {
protected:
	int equipType;

};

class Cumsum :public Item {

};

class Ingred :public Item {

};
