/*

*/

#include<iostream>

using namespace std;


#pragma region ����� �ȹ޾�����
//class Warrior
//{
//private:
//	string name;
//	int health;
//
//public:
//	Warrior(const string& n, const int h) :name(n), health(h)
//	{
//
//	}
//
//	void Attack()
//	{
//		cout << "Į ����" << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "��" << damage << "��ŭ �������� �Ծ��� ���� ü��" << health << endl;
//	}
//};
//
//class Mage
//{
//private:
//	string name;
//	int health;
//
//public:
//	Mage(const string& n, const int h) :name(n), health(h)
//	{
//
//	}
//
//	void Skill()
//	{
//		cout << "���̽��� �߻�" << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "��" << damage << "��ŭ �������� �Ծ��� ���� ü��" << health << endl;
//	}
//};
#pragma endregion

class Character
{
public:
	string name;
	int health;

	Character(const string& n, const int h) :name(n), health(h)
	{
		cout << "�θ� Ŭ���� charactor������ ȣ��" << endl;
	}
	void TakeDamage(const int damage)
	{
		cout << name << "��" << damage << "��ŭ �������� �Ծ��� ���� ü��" << health << endl;
	}
protected:

};

//���
class Warrior :public Character
{
public:
	Warrior(const string n, const int h) :Character(n, h) //�θ�Ŭ������ ����������� �ʱ�ȭ�� ����
	{
		cout << "�ڽ� Ŭ���� ������ ������ ȣ��" << endl;
	}
	void Attack()
	{
		cout << "Į�� �ֵθ�" << endl;
	}
};
class Mage :public Character
{
public:
	Mage(const string n, const int h) :Character(n, h) //�θ�Ŭ������ ����������� �ʱ�ȭ�� ����
	{
		cout << "�ڽ� Ŭ���� ���� ������ ȣ��" << endl;
	}
	void Attack()
	{
		cout << "�ذ� ��ȯ" << endl;
	}
};


int main()
{
	//������:�θ�->�ڽ�, �Ҹ���:�ڽ�->�θ�
	Warrior* w = new Warrior("�丣", 100);
	w->Attack();
	w->TakeDamage(10);

	Mage* m = new Mage("������", 100);
	m->Attack();
	m->TakeDamage(20);
}


/*
[����-���]
1. ���� Ŭ����
- ����� �����͸� ����

 a. ���� Ŭ����
  - ��ų 2��
 b. �÷��̾� Ŭ����
  - ��ų 2��
 
 ��� : �⺻���� Status, ������ ����Լ��� Ȱ��

 *����� �ϴµ� �θ� Ŭ������ ������� protected, public, private���� �ϳ��� �����
  ����� �޴� �ڽ� Ŭ������ public, private, protected�� ���� ���������� ������

*/