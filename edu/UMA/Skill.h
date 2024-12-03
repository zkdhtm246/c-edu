#pragma once
#include"Handle.h"

class Skill {
protected:
	std::string name;	
	bool isActive;
public:
	Skill(std::string skillName);
	virtual ~Skill(){}

	virtual bool CanActivate(int playX, int rank) = 0;
	virtual void Activate(Character& character) = 0;
	virtual void Update(Character& character) = 0;
};

class ActiveSkill :public Skill {
private:
	int skillPos;
	int skillRank;
public:
	ActiveSkill(std::string skillName, int pos, int rank);
	bool CanActivate(int playX, int rank)override;
	void Activate(Character& character)override;
	void Update(Character& character)override;
};

class PassiveSkill :public Skill {
private:
	int statusUp;
public:
	PassiveSkill(std::string skillName, int up);
	bool CanActivate(int playX, int rank)override { return true; }
	void Activate(Character& character)override { isActive = true; }
	void Update(Character& character)override;
};