
#include<iostream>

using namespace std;


class unit
{
public:
	unit(string n, int h, int m, int a)
		:name(n), health(h), mana(m), atk(a)
	{

	}

	void printInfo()
	{
		cout << "이름   : " << name << "\n체력   : " << health << "\n정신력 : " << mana << "\n공격력 : " << atk << endl;
	}
	
	virtual void skillUse(int choice, unit* target) = 0;

	void damage(int damage)
	{
		health -= damage;
		cout << name << " 은(는) " << damage << " 의 피해를 입었다! " << name << " 체력 : " << health << endl;
	}
	
	string GetName()
	{
		return name;
	}
	int Gethealth()
	{
		return health;
	}
	

protected:
	string name;
	int health;
	int mana;
	int atk;
};


class monster :public unit
{
public:
	monster(string n, int h, int m, int a, string s1, int c1, string s2, int c2)
		:unit(n, h, m, a), skill1(s1), cost1(c1), skill2(s2), cost2(c2)
	{

	}
	
	void skillUse(int choice, unit* target) override
	{
		string choiceSkill;
		int cost;

		if (choice == 1)
		{
			choiceSkill = skill1;
			cost = cost1;

			if (mana < cost)
			{
				cout << name << " 의 정신력이 부족합니다!" << endl;
				return;
			}
			mana -= cost;
		}
	
		else
		{
			choiceSkill = skill2;
			cost = cost2;
			if (health < cost)
			{
				cout << name << " 의 체력이 부족합니다!" << endl;
				return;
			}
			health -= cost;

		}

		int damage = atk * (choice == 1 ? 1 : 1);
		cout << name << " 이(가) " << target->GetName() << " 에게 " << choiceSkill << " 을(를) 사용했다! (" << (choice == 1 ? "정신력" : "체력") << " 소모 : " << cost << ")" << endl;
		target->damage(damage);

	}
	
private:
	string skill1;
	string skill2;
	int cost1;
	int cost2;

};

class player :public unit
{
public:
	player(string n, int h, int m, int a, string s1, int c1, string s2, int c2)
		:unit(n, h, m, a), skill1(s1), cost1(c1), skill2(s2), cost2(c2)
	{

	}

	void skillUse(int choice, unit* target) override
	{
		string choiceSkill;
		int cost;

		if (choice == 1)
		{
			choiceSkill = skill1;
			cost = cost1;

			if (mana < cost)
			{
				cout << name << " 의 정신력이 부족합니다!" << endl;
				return;
			}
			mana -= cost;
		}

		else
		{
			choiceSkill = skill2;
			cost = cost2;
			if (health < cost)
			{
				cout << name << " 의 체력이 부족합니다!" << endl;
				return;
			}
			health -= cost;

		}

		int damage = atk * (choice == 1 ? 2 : 5);
		cout << name << " 이(가) " << target->GetName() << " 에게 " << choiceSkill << " 을(를) 사용했다! (" << (choice == 1 ? "정신력" : "체력") << " 소모 : " << cost << ")" << endl;
		target->damage(damage);

	}

private:
	string skill1;
	string skill2;
	int cost1;
	int cost2;

};


int main()
{
	int result;
	int choice;
	srand(time(0));

	unit* e = new monster("마왕", 250, 500, 20, "지옥참마도", 20, "자폭", 200);
	player* p = new player("용사", 100, 1000, 20, "무지 쎄게 내려찍기", 10, "새크리파이스", 10);

	
	e->printInfo();
	cout << endl;
	p->printInfo();
	cout << endl;

	cout << "=========================================================" << endl;
	cout << "야생의 " << e->GetName() << "이(가) 나타났다" << endl << endl;

	cout << "1. 싸운다\n2. 맞서 싸운다\n3. 도망치지 않고 힘껏 싸운다" << endl;
	cin >> result;
				
	if (result < 4)
	{
		while (e->Gethealth() > 0 && p->Gethealth() > 0)
		{
			cout << "==========================" << endl;
			cout << "어떤 스킬을 사용하시겠습니까" << endl;
			cout << "1. 무지 쎄게 내려찍기 (정신력: 10)"
				<< "\n2. 새크리파이스 (체력: 10)" << endl;
			cin >> choice;
			cout << "==========================" << endl;
				
			if (choice == 1 || choice == 2)
			{
				p->skillUse(choice, e);
			}
			else
			{
				cout << "그런 스킬은 없습니다! 차례를 넘깁니다!" << endl;
			}
			if (e->Gethealth() <= 0)
			{
				cout << "용사의 승리!" << endl;
				break;
			}

			cout << "==========================" << endl;
			cout << e->GetName() << " 의 공격!" << endl;
			int mChoice = rand() % 2 + 1;
			e->skillUse(mChoice, p);

			if (p->Gethealth() <= 0)
			{
				cout << "마왕의 승리!" << endl;
				break;
			}

		}
			

	}
	else
	{
		cout << endl;
		cout << "존재하지 않는 세계선입니다." << endl << endl;
	}
	


}