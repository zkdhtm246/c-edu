/*******************************************************************
 @@@@@@@@@@@@@과제@@@@@@@@@@@@@@
아래와 같은 예시가 있을 때

1. 레벨업 기능을 구현해라(함수)
 - 플레이어가 경험치를 쌓고 특정 경험치 이상이면 레벨업!
 
2. 매우 간단한 공격 만들기(함수)

*******************************************************************/





#include<iostream>

using namespace std;
enum class Job
{
	Warrior, Mage, Archer
};
struct Character
{
	std::string name;
	int level;
	Job job;
};
string GetName(Job j)
{
	switch (j)
	{
		case Job::Warrior:return"집행검을 든 전사";
		case Job::Mage:return"암흑의 마법사";
		case Job::Archer:return"금메달 리스트 궁수";
		default: return"아무것도 선택하지 않음";
	}
}

void LevelUp(Character& c)
{

}
void Attack(Character& c1, Character& c2)
{

}

int main()
{
	Character p1 = { "홍길동",1,Job::Warrior };
	Character p2 = { "홍길동",2,Job::Mage };

	cout << "플레이어 1 : " << p1.name << "레벨 : " << p1.level << "직업 : " << GetName(p1.job) << endl;
	cout << "플레이어 2 : " << p2.name << "레벨 : " << p2.level << "직업 : " << GetName(p2.job) << endl;


}