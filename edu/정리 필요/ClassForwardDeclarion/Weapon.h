#pragma once

#include<iostream>
class Player;
class Weapon
{
private:
	std::string type;
	Player* player;
public:
	Weapon(const std::string& type);
	~Weapon();
	void Use()const;
};

