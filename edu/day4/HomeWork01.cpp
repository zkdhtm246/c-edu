
#include<iostream>


int Attack(int n, int target)
{
	if (n == 1)
	{
		int ATK = target - 2;
		return ATK;
	}
	else
	{
		int ATK = target - 1;
		return ATK;
	}
	
}
void TotalHP(int n, int hp)
{
	if (n == 1)
	{
		std::cout << std::endl;
		std::cout << "                    플레이어" << std::endl;
		std::cout << "                    H P : " << hp << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "고블린" << std::endl;
		std::cout << "H P : " << hp << std::endl;
	}
}



int main()
{
	const int player = 1;
	int playerHP = 5;
	int playerATK = 2;

	const int monster = 2;
	int monsterHP = 5;
	int monsterATK = 1;

	int action = 0;


	std::cout << "야생의 고블린이 나타났다!!" << std::endl;

	std::cout << std::endl;
	std::cout << "고블린" << std::endl;
	std::cout << "H P : " << monsterHP << std::endl;
	std::cout << "ATK : " << monsterATK << std::endl;

	std::cout << std::endl;
	std::cout << "                    플레이어" << std::endl;
	std::cout << "                    H P : " << playerHP << std::endl;
	std::cout << "                    ATK : " << playerATK << std::endl;
	


	while (monsterHP > 0 && playerHP > 0)
	{
		std::cout << std::endl;
		std::cout << "행동을 정하십시오." << std::endl;
		std::cout << "1. 공격" << std::endl;
		std::cout << "2. 방어" << std::endl;
		std::cout << "3. 도망" << std::endl;
		std::cin >> action;

		switch (action)
		{
		case 1:
			std::cout << "###############################################" << std::endl;
			monsterHP = Attack(player, monsterHP);
			std::cout << std::endl;
			std::cout << "공격에 성공했습니다!  - " << playerATK << std::endl;

			TotalHP(monster, monsterHP);
			
			playerHP = Attack(monster, playerHP);
			std::cout << std::endl;
			std::cout << "고블린이 공격했습니다!  - " << monsterATK << std::endl;

			TotalHP(player, playerHP);
			std::cout << std::endl;
			std::cout << "###############################################" << std::endl;
			break;

		case 2:
			std::cout << "###############################################" << std::endl;
			std::cout << std::endl;
			std::cout << "단단해지기!!" << std::endl;
			
			std::cout << std::endl;
			std::cout << "고블린이 공격했습니다!" << std::endl;
			std::cout << "전혀 아프지 않습니다." << std::endl;

			TotalHP(player, playerHP);
			std::cout << std::endl;
			std::cout << "###############################################" << std::endl;
			break;

		case 3:
			std::cout << "###############################################" << std::endl;
			std::cout << std::endl;
			std::cout << "도망에 성공했습니다!" << std::endl;
			playerHP = 0;
			std::cout << std::endl;
			std::cout << "###############################################" << std::endl;
			break;
		}
	}

	std::cout << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << "~~~전투는 무사히 끝났습니다!~~~" << std::endl;
	std::cout << "********************************" << std::endl;

}
