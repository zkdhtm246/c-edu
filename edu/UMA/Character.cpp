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

	if (raceType == 0) { //도주의 경우
		if (pointX <= TRACK_WIDTH / 6) { //초반
			return stdSpeed * 1;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //중반
			return stdSpeed * 0.98;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //종반
			return stdSpeed * 0.96 + (speed / 20);
		}
		else { //라스트 스퍼트
			return (stdSpeed * 0.96) * 1.05 + (speed / 10);
		}
	}

	if (raceType == 1) { //선행의 경우
		if (pointX <= TRACK_WIDTH / 6) { //초반
			return stdSpeed * 0.97;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //중반
			return stdSpeed * 0.99;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //종반
			return stdSpeed * 0.97 + (speed / 20);
		}
		else { //라스트 스퍼트
			return (stdSpeed * 0.96) * 1.05 + (speed / 10);
		}
	}

	if (raceType == 2) { //추입의 경우
		if (pointX <= TRACK_WIDTH / 6) { //초반
			return stdSpeed * 0.93;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 4) { //중반
			return stdSpeed * 1;
		}
		else if (pointX <= (TRACK_WIDTH / 6) * 5) { //종반
			return stdSpeed * 1 + (speed / 20);
		}
		else { //라스트 스퍼트
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
	Character* urara = new Character("하루 우라라", 90, 90, 80, 0);
	urara->AddActiveSkill(new ActiveSkill("두근두근 준비 땅!", 2000, 1));
	urara->AddPassiveSkill(new PassiveSkill("똑똑해져라", 10));

	Character* goldship = new Character("골드 쉽", 90, 100, 70, 2);
	goldship->AddActiveSkill(new ActiveSkill("파란주의포!", 1600, 1));
	goldship->AddPassiveSkill(new PassiveSkill("강해져라", 10));

	Character* oguri = new Character("오구리 캡", 100, 100, 90, 1);
	oguri->AddActiveSkill(new ActiveSkill("승리의 고동!", 2200, 1));
	oguri->AddPassiveSkill(new PassiveSkill("빨라져라", 10));
	
	Character* special = new Character("스페셜 위크", 80, 100, 90, 1);	
	Character* suzuka = new Character("사일런스 스즈카", 100, 70, 90, 0);	
	Character* teio = new Character("토카이 테이오", 90, 80, 90, 1);	
	Character* maruzen = new Character("마루젠스키", 90, 80, 100, 0);	
	Character* kiseki = new Character("후지 키세키", 90, 100, 90, 1);	
	Character* tamamo = new Character("타마모 크로스", 80, 100, 80, 2);	
	Character* topgun = new Character("마야노 탑건", 70, 70, 90, 2);

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
