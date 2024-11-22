/*

*/

#include<iostream>

using namespace std;


#pragma region 상속을 안받았을때
//class Warrior
//{
//private:
//	string name;
//	int health;
//
//public:
//	Warrior(const string& n, const int h) :name(n), health(h)
//	{
//
//	}
//
//	void Attack()
//	{
//		cout << "칼 공격" << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "이" << damage << "만큼 데미지를 먹었다 남은 체력" << health << endl;
//	}
//};
//
//class Mage
//{
//private:
//	string name;
//	int health;
//
//public:
//	Mage(const string& n, const int h) :name(n), health(h)
//	{
//
//	}
//
//	void Skill()
//	{
//		cout << "아이스볼 발사" << endl;
//	}
//	void TakeDamage(const int damage)
//	{
//		health -= damage;
//		cout << name << "이" << damage << "만큼 데미지를 먹었다 남은 체력" << health << endl;
//	}
//};
#pragma endregion

class Character
{
public:
	string name;
	int health;

	Character(const string& n, const int h) :name(n), health(h)
	{
		cout << "부모 클래스 charactor생성자 호출" << endl;
	}
	void TakeDamage(const int damage)
	{
		cout << name << "이" << damage << "만큼 데미지를 먹었다 남은 체력" << health << endl;
	}
protected:

};

//상속
class Warrior :public Character
{
public:
	Warrior(const string n, const int h) :Character(n, h) //부모클래스의 멤버변수들의 초기화를 보장
	{
		cout << "자식 클래스 워리어 생성자 호출" << endl;
	}
	void Attack()
	{
		cout << "칼을 휘두름" << endl;
	}
};
class Mage :public Character
{
public:
	Mage(const string n, const int h) :Character(n, h) //부모클래스의 멤버변수들의 초기화를 보장
	{
		cout << "자식 클래스 법사 생성자 호출" << endl;
	}
	void Attack()
	{
		cout << "해골 소환" << endl;
	}
};


int main()
{
	//생성자:부모->자식, 소멸자:자식->부모
	Warrior* w = new Warrior("토르", 100);
	w->Attack();
	w->TakeDamage(10);

	Mage* m = new Mage("간달프", 100);
	m->Attack();
	m->TakeDamage(20);
}


/*
[과제-상속]
1. 유닛 클래스
- 공통된 데이터를 제공

 a. 몬스터 클래스
  - 스킬 2개
 b. 플레이어 클래스
  - 스킬 2개
 
 출력 : 기본적인 Status, 각각의 멤버함수를 활용

 *상속을 하는데 부모 클래스의 멤버들은 protected, public, private으로 하나씩 만들고
  상속을 받는 자식 클래스도 public, private, protected로 각각 만들었을경우 차이점

*/