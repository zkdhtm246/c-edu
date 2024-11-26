#pragma once
#include"Shop.h"
#include"Player.h"
#include"GameEnums.h"
class Game
{
private:

	Shop* mShop;
	Player* mPlayer;
	GameEnums::Location mLocation;
	int mGold;
	int mSelect;

public:
	Game();
	~Game();

	void SetLocation(GameEnums::Location location);
	void StartGame();
	void SetShopPage();
	void SetInventoryPage();
	void SetSellInventorypage();

	void DisplayShopItems(GameEnums::ItemType itemKind);
	void BuyItemFromShop(GameEnums::ItemType itemKind, int num);
	
};

