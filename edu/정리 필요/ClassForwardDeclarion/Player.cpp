#include "Player.h"
#include"Weapon.h"

Player::Player(const std::string& name, Weapon* weapon)
	:name(name), weapon(weapon)
{
}

Player::~Player()
{
	std::cout << "�÷��̾�" << name << "����" << std::endl;
}

void Player::Attack() const
{
	std::cout << "����" << std::endl;
	if (weapon) { 
		weapon->Use();
	}
}
