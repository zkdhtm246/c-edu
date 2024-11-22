/****************************************************************
생성자 멤버초기화 리스트
- 멤버변수가 생성자 본문이 실행되기전에 초기화
- 생성자 매개변수 뒤에 삽입됨. 콜론 : 으로 시작한 다음, 초기화할 각 변수를 쉼표로 구분함

[Getter, Setter]
- 멤버변수를 private으로 선언하고 외부에서 직접적인 접근을 차단
- 객체의 데이터를 보호하고 외부와의 인터페이스를 제공

 1. Getter
  - 읽기 전용으로 멤버변수의 값을 반환
  - const를 함수 뒤에 붙여 멤버변수의 변경을 방지

 2. Setter
  - 멤버변수 값을 설정

****************************************************************/

#include<iostream>


class Exam
{
public:
	const int num;

	int& score;

	/*Exam()
	{
		num = 1;
		score = 2;
	}*/
	Exam(int num,int score):num(num),score(score){}
};


class Monster
{
public:

	std::string mName;
	int mAtk;
	int mHealth;

	Monster(const std::string& monsterName, int monsterAtk, int monsterHealth)
		:mName(monsterName),mAtk(monsterAtk),mHealth(monsterHealth)
	{
		//여기서 초기화할 필요가 없음
		Init();
	}

	void Init();
};



class Person
{
public:
	std::string GetName()const { return mName; }
	void SetName(const std::string& name)
	{
		mName = name;
	}
	int GetAge()const { return mAge; }
	void SetAge(const int age)
	{
		mAge = age;
	}
private:
	std::string mName;
	int mAge;
};



int main()
{
	//Monster* m = new Monster("고블린", 10, 20);


	Person p;
	p.SetName("이힝");
	p.SetAge(10);

	std::cout << "이름 : " << p.GetName() << std::endl;
	std::cout << "나이 : " << p.GetAge() << std::endl;


	//1.멤버초기화 리스트를 활용하여 객체초기화를 하고 출력해보기
	//2.Get, Set을 활용하여 플레이어와 몬스터 전투게임 만들기
	//ㄴ체력과 공격력만 있음

	//3.OOP에 대해 발표자료 만들기
	//- 팀으로 진행
	//

}