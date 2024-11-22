/*******************************************************************************
[클래스]
 - 객체지향프로그래밍(C++), 절차지향프로그래밍(C)
 ㄴ 객체지향 프로그래밍은 우리가 살고 있는 실제 세계가 객체들로 구성되어 있는 것처럼 소프트웨어도 객체로 구성하는 방법이다
 ㄴ 실제 세계에서는 사람, 텔레비전, 세탁기, 기타 등등.. 많은 객체가 존재하고 객체 나름대로의 고유한 기능을 수행하면서 다른 객체들과 상호작용함

[클래스의 기본구조]

 1. 클래스 정의
  - 클래스는 class 키워드로 정의


 2. 멤버변수
  - 클래스 내부에 정의된 변수로 객체의 상태(속성)를 저장


 3. 멤버함수
  - 클래스 내부에 선언되고, 구현과 객체의 동작을 정의


  [객체란?]
  - 클래스는 객체를 정의하는 틀이나 설계도
  - 객체는 설계도를 기반으로 실체화

  [접근제어 지시자]
  - private:   클래스 내부에서만 참조 가능 (멤버변수)
  - public:    외부에서 자유롭게 참조 가능 (멤버함수)
  - protected: 클래스 내부와 상속관계에 있는 클래스에서만 접근이 가능


					클래스 내부			클래스 외부				상속 클래스
  private:				o					x						x
  public:				o					o						o
  protected:			o					x						o


  [정적할당과 동적할당]
  1. 정적
  - 컴파일 시점에 메모리 크기가 결정
  - 프로그램이 종료될 때까지 자동으로 관리됨
  - 크기를 미리 지정해야하므로 유연성이 떨어지고, 메모리 공간이 고정되므로 비효율적일 수도 있다

  2. 동적
  - 런타임에 메모리 크기가 결정
  - 힙
  - 크기를 유연하게 조절할 수 있으며, 런타임 중 필요한 만큼 메모리를 할당
  - 직접 관리해야하기 때문에 메모리 누수 위험성이 있다
  - 동적할당 후 반드시 해제해야한다
  - 크기를 미리 알 수 없거나, 실행 중에 변경될 가능성이 있는 경우

*******************************************************************************/


struct SCircle
{
//기본으로 public: 붙어 있음
	int radius;
	std::string color;

	double calcArea()
	{
		return 3.14 * radius * radius;
	}

};

class CCircle
{
//기본으로 private: 붙어 있음
private:
	int radius;
	std::string color;

public:
	double calcArea()
	{
		return 3.14 * radius * radius;
	}

};


class student {

private:
	//여기에 멤버변수
public:
	//여기에 멤버함수
	void Print()
	{
		//여기에 구현을 해도 상관은 없음
	}
	void Print(int a);

};
#include<iostream>

priuntint(int)

printchar

int main()
{
	//구조체
	SCircle sc;
	sc.radius = 5;
	sc.calcArea();
	
	//클래스
	//CCircle cc;
	
	CCircle* c = new CCircle();

}

void student::Print(int a, int b)
{
	std::cout << a << " , " << b << std::endl;
}
