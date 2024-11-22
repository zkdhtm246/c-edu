#include "player.h"

void Player::CreatePlayer()
{
	std::cout << "�̸��� ���ϼ��� : ";
	std::cin >> name;
	std::cout << "\nü���� ���ϼ��� (100 ~ 200) : ";
	std::cin >> healthPoint;
	std::cout << "\n������ ���ϼ��� (100 ~ 200) : ";
	std::cin >> magicPoint;
	std::cout << "\n���ݷ��� ���ϼ��� (10 ~ 20) : ";
	std::cin >> attackPoint;
	std::cout << "\n������ ���ϼ��� (10 ~ 20) : ";
	std::cin >> defencePoint;
	std::cout << "\n�������� ���ϼ��� (10000 ~ 20000) : ";
	std::cin >> cash;
}

void Player::PrintInfo()
{
	std::cout << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << "�ش� ĳ���Ͱ� �����Ǿ����ϴ�!" << std::endl << std::endl;
	std::cout << "��  �� : " << name;
	std::cout << "\nü  �� : " << healthPoint;
	std::cout << "\n��  �� : " << magicPoint;
	std::cout << "\n���ݷ� : " << attackPoint;
	std::cout << "\n���� : " << defencePoint;
	std::cout << "\n������ : " << cash << std::endl;
	std::cout << "======================================" << std::endl;
}

void Status::PrintStatus()
{
	std::cout << std::endl;
	std::cout << "================����â================" << std::endl << std::endl;
	std::cout << "��  �� : " << name;
	std::cout << "\nü  �� : " << healthPoint << "(" << var << hpVar << ")" << "				��  �� : " << head;		
	std::cout << "\n��  �� : " << magicPoint << "(" << var << mpVar << ")" << "				��  �� : " << body;		
	std::cout << "\n���ݷ� : " << attackPoint << "(" << var << atkVar << ")" << "				������ : " << rightArm;		
	std::cout << "\n���� : " << defencePoint << "(" << var << defVar << ")" << "				��  �� : " << leftArm;
	std::cout << "\n������ : " << cash << std::endl;
	std::cout << "======================================" << std::endl;
}
