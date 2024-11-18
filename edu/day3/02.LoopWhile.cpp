/******************************************************

[while]
- 조건이 참(true)인 동안 특정코드를 반복실행하기 위한 반복문
- 조건이 거짓이 될 때까지 계속 반복된다.
- 일반적으로 반복횟수가 미리 정해지지 않았거나 특정조건을 만족할 때까지 반복해야되는 경우 사용

--기본구조--
while (true)
{
	//위 조건이 만족하면 해당 코드블록이 실행
	//단, 종료조건이 있어야만 해당 while문이 종료
}



[do-while]
- 조건이 참인지 여부와 관계없이 코드블록을 최소 한 번은 실행해야할 때 사용

--기본구조--
do
{
	//실행할 코드
} while (조건); ---> do블록이 실행된 후에 조건을 평가. 조건이 참이면 코드블록을 다시 실행하고 거짓이면 종료


******************************************************/



#include<iostream>


int main()
{

	
	//int num = 0;

	////1. num이 1씩 증가
	////2. while (num < 10)이 false가 되는 순간 while 종료
	//while (num < 10)
	//{
	//	num++; //num이 1씩 증가
	//	std::cout << num << std::endl;
	//}

	//int sum = 0;
	//int num1 = 0;

	//while (true)
	//{
	//	sum += num1;

	//	if (sum > 5000)
	//	{
	//		break;
	//	}
	//	num1++;
	//}

	////1. while문을 이용한 입력한 숫자만큼 출력
	//std::cout << "숫자를 입력해라 : ";
	//int inputNum;
	//std::cin >> inputNum;

	//int count = 0;
	//while (count < inputNum)
	//{
	//	std::cout << "너가 입력한 숫자만큼 출력이 될꺼야" << std::endl;
	//	count++;
	//}

	////2. 입력을 계속해서 받고(정수), 입력받은 숫자는 누적하여 더한다.
	//// 종료조건 : 0을 입력하면 모든 숫자를 더하고 종료한다.
	//int inputNum1 = 1;
	//int total = 0;

	//while (inputNum1 != 0)
	//{
	//	std::cout << "0보다 큰 숫자를 입력해라 : 종료하려면 0을 누르시오";

	//	std::cin >> inputNum1; //0을 누르기 전까지 무한으로 입력을 받는다.
	//	total += inputNum1; //입력된 숫자를 누적한다.
	//}
	//std::cout << "숫자의 총합은 : " << total << std::endl;



	//int inputNum = 0;
	//int total = 0;

	//do
	//{
	//	std::cout << "0보다 큰 숫자를 입력해라";
	//	std::cin >> inputNum;
	//	total += inputNum;
	//} while (inputNum!=0);



	//int i = 0;

	//std::cout << "while문 시작 : " << std::endl;
	//while (i > 0)
	//{
	//	//조건이 처음부터 false기 때문에 실행되지 않음.
	//	std::cout << "이 메세지는 출력되지 않는다" << std::endl;
	//}
	//std::cout << "do-while문 시작 : " << std::endl;
	//do
	//{
	//	std::cout << "이 메세지는 최소 한 번 출력된다" << std::endl;
	//} while (i > 0);


	srand(time(0));
	int random = rand() % 3 + 1; //1, 2, 3

	std::cout << random << std::endl;



	//2번째 과제
	//가위(1) 바위(2) 보(3) 게임 만들기

	//플레이어 가위바위보는 입력을 받는다.
	//컴퓨터도 가위바위보를 내지만 랜덤하게 낸다.
	
	//플레이어가 가위를 냈을 때
	//컴퓨터는 가위, 바위, 보
	//플레이어가 가위를 냈을 때
	//비교를 해서 비겼다면 비겼다 출력. 이겼으면 이김. 졌으면 졌다.

	//종료조건 10판만 진행하기

}