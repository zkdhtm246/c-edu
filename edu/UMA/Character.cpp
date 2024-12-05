#include "Character.h"

Character::Character(std::string n, int s, int p, int i, int t)
	:name(n), speed(s), power(p), intel(i), raceType(t), rank(1), pointX(0), selectedSkill(nullptr), dot1('p'), dot2('q') {}

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
	std::cout << "\n\n\n\n\n\n\n" << std::endl;
	std::cout << "�̸� : " << GetName() << "     " << std::endl;
	std::cout << "�ӵ� : " << GetStatusSpeed() << "     " << std::endl;
	std::cout << "��   : " << GetStatusPower() << "     " << std::endl;
	std::cout << "���� : " << GetStatusIntel() << "     " << std::endl;
	std::cout << "���� : " << GetStatusType() << "     " << std::endl;
}

void Character::AddSkill(Skill* skill)
{
	skillList.push_back(skill);
}

void Character::SetSelectedSkill(Skill* skill)
{
	selectedSkill = skill;
}

bool Character::ReSkillSelected(Skill* skill)
{
	return std::find(selectedSkills.begin(), selectedSkills.end(), skill) != selectedSkills.end();
}

void Character::UseSkillCheck(int playX)
{
	for (Skill* skill : skillList) {
		if (skill->CanActivate(playX, rank, intel)) {
			skill->SkillValueUp(*this);
		}
	}	
}

int Character::RaceSpeed(const Track& track)
{	
	float randomSpeed = 0.5f + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (1.5f - 0.5f)));
	float powerValue = 1.0f + (power / 130.0f);
	float stdSpeed = 40.0f + powerValue * randomSpeed;

	if (raceType == 0) { //������ ���
		if (pointX <= TRACK_WIDTH / 6) { //�ʹ�
			return floor((stdSpeed * 1.0f) + 0.3f);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //�߹�
			return floor((stdSpeed * 0.98f) + 0.3f);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //����
			return floor((stdSpeed * 0.96f + (speed / 20)) + 0.3f);
		}
		else { //��Ʈ ����Ʈ
			return floor(((stdSpeed * 0.96f) * 1.05f + (speed / 10)) + 0.3f);
		}
	}

	if (raceType == 1) { //������ ���
		if (pointX <= TRACK_WIDTH / 6) { //�ʹ�
			return floor((stdSpeed * 0.97f) + 0.3);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //�߹�
			return floor((stdSpeed * 0.99f) + 0.3);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //����
			return floor((stdSpeed * 0.97f + (speed / 20)) + 0.3);
		}
		else { //��Ʈ ����Ʈ
			return floor(((stdSpeed * 0.96f) * 1.05f + (speed / 10)) + 0.3);
		}
	}

	if (raceType == 2) { //������ ���
		if (pointX <= TRACK_WIDTH / 6) { //�ʹ�
			return floor((stdSpeed * 0.93f) + 0.3);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //�߹�
			return floor((stdSpeed * 1.0f) + 0.3);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //����
			return floor((stdSpeed * 1.0f + (speed / 20)) + 0.3);
		}
		else { //��Ʈ ����Ʈ
			return floor(((stdSpeed * 0.96f) * 1.05f + (speed / 10)) + 0.3);;
		}
	}
}

std::string Character::GetStatusType() const
{
	if (raceType == 0) {
		return "����";
	}
	else if (raceType == 1) {
		return "����";
	}
	else if (raceType == 2) {
		return "����";
	}
}

char Character::GetDot(int charPose) const
{
	if (charPose == 0) {
		return dot1;
	}
	else {
		return dot2;
	}
}

void Character::SetDot(const char costomDot1, const char costomDot2)
{
	dot1 = costomDot1;
	dot2 = costomDot2;
}

void CreateCharacterList(std::vector<Character*>& characterList)
{
	char uraraDot1 = 'U';
	char uraraDot2 = 'U';

	char goldshipDot1 = 'G';
	char goldshipDot2 = 'G';

	char oguriDot1 = 'C';
	char oguriDot2 = 'C';

	char specialDot1 = 'W';
	char specialDot2 = 'W';

	char suzukaDot1 = 'S';
	char suzukaDot2 = 'S';
	
	char teioDot1 = 'T';
	char teioDot2 = 'T';
	
	char maruzenDot1 = 'M';
	char maruzenDot2 = 'M';
	
	char kisekiDot1 = 'K';
	char kisekiDot2 = 'K';
	
	char tamamoDot1 = 'X';
	char tamamoDot2 = 'X';
	
	char topgunDot1 = 'N';
	char topgunDot2 = 'N';
	
	Character* urara = new Character("�Ϸ� ����", 100, 90, 90, 0);
	urara->SetDot(uraraDot1, uraraDot2);

	Character* goldship = new Character("��� ��", 90, 90, 100, 2);
	goldship->SetDot(goldshipDot1, goldshipDot2);

	Character* oguri = new Character("������ ĸ", 90, 100, 90, 1);
	oguri->SetDot(oguriDot1, oguriDot2);
	
	Character* special = new Character("����� ��ũ", 80, 90, 90, 1);
	special->SetDot(specialDot1, specialDot2);
	Character* suzuka = new Character("���Ϸ��� ����ī", 90, 70, 90, 0);	
	suzuka->SetDot(suzukaDot1, suzukaDot2);
	Character* teio = new Character("��ī�� ���̿�", 90, 80, 90, 1);	
	teio->SetDot(teioDot1, teioDot2);
	Character* maruzen = new Character("��������Ű", 90, 80, 90, 0);	
	maruzen->SetDot(maruzenDot1, maruzenDot2);
	Character* kiseki = new Character("���� Ű��Ű", 90, 90, 90, 1);	
	kiseki->SetDot(kisekiDot1, kisekiDot2);
	Character* tamamo = new Character("Ÿ���� ũ�ν�", 80, 90, 80, 2);	
	tamamo->SetDot(tamamoDot1, tamamoDot2);
	Character* topgun = new Character("���߳� ž��", 70, 70, 90, 2);
	topgun->SetDot(topgunDot1, topgunDot2);

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
