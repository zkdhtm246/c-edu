#include<iostream>



int main()
{

	int player = 0;
	int computer = 0;
	int match = 10;
	int win = 0;
	
	std::cout << "���� ���� ���� �����մϴ�!" << std::endl;

	while (match > 0)
	{
		std::cout << std::endl;
		std::cout << "������ ���ðڽ��ϱ�?" << std::endl;
		std::cout << "1. ����" << std::endl;
		std::cout << "2. ����" << std::endl;
		std::cout << "3. ��" << std::endl;
		std::cin >> player;
		
		srand(time(0));
		computer = rand() % 3 + 1;

		switch(player)
		{
			case 1:
				if (computer == 1)
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "���� vs ���� : �����ϴ�." << std::endl;
				}
				else if (computer == 2)
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "���� vs ���� : ����� �����ϴ�." << std::endl;
				}
				else
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "�� vs ���� : ����� �̰���ϴ�." << std::endl;
					win += 1;
				}
				break;

			case 2:
				if (computer == 1)
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "���� vs ���� : ����� �̰���ϴ�." << std::endl;
					win += 1;
				}
				else if (computer == 2)
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "���� vs ���� : �����ϴ�." << std::endl;
				}
				else
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "�� vs ���� : ����� �����ϴ�." << std::endl;
				}
				break;

			case 3:
				if (computer == 1)
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "���� vs �� : ����� �����ϴ�." << std::endl;
				}
				else if (computer == 2)
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "���� vs �� : ����� �̰���ϴ�." << std::endl;
					win += 1;
				}
				else
				{
					std::cout << "��ǻ�� : �÷��̾�" << std::endl;
					std::cout << "�� vs �� : �����ϴ�." << std::endl;
				}
				break;
		}
		match--;
	}
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~����~~~~~~~~~~~~~" << std::endl;
	std::cout << "�¸��� Ƚ�� : " << win << std::endl;

}