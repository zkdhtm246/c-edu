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
	

	Player* n = new Status("",0,0,0,0,0,0,0,0,0,"","","","","");

	Shop s;
	Lobby l(n);

	n->CreatePlayer();
	n->PrintInfo();
	l.Insert();


	delete n;
}

