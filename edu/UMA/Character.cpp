#include "Character.h"

Character::Character(std::string n, const int s, const int p, const int i)
	:name(n),speed(s),power(p),intel(i){}

int Character::GetStatusSpeed()const
{
	return speed;
}

int Character::GetStatusPower() const
{
	return power;
}

int Character::GetStatusIntel() const
{
	return intel;
}

std::string Character::GetName() const
{
	return name;
}

void CreateCharacterList(std::vector<Character*>& characterList)
{
	characterList.push_back(new Character("하루 우라라", 90, 90, 80));
	characterList.push_back(new Character("골드 쉽", 80, 100, 70));
	characterList.push_back(new Character("오구리 캡", 100, 100, 90));
}

void DeleteCharacterList(std::vector<Character*>& characterList)
{
	for (Character* character : characterList) {
		delete character;
	}
	characterList.clear();
}
