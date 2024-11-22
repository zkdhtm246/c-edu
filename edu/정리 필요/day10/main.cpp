/**************************************************************************
[overriding]
- �ڽ�Ŭ������ �θ�Ŭ������ �޼��带 �������Ͽ� �ڽ��� ������� �����ϰ� ����� ��ü���� ���α׷����� �߿��� ����
- �Լ��̸��� �Ű������� �θ�Ŭ������ �Լ��� �����ؾ���
- �ڽ�Ŭ������ �θ�Ŭ������ �Լ��� �����ϰų� Ȯ���ų �� �ִ�.

[virtual]
- �θ�Ŭ������ �Լ��� ���̸�, �ش� �Լ��� �������̵� �������� ��Ÿ����

[override]
- �ڽ�Ŭ�������� �Լ��� �θ�Ŭ������ �Լ��� ��Ȯ�� �������̵� �ߴ��� Ȯ��





**************************************************************************/



#include<iostream>

//�θ�Ŭ����
class Vehicle {
protected:
	std::string name;
public:
	Vehicle(const std::string& n) :name(n) {
		std::cout << "�θ� Ŭ���� ������ ȣ��!" << std::endl;
	}

	virtual void Move()const {
		std::cout << name << "�� �θ� Ŭ���� �Լ� ȣ��" << std::endl;
	}
	virtual~Vehicle() = default;
};

//Vehicle ���
//���� �ڽ� Ŭ����
class Car :public Vehicle{
public:
	Car(const std::string& n) :Vehicle(n) {
		std::cout << "�ڽ� Ŭ����(Car) ������ ȣ��" << std::endl;
	}
	void Move()const override {
		std::cout << name << "�� �ڽ� Ŭ���� �ڵ��� �Լ� ȣ��" << std::endl;
	}
	~Car() {
		std::cout << "�ڽ� Ŭ����(Car) �Ҹ��� ȣ��" << std::endl;
	}
};

class Vike :public Vehicle {
public:
	Vike(const std::string& n) :Vehicle(n) {
		std::cout << "�ڽ� Ŭ����(Vike) ������ ȣ��" << std::endl;
	}
	void Move()const {
		std::cout << name << "�� �ڽ� Ŭ���� �ڵ��� �Լ� ȣ��" << std::endl;
	}
	~Vike() {
		std::cout << "�ڽ� Ŭ����(Vike) �Ҹ��� ȣ��" << std::endl;
	}
};


int main() {

	Vehicle* v;
	v = new Car("������");
	v->Move();

	delete v;
}

