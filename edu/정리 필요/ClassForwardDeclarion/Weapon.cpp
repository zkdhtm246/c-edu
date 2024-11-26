#include "Weapon.h"
#include"Player.h"

Weapon::Weapon(const std::string& type)
	:type(type), player(nullptr)
{
}

Weapon::~Weapon()
{
	std::cout << "����" << type << "������" << std::endl;
}

void Weapon::Use() const
{
	std::cout << type << "����!" << std::endl;
}
