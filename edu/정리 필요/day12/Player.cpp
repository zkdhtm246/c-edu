#include "Player.h"

Player::Player()
{
	InitPlayer();
}

Player::~Player()
{
}

void Player::InitPlayer()
{
	mAtk = 10;
	mDef = 10;
}

void Player::ShowStatus()
{
	Item equippedWeapon = mInventory.GetEquippedWeapon();
	Item equippedArmor = mInventory.GetEquippedArmor();

	int addAtt = equippedWeapon.GetAttribute();
	int addDef = equippedArmor.GetAttribute();

	std::cout << "============= �÷��̾� ���� =============" << std::endl;
	std::cout << "���ݷ�\t\t" << mAtk << " + " << addAtt << std::endl;
	std::cout << "����\t\t" << mDef << " + " << addDef << std::endl;
	std::cout << "============= ���� =============" << std::endl;

}

void Player::SellItem(const int itemNum, int& gold)
{
	mInventory.SellItem(itemNum, gold);
}

void Player::EquipItem(const int num)
{
	mInventory.EquipItem(num);
}

void Player::AddItemToInventory(const Item& item)
{
	mInventory.AddItem(item);
}

void Player::ShowInventory() const
{
	mInventory.ShowInventory();
}
