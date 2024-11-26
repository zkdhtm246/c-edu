/*
상호참조오류
두 클래스 간에 서로 참조하는 경우 오류 발생
클래스 전방 선언 필요


*/


#include"Player.h"
#include"Weapon.h"


int main() {

	Weapon* sword = new Weapon("칼");

	Player* player = new Player("홍길동", sword);

	player->Attack();

	delete sword;
	delete player;

	sword = nullptr;
	player = nullptr;
}