/*********************************************************************
[생성자(constructor)]
- 객체가 생성될 때, 자동으로 호출되는 특별한 멤버함수
- 객체의 초기화를 담당
- 클래스 이름과 동일한 이름을 가진다
- 반환값이 없다
- 오버로딩이 가능하다(여러개의 생성자를 정의할 수 있다)
- 기본생성자, 매개변수가 있는 생성자, 복사생성자

[기본생성자]
- 매개변수가 없는 생성자. 명시적으로 정의하지 않으면 컴파일러가 자동으로 제공함
*********************************************************************/


#include<iostream>

class CPlayer
{
public:
	std::string mName;
	int mAtk;
	int mDef;
public:
	CPlayer()
	{
		mName = "홍길동";
		mAtk = 10;
		mDef = 200;
	}
	//매개변수가 있는 생성자
	CPlayer(const std::string& playerName, const int playerAtk, const int playerDef)
	{
		mName = playerName;
		mAtk = playerAtk;
		mDef = playerDef;
	}

	void PrintInfo()const;
};
void CPlayer::PrintInfo()const
{
	std::cout << "이름 : " << mName << std::endl;
	std::cout << "공격력 : " << mAtk << std::endl;
	std::cout << "방어력 : " << mDef << std::endl;
}

class Person
{
public:
	void printInfo()const;
	
	Person(const std::string& name, const int age, const int date, const std::string& phone)
	{
		pName = name;
		pAge = age;
		pBdate = date;
		pPnum = phone;
	}
private:
	std::string pName;
	int pAge;
	int pBdate;
	std::string pPnum;
};
void Person::printInfo()const
{
	std::cout << "이름 : " << pName << std::endl;
	std::cout << "나이 : " << pAge << std::endl;
	std::cout << "생년월일 : " << pBdate << std::endl;
	std::cout << "전화번호 : " << pPnum << std::endl;
}


int main()
{
	//기본생성자
	CPlayer* player = new CPlayer();
	player->PrintInfo();
	std::cout << std::endl;
	
	//매개변수가 있는 생성자
	CPlayer* player1 = new CPlayer("홍길남", 10, 20);
	player1->PrintInfo();
	std::cout << std::endl;

	Person* man = new Person("김사람", 5, 190229, "010-1004-1004");
	man->printInfo();
	

	delete player;
	delete player1;
	player = nullptr;
	player1 = nullptr;
	delete man;
	man = nullptr;
}

/*
실습
Person이라는 클래스를 생성
1. 속성
- 이름, 나이, 생년월일, 전화번호

2. 기능
- 위 정보를 출력하는 함수를 만들어라

*/