#include "Game.h"

Game::Game()
{
	mShop = new Shop();
	mPlayer = new Player();
	mGold = 1000;
	mLocation=GameEnums::Location::LOCATION_SHOP
}

Game::~Game()
{
	delete mShop;
	delete mPlayer;
	mShop = nullptr;
	mPlayer = nullptr;
}

void Game::SetLocation(GameEnums::Location location)
{
}

void Game::StartGame()
{
	bool isStart = true;
	while (isStart) {
		switch 
			case
				SetShip
			case GameEnums::
		
	}
}

void Game::SetShopPage()
{
	int select;
	std::cout << "������ �°� ȯ����." << std::endl;
	std::cout << "������ ������ �����ض� : (1. ��, 2. ����) : ";
	std::cin >> select;

	GameEnums::ItemType ItemType;

	if (select == 1) {
		ItemType = GameEnums::ItemType::ITEM_ARMOR;
	}
	else if (select == 2) {
		ItemType = GameEnums::ItemType::ITEM_WEAPON;
	}
	else {
		std::cout << "�߸��� ������" << std::endl;
		return;
	}

	mShop->DisplayItems(itemType);

	std::cout << "������ ������ ��ȣ�� �Է��ض� : ";

	int num;
	std::cin >> num;

	BuyItemFromShop(ItemType, num);

	SetLocation(GameEnums::Location::LOCATION_INVENTORY);
}

void Game::DisplayShopItems(GameEnums::ItemType itemKind)
{
	mShop->DisplayItems(itemKind);
}

void Game::SetInventoryPage()
{
	std::cout << "�κ��丮 ����" << std::endl;
	DisplayPlayerStatus();
	mPlayer->ShowInventory();

	std::cout << "������ 1, ������ 2, �ǸŴ� 3 ������ : ";
	int choice;
	std::cin >> choice;

	if (choice == 1) {
		SetLocation(GameEunms::Location::LOCATION_SHOP);
	}
	else if(choice==2){
		std::cout << "������ ������ ��ȣ�� �Է� : ";
		int itemNum;

}

void Game::SetSellInventorypage()
{
	std::cout << "�Ǹ��� �������� ���� : " << std::endl;
	int itemNum;
	std::cin >> itemNum;

	mPlayer->SellTtem(itemNum, mGold);
	mPlayer->

}



void Game::BuyItemFromShop(GameEnums::ItemType itemKind, int num)
{
	Item* boughtTtem = mShop->BuyItem(itemKind, num - 1, mGold);
	
	if (boughtItem != nullptr); {
		std::cout << "������ ���� ����" << std::endl;
		mPlayer->AddItemToInventory(*boughtItem);
		std::cout<<"������ ������ : "<<boughtItem
	}
}
