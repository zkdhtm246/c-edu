#include<iostream>
#include "lobby.h"
#include "player.h"
#include "Shop.h"

void Lobby::Insert()
{
	std::cout << "================��  ��================" << std::endl << std::endl;
	std::cout << "1. ����â\n2. ����ǰ\n3. ����" << std::endl;
	int insert;
	std::cin >> insert;
	while (1)
	{
		if (insert != 1 && insert != 2 && insert != 3) {
			std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
			std::cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���";
			std::cin >> insert;
		}
		else if (insert == 1) {
			return play->PrintStatus();
			
		}
		else if (insert == 2) {
			return shop->ShopIn();
		}
		else {
			std::cout << "�������� �����ϴ�";
			return;
		}
	}	
}
