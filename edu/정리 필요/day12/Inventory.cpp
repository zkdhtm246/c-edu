#include "Inventory.h"
#include<iostream>
Inventory::Inventory(){}
Inventory::~Inventory(){}

void Inventory::ShowInventory() const
{
    if (items.empty())std::cout << "�κ��丮�� ��� ����" << std::endl;
    else {
        std::cout << "============== �κ��丮 ==============" << std::endl;
        for (int i = 0; i < items.size(); ++i) {
            std::cout << i + 1 << ". " << items[i].GetName() << " - " << items[i].GetPrice() << "���\n";
        }
        std::cout << "==========================================" << std::endl;
    }
}

void Inventory::AddItem(const Item& item)
{
    items.push_back(item);
}

Item Inventory::SellItem(const int index, int& gold)
{
    if (items.empty()) {
        std::cout << "����" << std::endl;
        return Item();
    }
    Item& soldItem = items[index - 1];

    int price = soldItem.GetPrice();
    gold += price;

    items.erase(items.begin() + (index - 1));

    std::cout << soldItem.GetName() << "�� �Ǹ���. �ݾ� : " << price << std::endl;
    std::cout << "���� �ݾ� : " << gold << std::endl;

    return soldItem;
}

void Inventory::EquipItem(const int index)
{
    //����?

    Item& item = items[index - 1];

    if (item.GetType() == GameEnums::ItemType::ITEM_WEAPON) {
        equipWeapon = item;
        std::cout << item.GetName() << "���⸦ ������!" << std::endl;
    }
    else if (item.GetType() == GameEnums::ItemType::ITEM_ARMOR) {
        equipArmor = item;
        std::cout << item.GetName() << "���� ������!" << std::endl;
    }

    items.erase(items.begin() + (index - 1));
    std::cout << "������ �������� �κ��丮���� ������" << std::endl;
    ShowInventory();
}

Item Inventory::GetEquippedArmor() const
{
    return equipArmor;
}

void Inventory::SetEquippedArmor(const Item& armor)
{
    equipArmor = armor;
}

Item Inventory::GetEquippedWeapon() const
{
    return equipWeapon;
}

void Inventory::SetEquippedWeapon(const Item& weapon)
{
    equipWeapon = weapon;
}
