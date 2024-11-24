#include "Shop.h"
#include "player.h"
#include "lobby.h"


void Shop::ShopIn()
{
	std::cout << "================상  점================" << std::endl << std::endl;
	std::cout << "좋은 물건이 있다구~" << std::endl;
	std::cout << "1. 산다\n2. 판다" << std::endl;
	int insert;
	std::cin >> insert;
	while (1)
	{
		if (insert != 1 && insert != 2) {
			std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
			std::cout << "잘못된 접근입니다. 다시 선택하세요";
			std::cin >> insert;
		}
		else if (insert == 1) {
			std::cout << "사러 떠납니다";
			return;

		}
		else {
			std::cout << "팔러 떠납니다";
			return;
		}
	}
}


void ShopBuy::Buy()
{

}

void ShopSell::Sell()
{
}


