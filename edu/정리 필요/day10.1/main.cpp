/***************************************************************************

추상클래스 : 하나 이상의 순수가상함수를 포함한 클래스
- 추상클래스는 인스턴스화 시킬 수 없음
- 다른 클래스들이 상속받아야 하는 기본 인터페이스나 기본동작을 정의하는데 사용
- 특정 함수들이 자식클래스에 의해 구현되도록 강제함 -> 반드시 해야됨

***************************************************************************/

/***************************************************************************

Virtual Function VS Pure Virtual Function  -> 면접질문

1. Virtual Function
- 구현부를 포함할 수 있다
- 파생클래스에서 재정의하지 않아도 된다
- 가상함수만으로는 추상클래스가 성립 안됨
- 클래스 인스턴스화 가능

2. Pure Virtual Function
- 구현부가 없음
- 파생클래스에서 반드시 재정의
- 순수가상함수가 하나라도 있으면, 추상클래스 성립
- 인스턴스화 불가능

***************************************************************************/

/***************************************************************************
[UpCasting]
- 자식클래스의 객체를 부모클래스로 타입 변환
- 안정성을 보장하며 명시적인 타입 변환이 필요없음

[DownCasting]
- 부모클래스 타입을 자식클래스 타입으로 변환
- 

***************************************************************************/
#include<iostream>
//#include"Player.h"
#pragma region 추상
/*Player* p = new Player("홍", 10);

p->Attack();
p->TakeDamage(10);

delete p;
p = nullptr;

Unit* u = new Unit("ddd", 10);*/
#pragma endregion

class Shape {
public:
	 void Draw()const {
		std::cout << "부모 클래스 shape" << std::endl;
	}
	 ~Shape() {};
};
class Circle :public Shape {
public:
	void Draw()const  {
		std::cout << "자식 클래스 Circle" << std::endl;
	}
	void CircleFunction() {
		std::cout << "Circle클래스의 멤버함수" << std::endl;
	}
};
class Rectangle :public Shape {
public:
	void Draw()const {
		std::cout << "자식 클래스 Rectangle" << std::endl;
	}
	void RectangleFunction() {
		std::cout << "Rectangle클래스의 멤버함수" << std::endl;
	}
};


int main() {

	Shape* shape1 = nullptr;
	Shape* shape2 = nullptr;
	//업캐스팅 : 자식클래스 객체를 부모클래스 타입의 포인터로...
	shape1 = new Circle();
	shape2 = new Rectangle();

	//자식클래스의 멤버함수를 호출
	shape1->Draw();
	shape2->Draw();

	//다운캐스팅, 위험해서 지양함
	/*Circle* c = (Circle*)shape1;
	c->CircleFunction();*/

	Circle* c = dynamic_cast<Circle*>(shape1);
	c->CircleFunction(); //자식클래스 멤버함수 호출, 가상함수 필요

	Rectangle* r = dynamic_cast<Rectangle*>(shape2);
	r->RectangleFunction();

	shape1->Draw();
	shape2->Draw();

}

/*
1. RTTI (런타임 타입 인포메이션) 조사
2. 가상함수와 순수가상함수
3. 추상클래스
4. 정적/동적바인딩
5. 업/다운캐스팅

-오랜만에 구현하는 과제-
- 빙고게임
 - 5x5
 - 숫자를 맞출 경우 해당 칸을 기호(#,* 등)로 바꿈
 - 가로, 세로, 대각선 빙고 검색
 - 종료조건은 3빙고

 =대전모드=
 - 플레이어 빙고판 만들기
 - 컴퓨터도 플레이
 - 빙고가능성 체크
*/