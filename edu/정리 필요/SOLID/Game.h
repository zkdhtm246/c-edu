#pragma once
#include<iostream>
/*
�ش� Ŭ�������� �÷��̾�, ���� ������ ����. ����...��� �� ��� ��ɵ��� �� ����.
- ������ ����, ���������� �ٲٷ��� GameŬ���� ���ݿ� ���� �ڵ带 �����ؾ���


//���� �ش� Ŭ������ �и��Ѵٰ� �ϸ�?()
1. playerClass
 - (�̸�,ü��,����)
 - �÷��̾�� ���õ� ���(����Լ�)


2. monsterClass
 - (�̸�,ü��,����)
 - ���Ϳ� ���õ� ���(����Լ�)

3. BattelManager

4. PrintClass
 - �� Ŭ������ ������ ����ϴ� Ŭ����
*/
class Game
{
private:
	std::string playerName;
	std::string monsterName;
	int playerHealth;
	int monsterHealth;
	int playerAttack;
	int monsterAttack;
public:
	Game();

	void Start();
};
class Monster{};
class Player{};
class BattleManager {
public:
	void Battle();
};

