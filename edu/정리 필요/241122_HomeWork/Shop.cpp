#include "Shop.h"
#include "player.h"
#include "lobby.h"


void Shop::ShopIn()
{
	std::cout << "================��  ��================" << std::endl << std::endl;
	std::cout << "���� ������ �ִٱ�~" << std::endl;
	std::cout << "1. ���\n2. �Ǵ�" << std::endl;
	int insert;
	std::cin >> insert;
	while (1)
	{
		if (insert != 1 && insert != 2) {
			std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
			std::cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���";
			std::cin >> insert;
		}
		else if (insert == 1) {
			std::cout << "�緯 �����ϴ�";
			return;

		}
		else {
			std::cout << "�ȷ� �����ϴ�";
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


