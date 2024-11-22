#pragma once
#include<iostream>

class Player
{
protected:
	std::string name;
	int healthPoint;
	int magicPoint;
	int attackPoint;
	int defencePoint;
	int cash;
public:
	Player(std::string name, const int hp, const int mp, const int atk, const int def, const int cash)
		:name(name), healthPoint(hp), magicPoint(mp), attackPoint(atk), defencePoint(def), cash(cash) {

	}
	void CreatePlayer();
	void PrintInfo();
	virtual void PrintStatus() {}

};

class Status :public Player {
protected:
	int hpVar;
	int mpVar;
	int atkVar;
	int defVar;
	std::string rightArm;
	std::string leftArm;
	std::string head;
	std::string body;
	std::string var;
public:
	Status(std::string name, const int hp, const int mp, const int atk, const int def, const int cash, int hpVar, int mpVar, int atkVar, int defVar, std::string right, std::string left, std::string head, std::string body, std::string var)
		:Player(name, hp, mp, atk, def, cash), hpVar(0), mpVar(0), atkVar(0), defVar(0), rightArm("없음"), leftArm("없음"), head("없음"), body("없음"),var("+") {

	}
	void PrintStatus()override;
};
