/*
��ȣ��������
�� Ŭ���� ���� ���� �����ϴ� ��� ���� �߻�
Ŭ���� ���� ���� �ʿ�


*/


#include"Player.h"
#include"Weapon.h"


int main() {

	Weapon* sword = new Weapon("Į");

	Player* player = new Player("ȫ�浿", sword);

	player->Attack();

	delete sword;
	delete player;

	sword = nullptr;
	player = nullptr;
}