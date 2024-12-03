#pragma once
#include"Handle.h"

class Skill;

class Character
{
private:
	std::string name;
	int speed;
	int power;	
	int intel;
	int rank;

	std::vector<Skill*>activeSkills;
	std::vector<Skill*>passiveSkills;

public:
	Character(std::string n, int s, int p, int i);

	
	void PrintLobbyInfo()const;
		
	void AddActiveSkill(Skill* skill);
	void AddPassiveSkill(Skill* skill);
	
	void UseActiveSkills(int playX);
	void UpdatePassiveSkills();

	void SetRank(int newRank) { rank = newRank; }	

	void UpSpeed(int value) { speed += value; }
	void UpPower(int value) { power += value; }
	void UpIntel(int value) { intel += value; }

	int GetStatusSpeed()const { return speed; }
	int GetStatusPower()const { return power; }
	int GetStatusIntel()const { return intel; }
	std::string GetName()const { return name; }
	int GetRank()const { return rank; }
	int GetplayX()const { return speed / 10; }

	void DownSpeed(int value);
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