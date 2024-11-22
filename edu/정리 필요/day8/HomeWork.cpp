
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
		cout << "이름   : " << cName << "\n체력   : " << cHealth << "\n공격력 : " << cAtk << endl;
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
	
	cout << attacker->cName << " 이(가) " << target->cName << " 을(를) 공격했다." << endl << endl;
	cout << target->cName << " 은(는) 체력이 " << target->cHealth << " 남았다." << endl;

};

int main()
{

	charactor* player = new charactor(1, "용사", 10, 5);
	charactor* monster = new charactor(2, "마왕", 20, 2);
	
	player->charInfo();
	cout << endl;
	monster->charInfo();
	cout << endl;

	int attack;
	while (1)
	{
		cout << "1. 용사의 공격\n2. 마왕의 공격" << endl;
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
			cout << "다시 입력하세요";
			cout << endl << endl;
		}

	}
	


	delete player;
	delete monster;
	player = nullptr;
	monster = nullptr;


}