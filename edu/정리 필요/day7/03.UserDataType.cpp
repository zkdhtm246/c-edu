/*******************************************************************
 @@@@@@@@@@@@@����@@@@@@@@@@@@@@
�Ʒ��� ���� ���ð� ���� ��

1. ������ ����� �����ض�(�Լ�)
 - �÷��̾ ����ġ�� �װ� Ư�� ����ġ �̻��̸� ������!
 
2. �ſ� ������ ���� �����(�Լ�)

*******************************************************************/





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

}
void Attack(Character& c1, Character& c2)
{

}

int main()
{
	Character p1 = { "ȫ�浿",1,Job::Warrior };
	Character p2 = { "ȫ�浿",2,Job::Mage };

	cout << "�÷��̾� 1 : " << p1.name << "���� : " << p1.level << "���� : " << GetName(p1.job) << endl;
	cout << "�÷��̾� 2 : " << p2.name << "���� : " << p2.level << "���� : " << GetName(p2.job) << endl;


}