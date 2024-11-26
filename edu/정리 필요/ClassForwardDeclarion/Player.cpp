#include "Player.h"
#include"Weapon.h"

Player::Player(const std::string& name, Weapon* weapon)
	:name(name), weapon(weapon)
{
}

Player::~Player()
{
	std::cout << "플레이어" << name << "삭제" << std::endl;
}

void Player::Attack() const
{
	std::cout << "공격" << std::endl;
	if (weapon) { 
		weapon->Use();
	}
}
