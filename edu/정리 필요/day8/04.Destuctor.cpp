/********************************************************************
[�Ҹ���]
- ��ü�� �Ҹ�� ��, �ڵ����� ȣ��Ǵ� �Լ�
- �Ű������� ����
- ��ȯ�� ����
- �����ε� �Ұ�


********************************************************************/

#include<iostream>

class MyClass
{
public:
	//������
	MyClass(int size);
	//�Ҹ���
	~MyClass();

private:
	int* data;
};

//����
MyClass::MyClass(int size)
{
	data = new int[size];
	std::cout << "���� ������" << std::endl;
}
//�Ҹ�
MyClass::~MyClass()
{
	delete[] data;
	data = nullptr;
	std::cout << "�Ҹ���" << std::endl;
}


int main()
{

	MyClass* m = new MyClass(10);

	delete m;

}