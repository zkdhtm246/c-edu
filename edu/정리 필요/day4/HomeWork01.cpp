
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
		std::cout << "                    �÷��̾�" << std::endl;
		std::cout << "                    H P : " << hp << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "���" << std::endl;
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


	std::cout << "�߻��� ����� ��Ÿ����!!" << std::endl;

	std::cout << std::endl;
	std::cout << "���" << std::endl;
	std::cout << "H P : " << monsterHP << std::endl;
	std::cout << "ATK : " << monsterATK << std::endl;

	std::cout << std::endl;
	std::cout << "                    �÷��̾�" << std::endl;
	std::cout << "                    H P : " << playerHP << std::endl;
	std::cout << "                    ATK : " << playerATK << std::endl;
	


	while (monsterHP > 0 && playerHP > 0)
	{
		std::cout << std::endl;
		std::cout << "�ൿ�� ���Ͻʽÿ�." << std::endl;
		std::cout << "1. ����" << std::endl;
		std::cout << "2. ���" << std::endl;
		std::cout << "3. ����" << std::endl;
		std::cin >> action;

		switch (action)
		{
		case 1:
			std::cout << "###############################################" << std::endl;
			monsterHP = Attack(player, monsterHP);
			std::cout << std::endl;
			std::cout << "���ݿ� �����߽��ϴ�!  - " << playerATK << std::endl;

			TotalHP(monster, monsterHP);
			
			playerHP = Attack(monster, playerHP);
			std::cout << std::endl;
			std::cout << "����� �����߽��ϴ�!  - " << monsterATK << std::endl;

			TotalHP(player, playerHP);
			std::cout << std::endl;
			std::cout << "###############################################" << std::endl;
			break;

		case 2:
			std::cout << "###############################################" << std::endl;
			std::cout << std::endl;
			std::cout << "�ܴ�������!!" << std::endl;
			
			std::cout << std::endl;
			std::cout << "����� �����߽��ϴ�!" << std::endl;
			std::cout << "���� ������ �ʽ��ϴ�." << std::endl;

			TotalHP(player, playerHP);
			std::cout << std::endl;
			std::cout << "###############################################" << std::endl;
			break;

		case 3:
			std::cout << "###############################################" << std::endl;
			std::cout << std::endl;
			std::cout << "������ �����߽��ϴ�!" << std::endl;
			playerHP = 0;
			std::cout << std::endl;
			std::cout << "###############################################" << std::endl;
			break;
		}
	}

	std::cout << std::endl;
	std::cout << "********************************" << std::endl;
	std::cout << "~~~������ ������ �������ϴ�!~~~" << std::endl;
	std::cout << "********************************" << std::endl;

}
