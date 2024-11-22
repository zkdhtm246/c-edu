//https://docs.google.com/presentation/d/1kUBMPZ-d4xw13EEUnhMhE_Jqx2oLREmqHIULIzYxbzo/edit?usp=sharing
//메모리영역 프레젠테이션

#include<iostream>
using namespace std;

int computerCheck(int a, int b)
{
	while (a == b)
	{
		a = rand() % 10;
	}
	return a;
}
int computerCheck(int a, int b, int c)
{
	while (a == b)
	{
		a = rand() % 10;

		while (a == c)
		{
			a = rand() % 10;
		}
	}
	while (a == c)
	{
		a = rand() % 10;

		while (a == b)
		{
			a = rand() % 10;
		}
	}

	return a;
}

int numbersTrue(int a)
{
	while (a >= 10)
	{
		cout << "숫자가 잘못되었습니다.\n다시 입력해주세요!" << endl;
		cin >> a;
	}
	return a;
}
int numbersTrue(int a, int b)
{
	while (a >= 10)
	{
		cout << "숫자가 잘못되었습니다.\n다시 입력해주세요!" << endl;
		cin >> a;
	}
	while (a == b)
	{
		cout << "숫자가 중복 되었습니다.\n다시 입력해주세요!" << endl;
		cin >> a;
	}
	return a;
}
int numbersTrue(int a, int b, int c)
{
	while (a >= 10)
	{
		cout << "숫자가 잘못되었습니다.\n다시 입력해주세요!" << endl;
		cin >> a;
	}
	while (a == b)
	{
		cout << "숫자가 중복 되었습니다.\n다시 입력해주세요!" << endl;
		cin >> a;

		while (a == c)
		{
			cout << "숫자가 중복 되었습니다.\n다시 입력해주세요!" << endl;
			cin >> a;
		}
	}
	while (a == c)
	{
		cout << "숫자가 중복 되었습니다.\n다시 입력해주세요!" << endl;
		cin >> a;

		while (a == b)
		{
			cout << "숫자가 중복 되었습니다.\n다시 입력해주세요!" << endl;
			cin >> a;
		}
	}
	
	return a;
}

int fightMoneyTrue(int a)
{
	while (a % 100 != 0 || a < 100)
	{
		cout << "배팅액이 잘못 되었습니다. 다시 배팅해주세요!" << endl;
		cin >> a;
	}
	return a;
}

int Check(int a, int b, int c)
{
	int first, second, third;

	first = rand() % 10;
	second = rand() % 10;
	second = computerCheck(second, first);
	third = rand() % 10;
	third = computerCheck(third, second, first);


	int computer[3] = { first, second, third };
	int player[3] = { a,b,c };

	int strike = 0;
	int ball = 0;
	int total = 0;

	for (int i = 0; i < 3; i++)
	{
		if (computer[i] == player[i])
		{
			strike += 1;
		}
	}
	

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			if (computer[i] == player[k])
			{
				ball += 1;
			}
		}
	}
	ball = ball - strike;
	strike = strike * 10;

	total = strike + ball;
	return total;
}


int main()
{
		
	int gameStart;
	int round = 1;

	cout << "숫자 야구 한 판 하시겠습니다?" << endl;
	cout << "1. 예\n2. 아니오 : ";
	cin >> gameStart;

	while (gameStart != 1 && gameStart != 2)
	{
		cout << endl;
		cout << "잘못된 입력입니다. 다시 입력하십시오" << endl;
		cout << "1. 예\n2. 아니오 : ";
		cin >> gameStart;
	}

	if (gameStart == 1)
	{
		int firstNum, secondNum, thirdNum;
		int ball, strike;
		int fightMoney;
		int resultCheck, result;
				
		cout << endl;
		cout << "10000원을 드리겠습니다" << endl;
		int money = 10000;
		cout << "                              소지금 : " << money << endl;

		cout << endl;
		cout << "저는 0 ~ 9 사이에서 서로 다른 3가지 숫자를 정했습니다." << endl;
		srand(time(0));
		while (gameStart == 1 && round < 11)
		{
			
			cout << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
			cout << round << "라운드" << endl;
			cout << endl;
			cout << "숫자를 순서대로 맞춰보세요" << endl;
			cout << "첫번째 숫자 : ";
			cin >> firstNum;
			firstNum = numbersTrue(firstNum);
			cout << "두번째 숫자 : ";
			cin >> secondNum;
			secondNum = numbersTrue(secondNum, firstNum);
			cout << "세번째 숫자 : ";
			cin >> thirdNum;
			thirdNum = numbersTrue(thirdNum, secondNum, firstNum);

			cout << endl;
			cout << "당신이 정한 숫자는" << endl;
			cout << firstNum << ", " << secondNum << ", " << thirdNum << "입니다." << endl;

			cout << endl;
			cout << "배팅을 해주세요.\n최소 배팅액은 100원 입니다." << endl;
			cin >> fightMoney;
			while (fightMoney > money)
			{
				cout << "배팅액이 소지금보다 많습니다. 다시 배팅해주세요!" << endl;
				cin >> fightMoney;
			}
			fightMoney = fightMoneyTrue(fightMoney);

			cout << endl;
			cout << "배팅되었습니다." << endl;
			money -= fightMoney;
			cout << "현재 소지금은 " << money << " 원 입니다" << endl;

			cout << endl;
			cout << "'x'를 눌러 결과를 확인하세요!";
			cin >> resultCheck;

			result = Check(firstNum, secondNum, thirdNum);
			ball = result % 10;
			strike = result / 10;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
			cout << strike << " 스트라이크 " << ball << " 볼 " << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

			int totalResult = ball + strike;

			if (totalResult < 1)
			{
				cout << "저런 삼진아웃입니다. 배팅액만큼 추가로 돈을 잃었습니다." << endl;
				money -= fightMoney;
				cout << endl;
			}
			else
			{
				cout << "축하합니다! 배팅액의 두배를 드리겠습니다." << endl;
				money += fightMoney * 2;
				cout << endl;
			}

			cout << "                              소지금 : " << money << endl;

			cout << endl;
			cout << "다음 라운드를 진행하시겠습니까 ? " << endl;
			cout << "1. 예\n2. 아니오 : ";
			cin >> gameStart;

			while (gameStart != 1 && gameStart != 2)
			{
				cout << endl;
				cout << "잘못된 입력입니다. 다시 입력하십시오" << endl;
				cout << "1. 예\n2. 아니오 : ";
				cin >> gameStart;
			}

			if (money < 100)
			{
				cout << endl;
				cout << "아이코! 돈이 없으시군요. 집으로 돌아가세요!" << endl;
				round += 10;
			}

			round++;
							
			
		}
		cout << endl;
		cout << "***********************************************" << endl;
		cout << "GAME OVER" << endl;
		cout << "***********************************************" << endl;
		

	}
	else
	{
		cout << endl;
		cout << "아쉽네요ㅠㅠ 다음에 뵙겠습니다^^" << endl;
	}
	

}