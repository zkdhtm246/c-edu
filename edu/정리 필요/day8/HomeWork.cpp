
#include<iostream>

using namespace std;


class charactor
{
public:
	charactor(int cord, const string& name, int health, int atk)
		:cCord(cord), cName(name), cHealth(health), cAtk(atk)
	{
	}

	void charInfo()
	{
		cout << "�̸�   : " << cName << "\nü��   : " << cHealth << "\n���ݷ� : " << cAtk << endl;
	}

	void attack(charactor* attacker, charactor* target);

private:
			
	int cCord;
	string cName;
	int cHealth;
	int cAtk;
	
};

void charactor::attack(charactor* attacker, charactor* target)
{
	target->cHealth -= attacker->cAtk;
	
	cout << attacker->cName << " ��(��) " << target->cName << " ��(��) �����ߴ�." << endl << endl;
	cout << target->cName << " ��(��) ü���� " << target->cHealth << " ���Ҵ�." << endl;

};

int main()
{

	charactor* player = new charactor(1, "���", 10, 5);
	charactor* monster = new charactor(2, "����", 20, 2);
	
	player->charInfo();
	cout << endl;
	monster->charInfo();
	cout << endl;

	int attack;
	while (1)
	{
		cout << "1. ����� ����\n2. ������ ����" << endl;
		cin >> attack;
		cout << endl;

		if (attack == 1)
		{
			player->attack(player, monster);
			cout << endl << endl;
		}
		else if (attack == 2)
		{
			monster->attack(monster, player);
			cout << endl << endl;
		}
		else
		{
			cout << "�ٽ� �Է��ϼ���";
			cout << endl << endl;
		}

	}
	


	delete player;
	delete monster;
	player = nullptr;
	monster = nullptr;


}