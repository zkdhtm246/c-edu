#include<iostream>

//��ũ�� �Լ�?
//�Լ��� �ƴ�. �������� �̸� ��ü��Ŵ
//������� �����
//��������
#define SQUARE(x) (x*x)
//#define NUM 5

const int NUM = 5;

//inline �Լ���?
//�Լ� ȣ�� �Ծ�?
inline int Sum(int a, int b)
{
	return a + b;
}


int main()
{
	//int a = Sum(1, 2);
	//int a = 1 + 2;

	//std::cout << SQUARE(5) << std::endl;		//SQUARE(5) -> ((5)*(5))
	//std::cout << SQUARE(5 + 1) << std::endl;

	//int a = 5;
	int res = SQUARE(5 + 1);
	std::cout << res << std::endl;

	std::cout << NUM << std::endl;


	/*
	������ ����
	1. �÷��̾ �ִ�.	1
	2. ����� �ִ�.		2
	
	3. Attack�̶�� �Լ��� �����(�Ű������� 2��)
		��ù��° �Ű������� �÷��̾ ��Ÿ���� ����Ÿ���̰�,
		���ι�° �Ű������� Ÿ���� �Ǵ� HP
			ex) int playerHP = 100;
				int monsterHP = 100;

				Attack(1, monsterHP);
		������Ÿ���� int�� -> Ÿ���� �Ǵ� HP
	*/
	

}

int Attack(int n, int target)
{

}

int FindMaxNumber(int a, int b)
{
	//�Է¹��� �� ���� �� ū ���ڸ� �����ϴ� �Լ��� ������.
}