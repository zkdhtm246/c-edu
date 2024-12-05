#include "Skill.h"

Skill::Skill(std::string skillName, int value, int vType, int type, int pos, int rank)
	:name(skillName), value(value), type(type), valueType(vType), skillPos(pos), skillRank(rank), used(false) {}

bool Skill::CanActivate(int playX, int rank, int intel)
{
	if (used)return false;

	if (playX >= skillPos && rank >= skillRank) {
		int chance = rand() % 100;

		if (chance < intel) {
			used = true;
			return true;
		}
	}
	return false;
}

void Skill::SkillValueUp(Character& character)
{
	if (valueType == 0) {
		character.UpSpeed(value);
	}
	else if (valueType == 1) {
		character.UpPower(value);
	}
	if (valueType == 2) {
		character.UpIntel(value);
	}
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n스킬 발동!\n";
}

PublicSkill::PublicSkill()
{	
	publicSkillList.push_back(new Skill("파죽지세!", 10, 1, 0, 20000, 1));
	publicSkillList.push_back(new Skill("전심전력!", 10, 1, 1, 20000, 4));
	publicSkillList.push_back(new Skill("승리를 향한 집념!", 10, 1, 2, 12000, 6));

	publicSkillList.push_back(new Skill("재빠름", 5, 0, 0, 0, 0));
	publicSkillList.push_back(new Skill("강력함", 5, 0, 1, 0, 0));
	publicSkillList.push_back(new Skill("똑똑함", 5, 0, 2, 0, 0));	
}

UniqSkill::UniqSkill()
{
	uniqSkillList.push_back(new Skill("두근두근 준비 땅!", 10, 1, 0, 20000, 0));
	uniqSkillList.push_back(new Skill("파란주의포!", 5, 1, 0, 16000, 0));
	uniqSkillList.push_back(new Skill("승리의 고동!", 15, 0, 1, 22000, 0));
}
