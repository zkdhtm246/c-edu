#include "Character.h"



Character::Character(std::string n, int s, int p, int i, int t)
	:name(n), speed(s), power(p), intel(i), raceType(t), rank(1), pointX(0), selectedSkill(nullptr) {}

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

void Character::SetSelectedSkill(Skill* skill)
{
	selectedSkill = skill;
}

void Character::UseActiveSkills(int playX)
{
	for (Skill* skill : activeSkills) {
		if (skill->CanActivate(playX, rank)) {
			skill->Activate(*this);
		}
	}
}

void Character::UseSelectedSkill(int playX)
{
	if (selectedSkill && selectedSkill->CanActivate(playX, rank)) {
		selectedSkill->Activate(*this);
	}
}

void Character::UpdatePassiveSkills()
{
	for (Skill* skill : passiveSkills) {
		skill->Update(*this);
	}
}

int Character::RaceSpeed(int player, const Track& track)
{
	float stdSpeed = 40;
	
	if (track.GetCurrentCondition() == RAINY) {
		stdSpeed *= 0.9 * (power / 100);
	}
	else if (track.GetCurrentCondition() == WINDY) {
		stdSpeed *= 1.05 * (power / 100);
	}
	else if (track.GetCurrentCondition() == SNOWY) {
		stdSpeed *= 0.85 * (power / 100);
	}

	if (raceType == 0) { //������ ���
		if (pointX <= TRACK_WIDTH / 6) { //�ʹ�
			return stdSpeed * 1;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //�߹�
			return stdSpeed * 0.98;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //����
			return stdSpeed * 0.96 + (speed / 20);
		}
		else { //��Ʈ ����Ʈ
			return (stdSpeed * 0.96) * 1.05 + (speed / 10);
		}
	}

	if (raceType == 1) { //������ ���
		if (pointX <= TRACK_WIDTH / 6) { //�ʹ�
			return stdSpeed * 0.97;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //�߹�
			return stdSpeed * 0.99;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //����
			return stdSpeed * 0.97 + (speed / 20);
		}
		else { //��Ʈ ����Ʈ
			return (stdSpeed * 0.96) * 1.05 + (speed / 10);
		}
	}

	if (raceType == 2) { //������ ���
		if (pointX <= TRACK_WIDTH / 6) { //�ʹ�
			return stdSpeed * 0.93;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //�߹�
			return stdSpeed * 1;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //����
			return stdSpeed * 1 + (speed / 20);
		}
		else { //��Ʈ ����Ʈ
			return (stdSpeed * 0.96) * 1.05 + (speed / 10);
		}
	}
}

void Character::DownSpeed(int value)
{
	speed -= value;
}

void CreateCharacterList(std::vector<Character*>& characterList)
{
	Character* urara = new Character("�Ϸ� ����", 90, 90, 80, 0);
	urara->AddActiveSkill(new ActiveSkill("�αٵα� �غ� ��!", 2000, 1));
	urara->AddPassiveSkill(new PassiveSkill("�ȶ�������", 10));

	Character* goldship = new Character("��� ��", 90, 100, 70, 2);
	goldship->AddActiveSkill(new ActiveSkill("�Ķ�������!", 1600, 1));
	goldship->AddPassiveSkill(new PassiveSkill("��������", 10));

	Character* oguri = new Character("������ ĸ", 100, 100, 90, 1);
	oguri->AddActiveSkill(new ActiveSkill("�¸��� ��!", 2200, 1));
	oguri->AddPassiveSkill(new PassiveSkill("��������", 10));
	
	Character* special = new Character("����� ��ũ", 80, 100, 90, 1);	
	Character* suzuka = new Character("���Ϸ��� ����ī", 100, 70, 90, 0);	
	Character* teio = new Character("��ī�� ���̿�", 90, 80, 90, 1);	
	Character* maruzen = new Character("��������Ű", 90, 80, 100, 0);	
	Character* kiseki = new Character("���� Ű��Ű", 90, 100, 90, 1);	
	Character* tamamo = new Character("Ÿ���� ũ�ν�", 80, 100, 80, 2);	
	Character* topgun = new Character("���߳� ž��", 70, 70, 90, 2);

	characterList.push_back(urara);
	characterList.push_back(goldship);
	characterList.push_back(oguri);
	characterList.push_back(special);
	characterList.push_back(suzuka);
	characterList.push_back(teio);
	characterList.push_back(maruzen);
	characterList.push_back(kiseki);
	characterList.push_back(tamamo);
	characterList.push_back(topgun);
}

void DeleteCharacterList(std::vector<Character*>& characterList)
{
	for (Character* character : characterList) {
		delete character;
	}
	characterList.clear();
}
