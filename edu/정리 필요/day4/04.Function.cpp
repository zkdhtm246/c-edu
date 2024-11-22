#include<iostream>

//매크로 함수?
//함수가 아님. 컴파일이 미리 대체시킴
//디버깅이 어려움
//지양하자
#define SQUARE(x) (x*x)
//#define NUM 5

const int NUM = 5;

//inline 함수란?
//함수 호출 규약?
inline int Sum(int a, int b)
{
	return a + b;
}


int main()
{
	//int a = Sum(1, 2);
	//int a = 1 + 2;

	//std::cout << SQUARE(5) << std::endl;		//SQUARE(5) -> ((5)*(5))
	//std::cout << SQUARE(5 + 1) << std::endl;

	//int a = 5;
	int res = SQUARE(5 + 1);
	std::cout << res << std::endl;

	std::cout << NUM << std::endl;


	/*
	오늘의 과제
	1. 플레이어가 있다.	1
	2. 고블린이 있다.		2
	
	3. Attack이라는 함수를 만들고(매개변수는 2개)
		ㄴ첫번째 매개변수는 플레이어를 나타내는 정수타입이고,
		ㄴ두번째 매개변수는 타겟이 되는 HP
			ex) int playerHP = 100;
				int monsterHP = 100;

				Attack(1, monsterHP);
		ㄴ리턴타입은 int형 -> 타겟이 되는 HP
	*/
	

}

int Attack(int n, int target)
{

}

int FindMaxNumber(int a, int b)
{
	//입력받은 두 숫자 중 큰 숫자를 리턴하는 함수를 만들어라.
}