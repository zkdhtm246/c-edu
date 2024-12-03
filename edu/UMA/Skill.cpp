#include "Skill.h"

Skill::Skill(std::string skillName)
	:name(skillName), isActive(false) {}

ActiveSkill::ActiveSkill(std::string skillName, int pos, int rank)
	:Skill(skillName), skillPos(pos), skillRank(rank){}

bool ActiveSkill::CanActivate(int playX, int rank)
{
	return(playX >= skillPos && rank == skillRank);
}

void ActiveSkill::Activate(Character& character)
{
	isActive = true;
}

void ActiveSkill::Update(Character& character)
{
	if (isActive) {
		//��ų ȿ�� ����
		character.UpSpeed(10);
		isActive = false; //��ȸ�� ��ų�̸� false
	}
}

PassiveSkill::PassiveSkill(std::string skillName, int up)
	:Skill(skillName),statusUp(up){}

void PassiveSkill::Update(Character& character)
{
	if (isActive) {
		character.UpSpeed(statusUp);
	}
}
