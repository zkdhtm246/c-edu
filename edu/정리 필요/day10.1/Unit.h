//여기는 선언만
#pragma once

////헤더가드공부
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
	//순수가상함수
	virtual void Attack()const = 0;
	virtual void TakeDamage(int damage) = 0;
};

