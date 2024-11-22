
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
	case Job::Warrior:return"집행검을 든 전사";
	case Job::Mage:return"암흑의 마법사";
	case Job::Archer:return"금메달 리스트 궁수";
	default: return"아무것도 선택하지 않음";
	}
}

void LevelUp(Character& c)
{
	if (c.level != c.exp / 10 + 1)
	{
		c.level = c.exp / 10 + 1;
		cout << endl;
		cout << "빠밤!!" << c.name << " 은(는) " << "레벨이 " << c.level << " 가(이) 되었다." << endl << endl;
	}
	
}

void Attack(Character& c1, Character& c2)
{
	cout << c1.name << " 이(가) " << c2.name << " 을(를) 공격했다." << endl;
	cout << c1.name << " 은(는) " << "경험치 10 을(를) 획득했다." << endl;
	c1.exp += 10;
	LevelUp(c1);
}

int main()
{
	int choice;
	int result;
	
	Character p1 = { "용사",1,Job::Warrior,0 };
	Character p2 = { "마왕",1,Job::Mage,0 };

	while (1)
	{
		cout << "야생의 "<<p2.name<<" 을(를) 만났다!" << endl;
		cout << "1. 공격\n2. 도망" << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << endl;
			Attack(p1, p2);
		}
		else if (choice == 2)
		{
			cout << "당신은 무사히 도망쳤다." << endl;
			cout << "('x'를 눌러 다음을 진행하시오.)" << endl;
			cin >> result;
		}
		else
		{
			cout << "올바른 선택이 아닙니다.\n다시 시작합니다." << endl;
		}
	}
	
	


}