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
		std::cout << "+ 5000 ��(1�� ���)\n";
		std::cout << "+ " << battingCash * 2 << " ��(���ñݾ� 2��)\n";
		std::cout << "ȹ�� �ݾ� : " << 5000 + battingCash * 2 << " ��\n";
		cash += 5000 + battingCash * 2;
		std::cout << "���� �ݾ� : " << cash << " ��\n";
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
	std::cout << "�̸� : " << GetName() << "     " << std::endl;
	std::cout << "�ӵ� : " << GetStatusSpeed() << "     " << std::endl;
	std::cout << "��   : " << GetStatusPower() << "     " << std::endl;
	std::cout << "���� : " << GetStatusIntel() << "     " << std::endl;
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
	Character* urara = new Character("�Ϸ� ����", 90, 90, 80);
	urara->AddActiveSkill(new ActiveSkill("�αٵα� �غ� ��!", 2000, 1));
	urara->AddPassiveSkill(new PassiveSkill("�ȶ�������", 10));

	Character* goldship = new Character("��� ��", 90, 100, 70);
	goldship->AddActiveSkill(new ActiveSkill("�Ķ�������!", 1600, 1));
	goldship->AddPassiveSkill(new PassiveSkill("��������", 10));

	Character* oguri = new Character("������ ĸ", 100, 100, 90);
	oguri->AddActiveSkill(new ActiveSkill("�¸��� ��!", 2200, 1));
	oguri->AddPassiveSkill(new PassiveSkill("��������", 10));
		
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
