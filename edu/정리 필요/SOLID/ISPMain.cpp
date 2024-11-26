/**********************************************************************
I(Interface Segregation Principle, ISP, �������̽� �и� ��Ģ)
- Ŭ���̾�Ʈ�� ������� ���� �޼��忡 �������� �ʾƾ� �ϴ� ��Ģ
- �������̽��� ������� �ʿ信 �°� �۰� ��ü������ ����. Ŭ���̾�Ʈ�� ���ʿ��� ��ɿ� �������� �ʵ���
- ��, Ư�� Ŭ���̾�Ʈ�� �ʿ�� �ϴ� ��ɸ��� �����ϴ� �������̽��� ����
**********************************************************************/

#include<iostream>
using namespace std;
class Animal {
public:
	virtual void Eat() = 0;
	virtual void Sleep() = 0;
	virtual void Fly() = 0;
	virtual void Swim() = 0;
};
class Dog :public Animal {
public:
	void Eat() override {
		cout << "��ƿ��";
	}
	void Sleep() override {
		cout << "�޸� ���� �����";
	}
	void Fly() override {
		cout << "�� ������ ���µ�";
	}
	void Swim() override {
		cout << "��Ʈ������ ��Ʈ����";
	}
};
class EatBehavior {
public:
	virtual void Eat() = 0;
};
class SleepBehavior {
public:
	virtual void Sleep() = 0;
};
class Dog {

};
class FlyBehavior {
public:
	virtual void Fly() = 0;
};
class SwimBehavior {
public:
	virtual void Eat() = 0;
};