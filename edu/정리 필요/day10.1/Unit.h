//����� ����
#pragma once

////����������
//#ifndef 1
//#endif // !1

#include<iostream>

class Unit
{
protected:
	std::string name;
	int health;
public:
	Unit(const std::string&, const int h);
	virtual~Unit();
public:
	//���������Լ�
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damage) = 0;
};

