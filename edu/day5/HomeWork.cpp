//https://docs.google.com/presentation/d/1kUBMPZ-d4xw13EEUnhMhE_Jqx2oLREmqHIULIzYxbzo/edit?usp=sharing
//�޸𸮿��� ���������̼�

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
		cout << "���ڰ� �߸��Ǿ����ϴ�.\n�ٽ� �Է����ּ���!" << endl;
		cin >> a;
	}
	return a;
}
int numbersTrue(int a, int b)
{
	while (a >= 10)
	{
		cout << "���ڰ� �߸��Ǿ����ϴ�.\n�ٽ� �Է����ּ���!" << endl;
		cin >> a;
	}
	while (a == b)
	{
		cout << "���ڰ� �ߺ� �Ǿ����ϴ�.\n�ٽ� �Է����ּ���!" << endl;
		cin >> a;
	}
	return a;
}
int numbersTrue(int a, int b, int c)
{
	while (a >= 10)
	{
		cout << "���ڰ� �߸��Ǿ����ϴ�.\n�ٽ� �Է����ּ���!" << endl;
		cin >> a;
	}
	while (a == b)
	{
		cout << "���ڰ� �ߺ� �Ǿ����ϴ�.\n�ٽ� �Է����ּ���!" << endl;
		cin >> a;

		while (a == c)
		{
			cout << "���ڰ� �ߺ� �Ǿ����ϴ�.\n�ٽ� �Է����ּ���!" << endl;
			cin >> a;
		}
	}
	while (a == c)
	{
		cout << "���ڰ� �ߺ� �Ǿ����ϴ�.\n�ٽ� �Է����ּ���!" << endl;
		cin >> a;

		while (a == b)
		{
			cout << "���ڰ� �ߺ� �Ǿ����ϴ�.\n�ٽ� �Է����ּ���!" << endl;
			cin >> a;
		}
	}
	
	return a;
}

int fightMoneyTrue(int a)
{
	while (a % 100 != 0 || a < 100)
	{
		cout << "���þ��� �߸� �Ǿ����ϴ�. �ٽ� �������ּ���!" << endl;
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

	cout << "���� �߱� �� �� �Ͻðڽ��ϴ�?" << endl;
	cout << "1. ��\n2. �ƴϿ� : ";
	cin >> gameStart;

	while (gameStart != 1 && gameStart != 2)
	{
		cout << endl;
		cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��Ͻʽÿ�" << endl;
		cout << "1. ��\n2. �ƴϿ� : ";
		cin >> gameStart;
	}

	if (gameStart == 1)
	{
		int firstNum, secondNum, thirdNum;
		int ball, strike;
		int fightMoney;
		int resultCheck, result;
				
		cout << endl;
		cout << "10000���� �帮�ڽ��ϴ�" << endl;
		int money = 10000;
		cout << "                              ������ : " << money << endl;

		cout << endl;
		cout << "���� 0 ~ 9 ���̿��� ���� �ٸ� 3���� ���ڸ� ���߽��ϴ�." << endl;
		srand(time(0));
		while (gameStart == 1 && round < 11)
		{
			
			cout << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
			cout << round << "����" << endl;
			cout << endl;
			cout << "���ڸ� ������� ���纸����" << endl;
			cout << "ù��° ���� : ";
			cin >> firstNum;
			firstNum = numbersTrue(firstNum);
			cout << "�ι�° ���� : ";
			cin >> secondNum;
			secondNum = numbersTrue(secondNum, firstNum);
			cout << "����° ���� : ";
			cin >> thirdNum;
			thirdNum = numbersTrue(thirdNum, secondNum, firstNum);

			cout << endl;
			cout << "����� ���� ���ڴ�" << endl;
			cout << firstNum << ", " << secondNum << ", " << thirdNum << "�Դϴ�." << endl;

			cout << endl;
			cout << "������ ���ּ���.\n�ּ� ���þ��� 100�� �Դϴ�." << endl;
			cin >> fightMoney;
			while (fightMoney > money)
			{
				cout << "���þ��� �����ݺ��� �����ϴ�. �ٽ� �������ּ���!" << endl;
				cin >> fightMoney;
			}
			fightMoney = fightMoneyTrue(fightMoney);

			cout << endl;
			cout << "���õǾ����ϴ�." << endl;
			money -= fightMoney;
			cout << "���� �������� " << money << " �� �Դϴ�" << endl;

			cout << endl;
			cout << "'x'�� ���� ����� Ȯ���ϼ���!";
			cin >> resultCheck;

			result = Check(firstNum, secondNum, thirdNum);
			ball = result % 10;
			strike = result / 10;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
			cout << strike << " ��Ʈ����ũ " << ball << " �� " << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

			int totalResult = ball + strike;

			if (totalResult < 1)
			{
				cout << "���� �����ƿ��Դϴ�. ���þ׸�ŭ �߰��� ���� �Ҿ����ϴ�." << endl;
				money -= fightMoney;
				cout << endl;
			}
			else
			{
				cout << "�����մϴ�! ���þ��� �ι踦 �帮�ڽ��ϴ�." << endl;
				money += fightMoney * 2;
				cout << endl;
			}

			cout << "                              ������ : " << money << endl;

			cout << endl;
			cout << "���� ���带 �����Ͻðڽ��ϱ� ? " << endl;
			cout << "1. ��\n2. �ƴϿ� : ";
			cin >> gameStart;

			while (gameStart != 1 && gameStart != 2)
			{
				cout << endl;
				cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��Ͻʽÿ�" << endl;
				cout << "1. ��\n2. �ƴϿ� : ";
				cin >> gameStart;
			}

			if (money < 100)
			{
				cout << endl;
				cout << "������! ���� �����ñ���. ������ ���ư�����!" << endl;
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
		cout << "�ƽ��׿�Ф� ������ �˰ڽ��ϴ�^^" << endl;
	}
	

}