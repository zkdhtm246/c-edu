/***************************************************************************

�߻�Ŭ���� : �ϳ� �̻��� ���������Լ��� ������ Ŭ����
- �߻�Ŭ������ �ν��Ͻ�ȭ ��ų �� ����
- �ٸ� Ŭ�������� ��ӹ޾ƾ� �ϴ� �⺻ �������̽��� �⺻������ �����ϴµ� ���
- Ư�� �Լ����� �ڽ�Ŭ������ ���� �����ǵ��� ������ -> �ݵ�� �ؾߵ�

***************************************************************************/

/***************************************************************************

Virtual Function VS Pure Virtual Function  -> ��������

1. Virtual Function
- �����θ� ������ �� �ִ�
- �Ļ�Ŭ�������� ���������� �ʾƵ� �ȴ�
- �����Լ������δ� �߻�Ŭ������ ���� �ȵ�
- Ŭ���� �ν��Ͻ�ȭ ����

2. Pure Virtual Function
- �����ΰ� ����
- �Ļ�Ŭ�������� �ݵ�� ������
- ���������Լ��� �ϳ��� ������, �߻�Ŭ���� ����
- �ν��Ͻ�ȭ �Ұ���

***************************************************************************/

/***************************************************************************
[UpCasting]
- �ڽ�Ŭ������ ��ü�� �θ�Ŭ������ Ÿ�� ��ȯ
- �������� �����ϸ� ������� Ÿ�� ��ȯ�� �ʿ����

[DownCasting]
- �θ�Ŭ���� Ÿ���� �ڽ�Ŭ���� Ÿ������ ��ȯ
- 

***************************************************************************/
#include<iostream>
//#include"Player.h"
#pragma region �߻�
/*Player* p = new Player("ȫ", 10);

p->Attack();
p->TakeDamage(10);

delete p;
p = nullptr;

Unit* u = new Unit("ddd", 10);*/
#pragma endregion

class Shape {
public:
	 void Draw()const {
		std::cout << "�θ� Ŭ���� shape" << std::endl;
	}
	 ~Shape() {};
};
class Circle :public Shape {
public:
	void Draw()const  {
		std::cout << "�ڽ� Ŭ���� Circle" << std::endl;
	}
	void CircleFunction() {
		std::cout << "CircleŬ������ ����Լ�" << std::endl;
	}
};
class Rectangle :public Shape {
public:
	void Draw()const {
		std::cout << "�ڽ� Ŭ���� Rectangle" << std::endl;
	}
	void RectangleFunction() {
		std::cout << "RectangleŬ������ ����Լ�" << std::endl;
	}
};


int main() {

	Shape* shape1 = nullptr;
	Shape* shape2 = nullptr;
	//��ĳ���� : �ڽ�Ŭ���� ��ü�� �θ�Ŭ���� Ÿ���� �����ͷ�...
	shape1 = new Circle();
	shape2 = new Rectangle();

	//�ڽ�Ŭ������ ����Լ��� ȣ��
	shape1->Draw();
	shape2->Draw();

	//�ٿ�ĳ����, �����ؼ� ������
	/*Circle* c = (Circle*)shape1;
	c->CircleFunction();*/

	Circle* c = dynamic_cast<Circle*>(shape1);
	c->CircleFunction(); //�ڽ�Ŭ���� ����Լ� ȣ��, �����Լ� �ʿ�

	Rectangle* r = dynamic_cast<Rectangle*>(shape2);
	r->RectangleFunction();

	shape1->Draw();
	shape2->Draw();

}

/*
1. RTTI (��Ÿ�� Ÿ�� �������̼�) ����
2. �����Լ��� ���������Լ�
3. �߻�Ŭ����
4. ����/�������ε�
5. ��/�ٿ�ĳ����

-�������� �����ϴ� ����-
- �������
 - 5x5
 - ���ڸ� ���� ��� �ش� ĭ�� ��ȣ(#,* ��)�� �ٲ�
 - ����, ����, �밢�� ���� �˻�
 - ���������� 3����

 =�������=
 - �÷��̾� ������ �����
 - ��ǻ�͵� �÷���
 - �����ɼ� üũ
*/