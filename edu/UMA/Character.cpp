#include "Character.h"

Character::Character(std::string n, int s, int p, int i)
	:name(n), speed(s), power(p), intel(i), rank(1) {}

Cash::Cash()
	:cash(10000) {}

int Cash::GetCash()
{
	return cash;
}

void Cash::SetBattingCash(int battingCash)
{
	cash -= battingCash;
}


void Cash::SetWinCash(int battingCash, int rank)
{
	ClearScreen();
	if (rank == 1) {
		std::cout << "+ 5000 원(1등 상금)\n";
		std::cout << "+ " << battingCash * 2 << " 원(배팅금액 2배)\n";
		std::cout << "획득 금액 : " << 5000 + battingCash * 2 << " 원\n";
		cash += 5000 + battingCash * 2;
		std::cout << "현재 금액 : " << cash << " 원\n";
		Sleep(1000);
		return;
	}
	else {
		cash;
	}
}

void Character::PrintLobbyInfo() const
{
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
	std::cout << "이름 : " << GetName() << "     " << std::endl;
	std::cout << "속도 : " << GetStatusSpeed() << "     " << std::endl;
	std::cout << "힘   : " << GetStatusPower() << "     " << std::endl;
	std::cout << "지능 : " << GetStatusIntel() << "     " << std::endl;
}

void Character::AddActiveSkill(Skill* skill)
{
	activeSkills.push_back(skill);
}

void Character::AddPassiveSkill(Skill* skill)
{
	passiveSkills.push_back(skill);
}

void Character::UseActiveSkills(int playX)
{
	for (Skill* skill : activeSkills) {
		if (skill->CanActivate(playX, rank)) {
			skill->Activate(*this);
		}
	}
}

void Character::UpdatePassiveSkills()
{
	for (Skill* skill : passiveSkills) {
		skill->Update(*this);
	}
}

void Character::DownSpeed(int value)
{
	speed -= value;
}

void CreateCharacterList(std::vector<Character*>& characterList)
{
	Character* urara = new Character("하루 우라라", 90, 90, 80);
	urara->AddActiveSkill(new ActiveSkill("두근두근 준비 땅!", 2000, 1));
	urara->AddPassiveSkill(new PassiveSkill("똑똑해져라", 10));

	Character* goldship = new Character("골드 쉽", 90, 100, 70);
	goldship->AddActiveSkill(new ActiveSkill("파란주의포!", 1600, 1));
	goldship->AddPassiveSkill(new PassiveSkill("강해져라", 10));

	Character* oguri = new Character("오구리 캡", 100, 100, 90);
	oguri->AddActiveSkill(new ActiveSkill("승리의 고동!", 2200, 1));
	oguri->AddPassiveSkill(new PassiveSkill("빨라져라", 10));
		
	characterList.push_back(urara);
	characterList.push_back(goldship);
	characterList.push_back(oguri);
}

void DeleteCharacterList(std::vector<Character*>& characterList)
{
	for (Character* character : characterList) {
		delete character;
	}
	characterList.clear();
}
