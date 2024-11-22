
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
		cout << "�̸�   : " << name << "\nü��   : " << health << "\n���ŷ� : " << mana << "\n���ݷ� : " << atk << endl;
	}
	
	virtual void skillUse(int choice, unit* target) = 0;

	void damage(int damage)
	{
		health -= damage;
		cout << name << " ��(��) " << damage << " �� ���ظ� �Ծ���! " << name << " ü�� : " << health << endl;
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
				cout << name << " �� ���ŷ��� �����մϴ�!" << endl;
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
				cout << name << " �� ü���� �����մϴ�!" << endl;
				return;
			}
			health -= cost;

		}

		int damage = atk * (choice == 1 ? 1 : 1);
		cout << name << " ��(��) " << target->GetName() << " ���� " << choiceSkill << " ��(��) ����ߴ�! (" << (choice == 1 ? "���ŷ�" : "ü��") << " �Ҹ� : " << cost << ")" << endl;
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
				cout << name << " �� ���ŷ��� �����մϴ�!" << endl;
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
				cout << name << " �� ü���� �����մϴ�!" << endl;
				return;
			}
			health -= cost;

		}

		int damage = atk * (choice == 1 ? 2 : 5);
		cout << name << " ��(��) " << target->GetName() << " ���� " << choiceSkill << " ��(��) ����ߴ�! (" << (choice == 1 ? "���ŷ�" : "ü��") << " �Ҹ� : " << cost << ")" << endl;
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

	unit* e = new monster("����", 250, 500, 20, "����������", 20, "����", 200);
	player* p = new player("���", 100, 1000, 20, "���� ��� �������", 10, "��ũ�����̽�", 10);

	
	e->printInfo();
	cout << endl;
	p->printInfo();
	cout << endl;

	cout << "=========================================================" << endl;
	cout << "�߻��� " << e->GetName() << "��(��) ��Ÿ����" << endl << endl;

	cout << "1. �ο��\n2. �¼� �ο��\n3. ����ġ�� �ʰ� ���� �ο��" << endl;
	cin >> result;
				
	if (result < 4)
	{
		while (e->Gethealth() > 0 && p->Gethealth() > 0)
		{
			cout << "==========================" << endl;
			cout << "� ��ų�� ����Ͻðڽ��ϱ�" << endl;
			cout << "1. ���� ��� ������� (���ŷ�: 10)"
				<< "\n2. ��ũ�����̽� (ü��: 10)" << endl;
			cin >> choice;
			cout << "==========================" << endl;
				
			if (choice == 1 || choice == 2)
			{
				p->skillUse(choice, e);
			}
			else
			{
				cout << "�׷� ��ų�� �����ϴ�! ���ʸ� �ѱ�ϴ�!" << endl;
			}
			if (e->Gethealth() <= 0)
			{
				cout << "����� �¸�!" << endl;
				break;
			}

			cout << "==========================" << endl;
			cout << e->GetName() << " �� ����!" << endl;
			int mChoice = rand() % 2 + 1;
			e->skillUse(mChoice, p);

			if (p->Gethealth() <= 0)
			{
				cout << "������ �¸�!" << endl;
				break;
			}

		}
			

	}
	else
	{
		cout << endl;
		cout << "�������� �ʴ� ���輱�Դϴ�." << endl << endl;
	}
	


}