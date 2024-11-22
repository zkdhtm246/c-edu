
#include<iostream>
using namespace std;

enum class Job
{
	Warrior, Mage, Archer
};
struct Character
{
	std::string name;
	int level;
	Job job;
	int exp;
};
string GetName(Job j)
{
	switch (j)
	{
	case Job::Warrior:return"������� �� ����";
	case Job::Mage:return"������ ������";
	case Job::Archer:return"�ݸ޴� ����Ʈ �ü�";
	default: return"�ƹ��͵� �������� ����";
	}
}

void LevelUp(Character& c)
{
	if (c.level != c.exp / 10 + 1)
	{
		c.level = c.exp / 10 + 1;
		cout << endl;
		cout << "����!!" << c.name << " ��(��) " << "������ " << c.level << " ��(��) �Ǿ���." << endl << endl;
	}
	
}

void Attack(Character& c1, Character& c2)
{
	cout << c1.name << " ��(��) " << c2.name << " ��(��) �����ߴ�." << endl;
	cout << c1.name << " ��(��) " << "����ġ 10 ��(��) ȹ���ߴ�." << endl;
	c1.exp += 10;
	LevelUp(c1);
}

int main()
{
	int choice;
	int result;
	
	Character p1 = { "���",1,Job::Warrior,0 };
	Character p2 = { "����",1,Job::Mage,0 };

	while (1)
	{
		cout << "�߻��� "<<p2.name<<" ��(��) ������!" << endl;
		cout << "1. ����\n2. ����" << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << endl;
			Attack(p1, p2);
		}
		else if (choice == 2)
		{
			cout << "����� ������ �����ƴ�." << endl;
			cout << "('x'�� ���� ������ �����Ͻÿ�.)" << endl;
			cin >> result;
		}
		else
		{
			cout << "�ùٸ� ������ �ƴմϴ�.\n�ٽ� �����մϴ�." << endl;
		}
	}
	
	


}