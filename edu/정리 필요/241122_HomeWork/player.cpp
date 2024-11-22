#include "player.h"

void Player::CreatePlayer()
{
	std::cout << "이름을 정하세요 : ";
	std::cin >> name;
	std::cout << "\n체력을 정하세요 (100 ~ 200) : ";
	std::cin >> healthPoint;
	std::cout << "\n마나를 정하세요 (100 ~ 200) : ";
	std::cin >> magicPoint;
	std::cout << "\n공격력을 정하세요 (10 ~ 20) : ";
	std::cin >> attackPoint;
	std::cout << "\n방어력을 정하세요 (10 ~ 20) : ";
	std::cin >> defencePoint;
	std::cout << "\n소지금을 정하세요 (10000 ~ 20000) : ";
	std::cin >> cash;
}

void Player::PrintInfo()
{
	std::cout << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << "해당 캐릭터가 생성되었습니다!" << std::endl << std::endl;
	std::cout << "이  름 : " << name;
	std::cout << "\n체  력 : " << healthPoint;
	std::cout << "\n마  나 : " << magicPoint;
	std::cout << "\n공격력 : " << attackPoint;
	std::cout << "\n방어력 : " << defencePoint;
	std::cout << "\n소지금 : " << cash << std::endl;
	std::cout << "======================================" << std::endl;
}

void Status::PrintStatus()
{
	std::cout << std::endl;
	std::cout << "================상태창================" << std::endl << std::endl;
	std::cout << "이  름 : " << name;
	std::cout << "\n체  력 : " << healthPoint << "(" << var << hpVar << ")" << "				투  구 : " << head;		
	std::cout << "\n마  나 : " << magicPoint << "(" << var << mpVar << ")" << "				갑  옷 : " << body;		
	std::cout << "\n공격력 : " << attackPoint << "(" << var << atkVar << ")" << "				오른손 : " << rightArm;		
	std::cout << "\n방어력 : " << defencePoint << "(" << var << defVar << ")" << "				왼  손 : " << leftArm;
	std::cout << "\n소지금 : " << cash << std::endl;
	std::cout << "======================================" << std::endl;
}
