/******************************************************************

switch
- 여러조건을 처리해야할 때, 사용하는 조건문 중 하나.
- 주로 상수값을 기준으로 분기할 때 사용되며, 가독성이 좋음.

[switch의 구조]
- 하나의 변수를 검사하고 그 변수의 값에 따라 여러 case 블록 중 하나를 실행
- break 키워드를 통해 각 case의 실행을 종료.
- break가 없으면 다음 case 블록이 연속해서 실행된다.
- 표현식에는 문자, 정수, 열거타입 등이 들어온다.

[요약]
- 상수값을 기준으로 여러 선택지 중 하나를 선택하는 상황에서 사용하기 좋다.
- 코드의 가독성을 높이고 효율성을 개선할 수는 있지만 표현식의 제한이 있다.
- 범위기반 비교는 불가(10<x<20 등)
- if문은 범용적으로 다양한 조건을 다루기에 유용. 논리연산자를 사용하여 복잡한 조건을 만들 수 있음.


	switch (표현식)
	{
	case 값1 :
		//값1에 해당되는 코드..
		break;
	case 값2 :
		//값2에 해당되는 코드..
		break;
	default:
		//어떤 case에도 해당하지 않을 때 실행되는 코드(생략가능)
		break;
	}

[break란?]
- 반복문이나 switch문을 제어할 대 사용함.
- break가 실행되면 해당 루프나 switch문을 종료하고 break 다음으로 이동하여 실행된다.
- 다중 switch나 중첩반복문에서는 break가 있는 해당 스코프만!!!빠져나간다.

******************************************************************/


#include<iostream>

int main()
{
	int choice;

	std::cout << "게임을 선택하세요! " << std::endl;
	std::cout << "1. 롤" << std::endl;
	std::cout << "2. 발로란트" << std::endl;
	std::cout << "3. 오버워치" << std::endl;
	std::cout << "4. 스타크래프트" << std::endl;
	std::cout << "5. 디아블로2" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1: //if(choice==1)
		std::cout << "롤 선택" << std::endl;
	break;
	case 2:
		std::cout << "발로란트 선택" << std::endl;
		break;
	case 3:
		std::cout << "오버워치 선택" << std::endl;
		break;
	case 4:
		std::cout << "스타크래프트 선택" << std::endl;
		break;
	case 5:
		std::cout << "디아블로2" << std::endl;
		break;
	default: //else
		std::cout << "값이 잘못됐습니다." << std::endl;
		break;
	} //break를 만나면 여기를 빠져나온다.(switch문을 빠져나오게 된다.)



	int jobChoice;
	int skillChoice;

	std::cout << "직업을 선택해라!(1: 전사, 2: 마법사, 3: 도적) : ";
	std::cin >> jobChoice;
	switch (jobChoice)
	{
	case 1:
		std::cout << "전사를 선택했다. 어떤 스킬을 사용할꺼냐?(1: 대쉬공격, 2. 방패공격) : ";
		std::cin >> skillChoice;
			
		switch (skillChoice)
		{
			case 1:
				std::cout << "대쉬공격!!!" << std::endl;
				break;
			case 2:
				std::cout << "방패공격!!!" << std::endl;
				break;

		}
	break;

	case 2:
		std::cout << "히히힣";
		break;
	default:
		break;

	}



}
