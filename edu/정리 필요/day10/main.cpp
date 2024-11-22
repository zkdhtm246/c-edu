/**************************************************************************
[overriding]
- 자식클래스가 부모클래스의 메서드를 재정의하여 자신의 방식으로 동작하게 만드는 객체지향 프로그래밍의 중요한 개념
- 함수이름과 매개변수가 부모클래스의 함수와 동일해야함
- 자식클래스가 부모클래스의 함수를 변경하거나 확장시킬 수 있다.

[virtual]
- 부모클래스의 함수에 붙이며, 해당 함수가 오버라이딩 가능함을 나타낸다

[override]
- 자식클래스에서 함수가 부모클래스의 함수를 정확히 오버라이딩 했는지 확인





**************************************************************************/



#include<iostream>

//부모클래스
class Vehicle {
protected:
	std::string name;
public:
	Vehicle(const std::string& n) :name(n) {
		std::cout << "부모 클래스 생성자 호출!" << std::endl;
	}

	virtual void Move()const {
		std::cout << name << "의 부모 클래스 함수 호출" << std::endl;
	}
	virtual~Vehicle() = default;
};

//Vehicle 상속
//여긴 자식 클래스
class Car :public Vehicle{
public:
	Car(const std::string& n) :Vehicle(n) {
		std::cout << "자식 클래스(Car) 생성자 호출" << std::endl;
	}
	void Move()const override {
		std::cout << name << "의 자식 클래스 자동차 함수 호출" << std::endl;
	}
	~Car() {
		std::cout << "자식 클래스(Car) 소멸자 호출" << std::endl;
	}
};

class Vike :public Vehicle {
public:
	Vike(const std::string& n) :Vehicle(n) {
		std::cout << "자식 클래스(Vike) 생성자 호출" << std::endl;
	}
	void Move()const {
		std::cout << name << "의 자식 클래스 자동차 함수 호출" << std::endl;
	}
	~Vike() {
		std::cout << "자식 클래스(Vike) 소멸자 호출" << std::endl;
	}
};


int main() {

	Vehicle* v;
	v = new Car("현기차");
	v->Move();

	delete v;
}

