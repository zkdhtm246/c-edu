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

	cout << "ȯ���ϳ�" << endl << endl;
	cout << "Ʈ���� 52�� �� 3���� ����, �� �� 2�常 ��������" << endl << endl;
	cout << "������ 1���� ũ�Ⱑ ������ 2���� ũ�⿡ ���̿� ������ ���߸� �Ǵ°ž�" << endl << endl;
	cout << "���� ī��� �ٽ� ������ �ʰ�, ��� ī�带 �Ҹ��ϸ� ������ ������" << endl << endl;
	cout << "���� �� ���� ���� ���� ��� �Ҿ �����°���" << endl << endl;
	cout << "�غ�� �Ǿ���?\n1. ��\n2. �ƴϿ�" << endl;
	cin >> start;

	while (start != 1 && start != 2)
	{
		cout << endl;
		cout << "�� �ϴ� �ǰ�? ����� ����ϰ�" << endl << endl;
		cout << "1. ��\n2. �ƴϿ�" << endl;
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
		cout << "����! �׷� ������ ��������" << endl << endl;
		cout << "���� ī�� : " << haveCard << endl;
		cout << "������    : " << money << endl;
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
		cout << "3���� ���´µ� 2���� �̰Ŷ��" << endl << endl;
		
		cout << "**************************" << endl;
		cardSearch(cards, rounds);
		cout << "**************************" << endl;

		cout << endl;
		cout << "���� ī�� : " << haveCard << endl;
		cout << "���? ������ �غ��ڴ°�?\n1. ��\n2. �ƴϿ�" << endl << endl;
		cin >> yes;

			if (yes == 1)
			{
				cout << "����! �׷� ������ �󸶳� �ϰڴ°�?" << endl << endl;
				cout << "����� ������ �ּ��� 1000�� �̻��̶��" << endl << endl;
				cout << "���� : ";
				cin >> bet;

				while (bet < 1000 || bet % 1000 != 0 || money < bet)
				{
					if (bet % 1000 != 0)
					{
						cout << "������ 1000�� ������ �ؾ��ϳ�" << endl << endl;
						cout << "���� : ";
						cin >> bet;
					}
					else if (money < bet)
					{
						cout << "�������� �������� ������. �ٽ��ϰ�" << endl << endl;
						cout << "���� : ";
						cin >> bet;
					}
					else
					{
						cout << "�ݾ��� �ʹ� ����. �� �� �����" << endl << endl;
						cout << "���� : ";
						cin >> bet;
					}
				}

				money -= bet;
				cout << endl;
				cout << "������    : " << money << endl;
				cout << "������ ������! ���� ����� Ȯ���غ��ڳ�?" << endl << endl;
				cout << "(����� Ȯ���Ϸ��� 'x'�� �Է��ϼ���)";
				cin >> yes;
				cout << endl;

				if (result(cards, rounds) == 1)
				{
					cout << "�����ϳ�! ����� �̰屸��!" << endl << endl;
					cout << "���� ����̳�!" << endl << endl;
					cout << "������    : " << money << endl;
					cout << "�̾ �غ��ڳ�" << endl << endl;
					money += bet * 2;
					cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
				}
				else
				{
					cout << "����..��Ÿ���Ե� ����" << endl << endl;
					cout << "�̰� ���� ì�⵵�� ����" << endl << endl;
					cout << "������    : " << money << endl;
					cout << "�̾ �غ��ڳ�" << endl << endl;
					cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
				}
								
				rounds += 3;
				haveCard -= 3;
			}
			else if (yes != 1 && yes != 2)
			{
				cout << endl;
				cout << "�װ� ����� �� ����� �ƴ϶��" << endl << endl;
				cout << "1. ��\n2. �ƴϿ�" << endl;
				cin >> yes;
			}
			else
			{
				cout << endl;
				cout << "�׷� �ٽ� ������� ����" << endl << endl;
				rounds += 3;
				haveCard -= 3;
			}
		}

		if (haveCard <= 1)
		{
			cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
			cout << "�̷� ī�尡 �� ��������" << endl << endl;
			cout << "�ƽ�����. ������ ���̳�" << endl << endl;
		}
		else
		{
			cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
			cout << "�������� �����ϱ���" << endl << endl;
			cout << "�ƽ�����. ������ ���̳�" << endl << endl;
		}
		

	}
	else
	{
		cout << endl;
		cout << "�ƽ���. ������ ���ڳ�" << endl << endl;
	}
	

	

	
	

}

void cardSearch(int* cards, int a)
{
	cout << "ù��° ī�� : ";
	cardShape(cards[a]);
	cout << " ";
	cardName(cards[a]);
	cout << endl;

	cout << "�ι�° ī�� : ";
	cardShape(cards[a + 1]);
	cout << " ";
	cardName(cards[a + 1]);
	cout << endl;

	cout << "����° ī�� : ";
	cardShape(cards[a + 2]);
	cout << " ";
	cardName(cards[a + 2]);
	cout << " (���� ġƮ ����Դϴ�.)" << endl;
		
}

void cardShape(int a)
{
	if (a % 4 == 0)
	{
		cout << "�����̵�";
	}
	else if (a % 4 == 1)
	{
		cout << "Ŭ�ι�";
	}
	else if (a % 4 == 2)
	{
		cout << "��Ʈ";
	}
	else
	{
		cout << "���̾�";
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
