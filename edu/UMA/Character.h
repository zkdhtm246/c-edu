#pragma once
#include"Handle.h"

class Skill;
class Track;

class Character
{
private:
	std::string name;
	int speed;
	int power;	
	int intel;
	int raceType;
	int rank;
	int pointX;
	char dot1;
	char dot2;

	std::vector<Skill*>skillList;
	std::vector<Skill*>selectedSkills;
	Skill* selectedSkill;

public:
	Character(std::string n, int s, int p, int i, int t);
	
	void PrintLobbyInfo()const;

	void AddSkill(Skill* skill);
	void AddSelectedSkill(Skill* skill) { selectedSkills.push_back(skill); }
	void SetSelectedSkill(Skill* skill);
	bool ReSkillSelected(Skill* skill);

	void UseSkillCheck(int skillIndex);

	int RaceSpeed(const Track& track);

	void UpSpeed(int value) { speed += value; }
	void UpPower(int value) { power += value; }
	void UpIntel(int value) { intel += value; }	

	std::string GetName()const { return name; }
	int GetStatusSpeed()const { return speed; }
	int GetStatusPower()const { return power; }
	int GetStatusIntel()const { return intel; }
	std::string GetStatusType()const;
	int GetRank()const { return rank; }
	int GetpointX()const { return pointX; }
	void SetRank(int newRank) { rank = newRank; }
	void SetPointX(int newPointX) { pointX = newPointX; }
	const std::vector<Skill*>& GetSkills()const { return skillList; }
	const std::vector<Skill*>& GetSelectedSkills()const { return selectedSkills; }

	char GetDot(int charPose)const;
	void SetDot(const char costomDot1, const char costomDot2);	
};

void CreateCharacterList(std::vector<Character*>& characterList);
void DeleteCharacterList(std::vector<Character*>& characterList);

class Cash {
private:
	int cash;
public:
	Cash();
	int GetCash();
	void SetBattingCash(int battingCash);
	void SetWinCash(int battingCash, int rank);
};



//#pragma region
//int spacial[8][8] =
//{ 0,0,0,1,1,1,1,0,
//  0,0,1,2,2,2,2,0,
//  0,0,2,2,1,2,1,0,
//  0,3,3,2,2,2,2,0,
//  0,0,3,5,4,3,0,0,
//  0,0,2,5,4,3,2,0,
//  0,3,6,6,6,0,0,0,
//  0,0,6,0,0,0,0,0, };
//#pragma endregion
//
//std::cout << std::endl << std::endl << std::endl;
//for (int i = 0; i < 8; i++)
//{
//	printf(" "); //이미지 위치조정용
//	for (int j = 0; j < 8; j++)
//	{
//		switch (spacial[i][j])
//		{
//		case 0://0번 검정 도트
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);//검정
//			printf("■"); //숫자 대신 도트로 변환
//			break;
//		case 1:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);//회색
//			printf("■"); //이하 동일 로직
//			break;
//		case 2:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);//빨강
//			printf("■");
//			break;
//		case 3:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);//주황
//			printf("■");
//			break;
//		case 4:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);//노랑
//			printf("■");
//			break;
//		case 5:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);//흰색
//			printf("■");
//			break;
//		case 6:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);//흰색
//			printf("■");
//			break;
//		}
//	}
//	printf("\n"); //한줄 출력 후 띄우기
//}
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);//원래 콘솔 색깔로 복귀