#pragma once
class Shop
{
protected:

public:
	
	void ShopIn();
	virtual void Buy() {}
	virtual void Sell() {}
};

class ShopBuy :public Shop {
protected:
public:
	void Buy()override;
};

class ShopSell :public Shop {
protected:
public:
	void Sell()override;
};