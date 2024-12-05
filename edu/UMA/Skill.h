#pragma once
#include"Handle.h"

class Skill {
protected:
	std::string name;
	int value;
	int valueType;
	int type;
	int skillPos;
	int skillRank;
	bool used;
public:
	Skill(std::string skillName, int value, int vType, int type, int pos, int rank);

	std::string GetName() { return name; }
	int GetValue() { return value; }

	bool CanActivate(int playX, int rank, int intel);

	void SkillValueUp(Character& character);
};

class UniqSkill {
private:
	std::vector<Skill*>uniqSkillList;
public:
	UniqSkill();

	std::vector<Skill*>& GetUniqSkillList() { return uniqSkillList; }
};

class PublicSkill {
private:
	std::vector<Skill*>publicSkillList;
public:
	PublicSkill();

	std::vector<Skill*>& GetSkillList() { return publicSkillList; }
};