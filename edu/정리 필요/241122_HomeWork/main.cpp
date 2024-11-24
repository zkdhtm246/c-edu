/*
=과제=
상점시스템
- 벡터 사용
- 모든 건 클래스 사용

1. Shop
2. Item
3. Player
4. Inventory
[기능]
1. Shop
 ㄴ사는 곳, 파는 곳
 ㄴ금액 변경
 ㄴ판매 시, 구매 금액의 반값
 ㄴ수량제한

2. Player
 - 기본능력치
  ㄴ공격력, 방어력 등 (상호참조오류,클래스전방선언)
  ㄴ장착기능 : 인벤토리 빠지기, 능력치 변경
  ㄴ탈착기능 : 인벤토리 들어가기

 차근차근만들기
*/


#include<iostream>
#include "player.h"
#include "lobby.h"
#include "Shop.h"



int main() {
	

	Player* p = new Status("",0,0,0,0,0,0,0,0,0,"","","","","");

	Shop shop;
	Lobby lobby(p, &shop);

	p->CreatePlayer();
	p->PrintInfo();
	lobby.Insert();


	delete p;
}

