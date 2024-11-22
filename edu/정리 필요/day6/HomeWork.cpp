#include<iostream>
#include<string>

using namespace std;


void cardSearch(int* cards, int a);
void cardShape(int a);
void cardName(int a);
int result(int* cards, int a);

int main()
{
	srand(time(0));

	int start;
	int rounds;
	int haveCard;
	int money;
	int cardNum;
	int bet;
	int yes;

	int cards[52];

	cout << "환영하네" << endl << endl;
	cout << "트럼프 52장 중 3장을 고르고, 그 중 2장만 보여주지" << endl << endl;
	cout << "나머지 1장의 크기가 보여진 2장의 크기에 사이에 들어가는지 맞추면 되는거야" << endl << endl;
	cout << "사용된 카드는 다시 사용되지 않고, 모든 카드를 소모하면 게임은 끝난다" << endl << endl;
	cout << "물론 그 전에 너의 돈을 모두 잃어도 끝나는거지" << endl << endl;
	cout << "준비는 되었나?\n1. 예\n2. 아니오" << endl;
	cin >> start;

	while (start != 1 && start != 2)
	{
		cout << endl;
		cout << "뭐 하는 건가? 제대로 대답하게" << endl << endl;
		cout << "1. 예\n2. 아니오" << endl;
		cin >> start;
	}

	if (start == 1)
	{
		money = 10000;
		rounds = 0;
		haveCard = 52;
		cardNum = 0;
		yes = 0;
		


		cout << endl;
		cout << "좋아! 그럼 게임을 시작하지" << endl << endl;
		cout << "남은 카드 : " << haveCard << endl;
		cout << "소지금    : " << money << endl;
		cout << endl;
				
		for (int i = 0; i < 52; i++)
		{
			cards[i] = rand() % 52 + 1;

			for (int k = 0; k < i; k++)
			{				
				if (cards[i] == cards[k])
				{
					i--;
					break;
				}
			}
		}

		haveCard -= 3;
		while (haveCard > 1 && money >= 1000)
		{
		cout << "3장을 꺼냈는데 2장은 이거라네" << endl << endl;
		
		cout << "**************************" << endl;
		cardSearch(cards, rounds);
		cout << "**************************" << endl;

		cout << endl;
		cout << "남은 카드 : " << haveCard << endl;
		cout << "어떤가? 배팅을 해보겠는가?\n1. 예\n2. 아니오" << endl << endl;
		cin >> yes;

			if (yes == 1)
			{
				cout << "좋네! 그럼 배팅은 얼마나 하겠는가?" << endl << endl;
				cout << "참고로 배팅은 최소한 1000원 이상이라네" << endl << endl;
				cout << "배팅 : ";
				cin >> bet;

				while (bet < 1000 || bet % 1000 != 0 || money < bet)
				{
					if (bet % 1000 != 0)
					{
						cout << "배팅은 1000원 단위로 해야하네" << endl << endl;
						cout << "배팅 : ";
						cin >> bet;
					}
					else if (money < bet)
					{
						cout << "소지금이 부족하지 않은가. 다시하게" << endl << endl;
						cout << "배팅 : ";
						cin >> bet;
					}
					else
					{
						cout << "금액이 너무 적군. 좀 더 적어보게" << endl << endl;
						cout << "배팅 : ";
						cin >> bet;
					}
				}

				money -= bet;
				cout << endl;
				cout << "소지금    : " << money << endl;
				cout << "배팅이 끝났군! 이제 결과를 확인해보겠나?" << endl << endl;
				cout << "(결과를 확인하려면 'x'를 입력하세요)";
				cin >> yes;
				cout << endl;

				if (result(cards, rounds) == 1)
				{
					cout << "축하하네! 당신이 이겼구만!" << endl << endl;
					cout << "여기 상금이네!" << endl << endl;
					cout << "소지금    : " << money << endl;
					cout << "이어서 해보겠네" << endl << endl;
					money += bet * 2;
					cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
				}
				else
				{
					cout << "저런..안타깝게도 졌군" << endl << endl;
					cout << "이건 내가 챙기도록 하지" << endl << endl;
					cout << "소지금    : " << money << endl;
					cout << "이어서 해보겠네" << endl << endl;
					cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
				}
								
				rounds += 3;
				haveCard -= 3;
			}
			else if (yes != 1 && yes != 2)
			{
				cout << endl;
				cout << "그건 제대로 된 대답이 아니라네" << endl << endl;
				cout << "1. 예\n2. 아니오" << endl;
				cin >> yes;
			}
			else
			{
				cout << endl;
				cout << "그럼 다시 섞어보도록 하지" << endl << endl;
				rounds += 3;
				haveCard -= 3;
			}
		}

		if (haveCard <= 1)
		{
			cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
			cout << "이런 카드가 다 떨어졌군" << endl << endl;
			cout << "아쉽지만. 게임은 끝이네" << endl << endl;
		}
		else
		{
			cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
			cout << "소지금이 부족하구만" << endl << endl;
			cout << "아쉽지만. 게임은 끝이네" << endl << endl;
		}
		

	}
	else
	{
		cout << endl;
		cout << "아쉽군. 다음에 보겠네" << endl << endl;
	}
	

	

	
	

}

void cardSearch(int* cards, int a)
{
	cout << "첫번째 카드 : ";
	cardShape(cards[a]);
	cout << " ";
	cardName(cards[a]);
	cout << endl;

	cout << "두번째 카드 : ";
	cardShape(cards[a + 1]);
	cout << " ";
	cardName(cards[a + 1]);
	cout << endl;

	cout << "세번째 카드 : ";
	cardShape(cards[a + 2]);
	cout << " ";
	cardName(cards[a + 2]);
	cout << " (현재 치트 모드입니다.)" << endl;
		
}

void cardShape(int a)
{
	if (a % 4 == 0)
	{
		cout << "스페이드";
	}
	else if (a % 4 == 1)
	{
		cout << "클로버";
	}
	else if (a % 4 == 2)
	{
		cout << "하트";
	}
	else
	{
		cout << "다이아";
	}
}

void cardName(int a)
{
	if (a % 13 == 0)
	{
		cout << "A";
	}
	else if (a % 13 == 12)
	{
		cout << "K";
	}
	else if (a % 13 == 11)
	{
		cout << "Q";
	}
	else if (a % 13 == 10)
	{
		cout << "J";
	}
	else
	{
		cout << a % 13 + 1;
	}
}

int result(int* cards, int a)
{
	
	
	if (cards[a] % 13 + 1 > cards[a + 1] % 13 + 1)
	{
		if (cards[a + 2] < cards[a] && cards[a + 2] > cards[a + 1])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if(cards[a] % 13 + 1 < cards[a + 1] % 13 + 1)
	{
		if (cards[a + 2] > cards[a] && cards[a + 2] < cards[a + 1])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}
