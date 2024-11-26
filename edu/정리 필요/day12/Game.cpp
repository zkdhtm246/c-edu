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
	std::cout << "상점에 온걸 환영함." << std::endl;
	std::cout << "아이템 종류를 선택해라 : (1. 방어구, 2. 무기) : ";
	std::cin >> select;

	GameEnums::ItemType ItemType;

	if (select == 1) {
		ItemType = GameEnums::ItemType::ITEM_ARMOR;
	}
	else if (select == 2) {
		ItemType = GameEnums::ItemType::ITEM_WEAPON;
	}
	else {
		std::cout << "잘못된 선택임" << std::endl;
		return;
	}

	mShop->DisplayItems(itemType);

	std::cout << "구매할 아이템 번호를 입력해라 : ";

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
	std::cout << "인벤토리 보기" << std::endl;
	DisplayPlayerStatus();
	mPlayer->ShowInventory();

	std::cout << "상점은 1, 장착은 2, 판매는 3 눌러라 : ";
	int choice;
	std::cin >> choice;

	if (choice == 1) {
		SetLocation(GameEunms::Location::LOCATION_SHOP);
	}
	else if(choice==2){
		std::cout << "장착할 아이템 번호를 입력 : ";
		int itemNum;

}

void Game::SetSellInventorypage()
{
	std::cout << "판매할 아이템을 선택 : " << std::endl;
	int itemNum;
	std::cin >> itemNum;

	mPlayer->SellTtem(itemNum, mGold);
	mPlayer->

}



void Game::BuyItemFromShop(GameEnums::ItemType itemKind, int num)
{
	Item* boughtTtem = mShop->BuyItem(itemKind, num - 1, mGold);
	
	if (boughtItem != nullptr); {
		std::cout << "아이템 구매 성공" << std::endl;
		mPlayer->AddItemToInventory(*boughtItem);
		std::cout<<"구매한 아이템 : "<<boughtItem
	}
}
