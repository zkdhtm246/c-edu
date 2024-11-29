#pragma once
#include<iostream>
#include<vector>


class Character
{
private:
	std::string name;
	const int speed;
	const int power;	
	const int intel;

public:
	Character(std::string n, const int s, const int p, const int i);		
	
	int GetStatusSpeed()const;
};

void CreateCharacterList(std::vector<Character*>& characterList);
void DeleteCharacterList(std::vector<Character*>& characterList);



