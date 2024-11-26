#include "Inventory.h"
#include<iostream>
Inventory::Inventory(){}
Inventory::~Inventory(){}

void Inventory::ShowInventory() const
{
    if (items.empty())std::cout << "인벤토리가 비어 있음" << std::endl;
    else {
        std::cout << "============== 인벤토리 ==============" << std::endl;
        for (int i = 0; i < items.size(); ++i) {
            std::cout << i + 1 << ". " << items[i].GetName() << " - " << items[i].GetPrice() << "골드\n";
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
        std::cout << "없음" << std::endl;
        return Item();
    }
    Item& soldItem = items[index - 1];

    int price = soldItem.GetPrice();
    gold += price;

    items.erase(items.begin() + (index - 1));

    std::cout << soldItem.GetName() << "을 판매함. 금액 : " << price << std::endl;
    std::cout << "현재 금액 : " << gold << std::endl;

    return soldItem;
}

void Inventory::EquipItem(const int index)
{
    //선택?

    Item& item = items[index - 1];

    if (item.GetType() == GameEnums::ItemType::ITEM_WEAPON) {
        equipWeapon = item;
        std::cout << item.GetName() << "무기를 장착함!" << std::endl;
    }
    else if (item.GetType() == GameEnums::ItemType::ITEM_ARMOR) {
        equipArmor = item;
        std::cout << item.GetName() << "방어구를 장착함!" << std::endl;
    }

    items.erase(items.begin() + (index - 1));
    std::cout << "장착한 아이템이 인벤토리에서 삭제됨" << std::endl;
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
