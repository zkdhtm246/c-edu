#include<iostream>
/*******************************************************************************
[������ ����Ⱓ�� ���ٹ���]
- ������ ����Ǵ� ��ġ�� ���� ũ�� ���������� ���������� ������.
- �޸𸮻� �����ϴ� �Ⱓ�� ������ �� �ִ� ������ ���� �������� �ִ�.

1. ��������
 - ���������� �߰�ȣ ���� ����Ǵ� ������ ��� ��������
 - Ȱ�������� ������ ����� ��ϳ������� ��ȿ. ����� ������ ���������� �޸𸮿��� �����.


2. ��������
 - ��� �ܺο��� ����. ���α׷� ��ü�� ���� ����
 - ���α׷� �� ��� �Լ����� ���� ����
 - ���α׷� ������۽� ������ �ǰ� ���α׷��� ���ᰡ �Ǹ� �Ҹ�
 - ���������� �����ؾ��Ѵ�. ������ �� ���������� ������� ����

*******************************************************************************/


//��������
int GlobalVariableNum = 10;

void GlobalVariableNum()
{
	std::cout << "���⼭�� ������ ��" << GlobalVariableNum << std::endl;
}

void LocalVariable()
{
	int num = 1;
	{
		num = 2;

		int num1 = 5;
	}
}

void MyFuncOne()
{
	int myFuncOneNum = 10;
	myFuncOneNum++;
	std::cout << "�������� myFuncOneNum�� ������ : " << myFuncOneNum << std::endl;
}
void MyFuncTwo()
{
	int num1 = 10;
	int num2 = 10;
	num1++;
	num2--;
	std::cout << "�������� num1�� ������ : " << std::endl;
	std::cout << "�������� num2�� ������ : " << std::endl;
}


////�Ű������� ��� ��, �Լ� ���ο��� �����ϴ°� ����.
//int Sum(const int a, int b)
//{
//	a = 5;
//	return a + b;
//}

//default �Ű�����. �̸� ������ �Ű�����
int Sum(int a, int b = 5, int c)
{
	return a + b + c;
}



int main()
{
	//�Լ�ȣ��
	MyFuncOne();
	MyFuncTwo();
	
	std::cout << GlobalVariableNum << std::endl;

	
	//���ȭ. ������ �� ����. ������ ����
	//����� �ʱ�ȭ�� ���� �ؾ���
	const int a = 1;
	//a = 2;

	int result = Sum(11, 5, 6);
	std::cout << result << std::endl;
}
