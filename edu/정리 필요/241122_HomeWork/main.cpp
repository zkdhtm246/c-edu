/*
=����=
�����ý���
- ���� ���
- ��� �� Ŭ���� ���

1. Shop
2. Item
3. Player
4. Inventory
[���]
1. Shop
 ����� ��, �Ĵ� ��
 ���ݾ� ����
 ���Ǹ� ��, ���� �ݾ��� �ݰ�
 ����������

2. Player
 - �⺻�ɷ�ġ
  �����ݷ�, ���� �� (��ȣ��������,Ŭ�������漱��)
  ��������� : �κ��丮 ������, �ɷ�ġ ����
  ��Ż����� : �κ��丮 ����

 �������ٸ����
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

