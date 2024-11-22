/****************************************************************************
[������ ������(operator Overloading)]

- ����� ���� �ڷ����̳� Ŭ������ �����ڸ� �������Ͽ� �����ǹ̷� �����
- ��ü ���� �������, ��, ���� ���� �����ϰ� ���ش�
- ��, �Ϻ� �����ڴ� �����ε��� �� �� ����.

<������ ������>
- ��ȯ�� operator�����ڱ�ȣ(�Ű����� ���){�Լ� ����}
- �⺻ �������� ������ �Լ��� �������Ͽ� ����� ����

****************************************************************************/

#include<iostream>

struct Point {
	float x;
	float y;

	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}

	//������
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