/*********************************************************************************************
[정적바인딩 VS 동적바인딩]
- 바인딩 : 묶는다
ㄴ 함수가 호출될 때, 함수의 주소를 연결

1. 정적바인딩
- 컴파일 타임에 함수 호출이 어떤 함수를 연결될지 결정하는 방식
- 컴파일 타임에 결정되기 때문에 실행속도 빠름. 이미 컴파일하는 타임에 모든 것이 결정되기 때문에
  런타임 성능에 영향을 미치지 않음

2. 동적바인딩
- 가상함수와 가상함수 테이블과 관련이 있음
- 런타임에 함수 호출이 어떤 함수로 연결될지 결정하는 방식->바인딩을 실행시간에 결정하도록 미뤄놨다가...호출
- 오버라이딩된 가상함수를 동적으로 찾아 호출. 실행 중에 결정이 되기 때문에 상대적으로 오버헤드가 발생될 수 있음
- 어떤 포인터에의해 접근 되었는지에 상관없이 참조된 인스턴스의 실제 클래스형에 따라 재정의된 함수 호출 가능

[VTable] //추가 공부 필요
- 가상함수 테이블은 각 클래스가 가지고 있는 가상함수에 대한 포인터를 저장하는 테이블
- 각 클래스는 자신만의 가상함수 테이블을 가지고 있으며, 테이블은 해당 클래스의 가상함수들이 메모리의 어느 위치에 있는지 가리킴
- 객체가 생성될 때 해당 객체는 그 클래스의 가상함수 테이블을 가리키는 포인터를 가지며, 런타임에 적절한 함수가 호출됨



*********************************************************************************************/
#include<iostream>

class A {
public:
	void Print(int i) {
		std::cout << "int형 매개변수를 받는 Print함수" << i << std::endl;
	}
	void Print(double d) {
		std::cout << "double형 매개변수를 받는 Print함수" << d << std::endl;
	}
};
class Parent {
public:
	virtual void Show()const {
		std::cout << "부모" << std::endl;
	}
};
class Child :public Parent {
	void Show()const override {
		std::cout << "자식" << std::endl;
	}
};

int main() {

	A a;
	a.Print(10);
	a.Print(10.5);

	Parent* p = new Child(); //부모클래스 포인터가 자식을..
	p->Show(); //동적바인딩
}