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