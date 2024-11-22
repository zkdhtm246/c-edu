/*********************************************************************
[������(constructor)]
- ��ü�� ������ ��, �ڵ����� ȣ��Ǵ� Ư���� ����Լ�
- ��ü�� �ʱ�ȭ�� ���
- Ŭ���� �̸��� ������ �̸��� ������
- ��ȯ���� ����
- �����ε��� �����ϴ�(�������� �����ڸ� ������ �� �ִ�)
- �⺻������, �Ű������� �ִ� ������, ���������

[�⺻������]
- �Ű������� ���� ������. ��������� �������� ������ �����Ϸ��� �ڵ����� ������
*********************************************************************/


#include<iostream>

class CPlayer
{
public:
	std::string mName;
	int mAtk;
	int mDef;
public:
	CPlayer()
	{
		mName = "ȫ�浿";
		mAtk = 10;
		mDef = 200;
	}
	//�Ű������� �ִ� ������
	CPlayer(const std::string& playerName, const int playerAtk, const int playerDef)
	{
		mName = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}

	void PrintInfo()const;
};
void CPlayer::PrintInfo()const
{
	std::cout << "�̸� : " << mName << std::endl;
	std::cout << "���ݷ� : " << mAtk << std::endl;
	std::cout << "���� : " << mDef << std::endl;
}

class Person
{
public:
	void printInfo()const;
	
	Person(const std::string& name, const int age, const int date, const std::string& phone)
	{
		pName = name;
		pAge = age;
		pBdate = date;
		pPnum = phone;
	}
private:
	std::string pName;
	int pAge;
	int pBdate;
	std::string pPnum;
};
void Person::printInfo()const
{
	std::cout << "�̸� : " << pName << std::endl;
	std::cout << "���� : " << pAge << std::endl;
	std::cout << "������� : " << pBdate << std::endl;
	std::cout << "��ȭ��ȣ : " << pPnum << std::endl;
}


int main()
{
	//�⺻������
	CPlayer* player = new CPlayer();
	player->PrintInfo();
	std::cout << std::endl;
	
	//�Ű������� �ִ� ������
	CPlayer* player1 = new CPlayer("ȫ�泲", 10, 20);
	player1->PrintInfo();
	std::cout << std::endl;

	Person* man = new Person("����", 5, 190229, "010-1004-1004");
	man->printInfo();
	

	delete player;
	delete player1;
	player = nullptr;
	player1 = nullptr;
	delete man;
	man = nullptr;
}

/*
�ǽ�
Person�̶�� Ŭ������ ����
1. �Ӽ�
- �̸�, ����, �������, ��ȭ��ȣ

2. ���
- �� ������ ����ϴ� �Լ��� ������

*/