/****************************************************************************
[연산자 재정의(operator Overloading)]

- 사용자 정의 자료형이나 클래스의 연산자를 재정의하여 여러의미로 사용함
- 객체 간의 산술연산, 비교, 대입 등을 가능하게 해준다
- 단, 일부 연산자는 오버로딩을 할 수 없다.

<연산자 재정의>
- 반환형 operator연산자기호(매개변수 목록){함수 내용}
- 기본 연산자의 연산을 함수로 재정의하여 기능을 구현

****************************************************************************/

#include<iostream>

struct Point {
	float x;
	float y;

	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}

	//재정의
	Point operator+(const Point& other) {
		return Point(this->x + other.x, this->y + other.y);
	}

	void Print()const {
		std::cout << "(" << x << "," << y << ")";
	}
};

Point operator-(const Point& left, const Point& right) {
	return Point(left.x - right.x, left.y - right.y);
}


int main() {
	Point vec1 = Point(2, 2);
	Point vec2 = Point(3, 4);

	Point add = vec1 + vec2;
	Point sub = vec1 - vec2;

	std::cout << "vec1 + vec2 = ";
	add.Print();
	std::cout << std::endl;

	std::cout << "vec1 - vec2 = ";
	sub.Print();
	std::cout << std::endl;
}