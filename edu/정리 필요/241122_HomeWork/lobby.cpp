#include<iostream>
#include "lobby.h"
#include "player.h"
#include "Shop.h"

void Lobby::Insert()
{
	std::cout << "================메  뉴================" << std::endl << std::endl;
	std::cout << "1. 상태창\n2. 소지품\n3. 상점" << std::endl;
	int insert;
	std::cin >> insert;
	while (1)
	{
		if (insert != 1 && insert != 2 && insert != 3) {
			std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
			std::cout << "잘못된 접근입니다. 다시 선택하세요";
			std::cin >> insert;
		}
		else if (insert == 1) {
			return play->PrintStatus();
			
		}
		else if (insert == 2) {
			return shop->ShopIn();
		}
		else {
			std::cout << "상점으로 떠납니다";
			return;
		}
	}	
}
