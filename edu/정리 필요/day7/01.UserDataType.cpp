/************************************************************
[����ü UserDataTypes]
 - ����ü�� �������� ������ ���� �ϳ��� ������ ������ �����ϴ� ����� ���� ������ ����--->C���� �ش�
 - ����ü�� ������ ������ ����� ������ �̷��� ������� ���� �ٸ� ������ Ÿ���� �� �ִ�.
 - C++������ �Լ��� ������ �����ϴ�.
 - ����ü �е� ���� ����

//Ű����, ����ü �̸�
struct MyStruct
{
	//���⿡ �ʿ��� ������� ����...
};

************************************************************/

#include<iostream>
//�л��� ���õ� ������ ����ٸ�...

struct Student
{
	int age; //�л� ����
	int phoneNumber; //�л� ��ȭ��ȣ
	std::string name; //�л��̸�

};
struct Point
{
	int x;
	int y;

	void Print(); //C++������ �Լ��� ����� ����
};
struct Person
{
	std::string name;
	std::string phoneNumber;
	int age;
};


struct Test
{
	short s; //2
	int i; //4
	char c; //1
	
};


int main()
{
	//
	Student st;

	st.name = "������";
	st.age = 10;
	st.phoneNumber = 1234;

	std::cout << "�̸� : " << st.name << std::endl;
	std::cout << "���� : " << st.age << std::endl;
	std::cout << "��ȭ��ȣ : " << st.phoneNumber << std::endl;

	Point p;
	p.x = 10;
	p.y = 20;


	Point p1 = { 50,102 }; //������ ���ÿ� �ʱ�ȭ
	std::cout << "����ü p.x�� �� : " << p1.x << std::endl;
	std::cout << "����ü p.y�� �� : " << p1.y << std::endl;
	
	Person person[3];
	person[0].name = "ȫ�浿";
	person[0].phoneNumber = "010-1234";
	person[0].age = 20;

	person[1].name = "ȫ��tj";
	person[1].phoneNumber = "010-1234";
	person[1].age = 20;

	person[2].name = "ȫ��ska";
	person[2].phoneNumber = "010-1234";
	person[2].age = 20;

	//���..

	Person person1[3] = {
		{"ȫ�浿","010",50},
		{"ȫ�浿","010",50},
		{"ȫ�浿","010",50}
	};
	for (int i = 0; i < 3; i++)
	{
		std::cout << person1[i].name << " , " << person1[i].phoneNumber << " , " << person1[i].age << std::endl;
	}

	Test t;
	std::cout << sizeof(t) << std::endl;

}

void Point::Print()
{
	std::cout << "���� Point����ü�� ��� �Լ���" << std::endl;
}
