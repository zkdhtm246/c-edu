/***********************************************************
[�Լ� �����ε�]
 - ������ �Լ� �̸��� ����Ͽ� �Ű������� Ÿ��, ����, �Ǵ� ������ �ٸ��� �����ϴ� ��.
 - ����� �۾��� �����ϴ� ���� �Լ��� ���� ��, �� �Լ��� �ٸ� �̸��� �ο��ϴ� ��ſ� �Լ� �����ε��� ����ϸ�,
   �ڵ��� �������� ���Ǹ� �ϳ��� �Լ� �̸����� �پ��� ������ �Լ��� ȣ�� ����


[�Լ� �����ε��� ��������]
1. �Լ� �̸��� �����ؾ� �ȴ�.
2. ����Ÿ���� �������� �ƴϴ�.
3. �Ű������� ������ Ÿ���� �ٸ��ų� ������ �޶���Ѵ�.

&& ���⼭ üũ &&
 - 1. �Լ� �����ε��� �����ΰ���? �ٿ���
 - 2. �Լ� �����ε��� �������̵��� �������� �����ΰ���? 
***********************************************************/

#include<iostream>

//void PrintValue(int value) 
//{
//	std::cout << "������ : " << value << std::endl;
//}
//void PrintValue(double value)
//{
//	std::cout << "�Ǽ��� : " << value << std::endl;
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Add(int a, int b, int c)
//{
//	return a + b + c;
//}

int plus(int a, int b)
{
	return a + b;
}
double plus(double a, double b)
{
	return a + b;
}
void printPlus(int a, int b)
{
	std::cout << plus(a, b) << std::endl;
}
void printPlus(double a, double b)
{
	std::cout << plus(a, b) << std::endl;
}


int quadrangle(int a, int b)
{
	return a * b;
}
double circle(double a)
{
	return a * a * 3.14;
}


int main()
{
	//PrintValue(1);
	//PrintValue(1.5);

	//Add(1, 2);
	//Add(1, 2, 3);



	/*
	 1. ���ϱ�, ����, ���ϱ�, ������ �Լ� �����
	  - �����ε��� ����� Ȱ���ؼ� ���� ������, �Ǽ����� �����
	 2. �簢���� ���� ������ ����ϴ� �Լ� �����
	  - ����� �����ؾ���
	
	
	*/

	printPlus(1, 2);
	printPlus(1.2, 1.6);

	std::cout << quadrangle(4,5) << std::endl;

	
	std::cout << circle(1.5) << std::endl;
	


}