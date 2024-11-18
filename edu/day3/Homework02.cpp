#include<iostream>



int main()
{

	int player = 0;
	int computer = 0;
	int match = 10;
	int win = 0;
	
	std::cout << "가위 바위 보를 시작합니다!" << std::endl;

	while (match > 0)
	{
		std::cout << std::endl;
		std::cout << "무엇을 내시겠습니까?" << std::endl;
		std::cout << "1. 가위" << std::endl;
		std::cout << "2. 바위" << std::endl;
		std::cout << "3. 보" << std::endl;
		std::cin >> player;
		
		srand(time(0));
		computer = rand() % 3 + 1;

		switch(player)
		{
			case 1:
				if (computer == 1)
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "가위 vs 가위 : 비겼습니다." << std::endl;
				}
				else if (computer == 2)
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "바위 vs 가위 : 당신이 졌습니다." << std::endl;
				}
				else
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "보 vs 가위 : 당신이 이겼습니다." << std::endl;
					win += 1;
				}
				break;

			case 2:
				if (computer == 1)
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "가위 vs 바위 : 당신이 이겼습니다." << std::endl;
					win += 1;
				}
				else if (computer == 2)
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "바위 vs 바위 : 비겼습니다." << std::endl;
				}
				else
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "보 vs 바위 : 당신이 졌습니다." << std::endl;
				}
				break;

			case 3:
				if (computer == 1)
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "가위 vs 보 : 당신이 졌습니다." << std::endl;
				}
				else if (computer == 2)
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "바위 vs 보 : 당신이 이겼습니다." << std::endl;
					win += 1;
				}
				else
				{
					std::cout << "컴퓨터 : 플레이어" << std::endl;
					std::cout << "보 vs 보 : 비겼습니다." << std::endl;
				}
				break;
		}
		match--;
	}
	std::cout << std::endl;
	std::cout << "~~~~~~~~~~~~~~~빠밤~~~~~~~~~~~~~" << std::endl;
	std::cout << "승리한 횟수 : " << win << std::endl;

}