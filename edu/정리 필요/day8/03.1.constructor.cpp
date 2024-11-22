/****************************************************************
������ ����ʱ�ȭ ����Ʈ
- ��������� ������ ������ ����Ǳ����� �ʱ�ȭ
- ������ �Ű����� �ڿ� ���Ե�. �ݷ� : ���� ������ ����, �ʱ�ȭ�� �� ������ ��ǥ�� ������

[Getter, Setter]
- ��������� private���� �����ϰ� �ܺο��� �������� ������ ����
- ��ü�� �����͸� ��ȣ�ϰ� �ܺο��� �������̽��� ����

 1. Getter
  - �б� �������� ��������� ���� ��ȯ
  - const�� �Լ� �ڿ� �ٿ� ��������� ������ ����

 2. Setter
  - ������� ���� ����

****************************************************************/

#include<iostream>


class Exam
{
public:
	const int num;

	int& score;

	/*Exam()
	{
		num = 1;
		score = 2;
	}*/
	Exam(int num,int score):num(num),score(score){}
};


class Monster
{
public:

	std::string mName;
	int mAtk;
	int mHealth;

	Monster(const std::string& monsterName, int monsterAtk, int monsterHealth)
		:mName(monsterName),mAtk(monsterAtk),mHealth(monsterHealth)
	{
		//���⼭ �ʱ�ȭ�� �ʿ䰡 ����
		Init();
	}

	void Init();
};



class Person
{
public:
	std::string GetName()const { return mName; }
	void SetName(const std::string& name)
	{
		mName = name;
	}
	int GetAge()const { return mAge; }
	void SetAge(const int age)
	{
		mAge = age;
	}
private:
	std::string mName;
	int mAge;
};



int main()
{
	//Monster* m = new Monster("���", 10, 20);


	Person p;
	p.SetName("����");
	p.SetAge(10);

	std::cout << "�̸� : " << p.GetName() << std::endl;
	std::cout << "���� : " << p.GetAge() << std::endl;


	//1.����ʱ�ȭ ����Ʈ�� Ȱ���Ͽ� ��ü�ʱ�ȭ�� �ϰ� ����غ���
	//2.Get, Set�� Ȱ���Ͽ� �÷��̾�� ���� �������� �����
	//��ü�°� ���ݷ¸� ����

	//3.OOP�� ���� ��ǥ�ڷ� �����
	//- ������ ����
	//

}