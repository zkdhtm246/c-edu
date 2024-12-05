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
	std::cout << "\n\n\n\n\n\n\n" << std::endl;
	std::cout << "이름 : " << GetName() << "     " << std::endl;
	std::cout << "속도 : " << GetStatusSpeed() << "     " << std::endl;
	std::cout << "힘   : " << GetStatusPower() << "     " << std::endl;
	std::cout << "지능 : " << GetStatusIntel() << "     " << std::endl;
	std::cout << "전략 : " << GetStatusType() << "     " << std::endl;
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

	if (raceType == 0) { //도주의 경우
		if (pointX <= TRACK_WIDTH / 6) { //초반
			return floor((stdSpeed * 1.0f) + 0.3f);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //중반
			return floor((stdSpeed * 0.98f) + 0.3f);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //종반
			return floor((stdSpeed * 0.96f + (speed / 20)) + 0.3f);
		}
		else { //라스트 스퍼트
			return floor(((stdSpeed * 0.96f) * 1.05f + (speed / 10)) + 0.3f);
		}
	}

	if (raceType == 1) { //선행의 경우
		if (pointX <= TRACK_WIDTH / 6) { //초반
			return floor((stdSpeed * 0.97f) + 0.3);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //중반
			return floor((stdSpeed * 0.99f) + 0.3);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //종반
			return floor((stdSpeed * 0.97f + (speed / 20)) + 0.3);
		}
		else { //라스트 스퍼트
			return floor(((stdSpeed * 0.96f) * 1.05f + (speed / 10)) + 0.3);
		}
	}

	if (raceType == 2) { //추입의 경우
		if (pointX <= TRACK_WIDTH / 6) { //초반
			return floor((stdSpeed * 0.93f) + 0.3);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //중반
			return floor((stdSpeed * 1.0f) + 0.3);
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //종반
			return floor((stdSpeed * 1.0f + (speed / 20)) + 0.3);
		}
		else { //라스트 스퍼트
			return floor(((stdSpeed * 0.96f) * 1.05f + (speed / 10)) + 0.3);;
		}
	}
}

std::string Character::GetStatusType() const
{
	if (raceType == 0) {
		return "도주";
	}
	else if (raceType == 1) {
		return "선행";
	}
	else if (raceType == 2) {
		return "추입";
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
	
	Character* urara = new Character("하루 우라라", 100, 90, 90, 0);
	urara->SetDot(uraraDot1, uraraDot2);

	Character* goldship = new Character("골드 쉽", 90, 90, 100, 2);
	goldship->SetDot(goldshipDot1, goldshipDot2);

	Character* oguri = new Character("오구리 캡", 90, 100, 90, 1);
	oguri->SetDot(oguriDot1, oguriDot2);
	
	Character* special = new Character("스페셜 위크", 80, 90, 90, 1);
	special->SetDot(specialDot1, specialDot2);
	Character* suzuka = new Character("사일런스 스즈카", 90, 70, 90, 0);	
	suzuka->SetDot(suzukaDot1, suzukaDot2);
	Character* teio = new Character("토카이 테이오", 90, 80, 90, 1);	
	teio->SetDot(teioDot1, teioDot2);
	Character* maruzen = new Character("마루젠스키", 90, 80, 90, 0);	
	maruzen->SetDot(maruzenDot1, maruzenDot2);
	Character* kiseki = new Character("후지 키세키", 90, 90, 90, 1);	
	kiseki->SetDot(kisekiDot1, kisekiDot2);
	Character* tamamo = new Character("타마모 크로스", 80, 90, 80, 2);	
	tamamo->SetDot(tamamoDot1, tamamoDot2);
	Character* topgun = new Character("마야노 탑건", 70, 70, 90, 2);
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
