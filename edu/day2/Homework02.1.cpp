


#include<iostream>


int main()
{
	int choiceGame;
	int choiceChr;

	std::cout << "좋아하는 게임을 선택해주세요." << std::endl;
	std::cout << "1. 워크래프트3" << std::endl;
	std::cout << "2. 디아블로3" << std::endl;
	std::cout << "3. 원신" << std::endl;
	std::cout << "4. 리그 오브 레전드" << std::endl;

	std::cin >> choiceGame;

	if (choiceGame == 1) // 워크래프트3
	{
		std::cout << "당신은 워크래프트3를 선택하셨군요" << std::endl;
		std::cout << "====종족을 선택해주세요====" << std::endl;
		std::cout << "1. 휴먼" << std::endl;
		std::cout << "2. 오크" << std::endl;
		std::cout << "3. 나이트엘프" << std::endl;
		std::cout << "4. 언데드" << std::endl;

		std::cin >> choiceChr;

		if (choiceChr == 1 || choiceChr == 3)
		{
			std::cout << "얼라이언스를 위하여!!" << std::endl;
		}
		else if (choiceChr == 2 || choiceChr == 4)
		{
			std::cout << "호드는 아무것도 아니야!!" << std::endl;
		}
		else
		{
			std::cout << "없는 종족입니다.";
		}
	}

	else if (choiceGame == 2) //디아블로3
	{
		std::cout << "당신은 디아블로3를 선택하셨군요" << std::endl;
		std::cout << "====진영을 선택해주세요====" << std::endl;
		std::cout << "1. 존귀한 천사" << std::endl;
		std::cout << "2. 잔혹한 악마" << std::endl;
		std::cout << "3. 숭고한 네팔렘" << std::endl;

		std::cin >> choiceChr;

		if (choiceChr == 1)
		{
			std::cout << "신성모독이다!!" << std::endl;
		}
		else if (choiceChr == 2)
		{
			std::cout << "수학하는 놈들! 저리 꺼져라! 꺼져!" << std::endl;
		}
		else if (choiceChr == 3)
		{
			std::cout << "인간이...되기로 하셨군요" << std::endl;
		}
		else
		{
			std::cout << "없는 진영입니다.";
		}
	}

	else if (choiceGame == 3) //원신
	{
		std::cout << "당신은 원신을 선택하셨군요" << std::endl;
		std::cout << "====지역을 선택해주세요====" << std::endl;
		std::cout << "1. 자유의 몬드" << std::endl;
		std::cout << "2. 계약의 리월" << std::endl;
		std::cout << "3. 영원의 이나즈마" << std::endl;
		std::cout << "4. 지혜의 수메르" << std::endl;
		std::cout << "5. 정의의 폰타인" << std::endl;

		std::cin >> choiceChr;

		if (choiceChr == 1)
		{
			std::cout << "바르바토스의 자유를!" << std::endl;
		}
		else if (choiceChr == 2)
		{
			std::cout << "모락스와 계약을!" << std::endl;
		}
		else if (choiceChr == 3)
		{
			std::cout << "바알과 영원을!" << std::endl;
		}
		else if (choiceChr == 4)
		{
			std::cout << "부에르의 지혜를!" << std::endl;
		}
		else if (choiceChr == 5)
		{
			std::cout << "포칼로스의 정의를!" << std::endl;
		}
		else
		{
			std::cout << "없는 지역입니다.";
		}
	}

	else if (choiceGame == 4) //리그 오브 레전드
	{
		std::cout << "당신은 리그 오브 레전드를 선택하셨군요" << std::endl;
		std::cout << "====라인을 선택해주세요====" << std::endl;
		std::cout << "1. 그 라인" << std::endl;
		std::cout << "2. 백정" << std::endl;
		std::cout << "3. 황족" << std::endl;
		std::cout << "4. AD CARRY" << std::endl;
		std::cout << "5. 도구" << std::endl;

		std::cin >> choiceChr;

		if (choiceChr == 1)
		{
			std::cout << "그거 먹고 탑으로 와" << std::endl;
		}
		else if (choiceChr == 2)
		{
			std::cout << "강한 미드가 강한 정글을 만든다" << std::endl;
		}
		else if (choiceChr == 3)
		{
			std::cout << "그래도 미드는 진다" << std::endl;
		}
		else if (choiceChr == 4)
		{
			std::cout << "중요한 것은 꺾이지 않는 마음" << std::endl;
		}
		else if (choiceChr == 5)
		{
			std::cout << "괜찮아 서포터니까" << std::endl;
		}
		else
		{
			std::cout << "없는 라인입니다.";
		}
	}


	else
	{
		std::cout << "없는 게임입니다." << std::endl;
	}


}