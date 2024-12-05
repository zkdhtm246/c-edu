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
//	printf(" "); //�̹��� ��ġ������
//	for (int j = 0; j < 8; j++)
//	{
//		switch (spacial[i][j])
//		{
//		case 0://0�� ���� ��Ʈ
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);//����
//			printf("��"); //���� ��� ��Ʈ�� ��ȯ
//			break;
//		case 1:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);//ȸ��
//			printf("��"); //���� ���� ����
//			break;
//		case 2:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);//����
//			printf("��");
//			break;
//		case 3:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);//��Ȳ
//			printf("��");
//			break;
//		case 4:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);//���
//			printf("��");
//			break;
//		case 5:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);//���
//			printf("��");
//			break;
//		case 6:
//			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);//���
//			printf("��");
//			break;
//		}
//	}
//	printf("\n"); //���� ��� �� ����
//}
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);//���� �ܼ� ����� ����