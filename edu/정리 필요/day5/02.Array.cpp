/**************************************************************************
**************************************************************************/


#include<iostream>


int main()
{
	
	srand(time(0));

	//int number[10];

	////�ʱ�ȭ
	//for (int i = 0; i < 10; i++)
	//{
	//	number[i] = i; //0��° �ε����� 0 ����
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << "number[" << i << "]�ε��� : " << number[i] << std::endl;
	//}
	//���� �� ������

	//���ÿ� ������..
	//int dest, sour, temp;

	//for (int i = 0; i < 1000; i++)
	//{
	//	dest = rand() % 10; //0~9 
	//	sour = rand() % 10; //0~9

	//	temp = number[dest]; //temp = number[3] -> 1
	//	number[dest] = number[sour]; //number[3] = number[5];
	//	number[sour] = temp; //number[5] = temp;
	//}
	//std::cout << "======���� �� ������======" << std::endl;
	////���� �� ������
	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << "number[" << i << "]�ε��� : " << number[i] << std::endl;
	//}

	//�̹��� ����� ���� �ζǹ�ȣ�� �����

	//std::cout << "=======�ζ� ��ȣ ������=======" << std::endl;
	//int lotto[45];
	//int dest, sour, temp;

	////�迭 �ʱ�ȭ(0~44������ �ε����� �����ϸ鼭 1~45�� �����Ѵ�.)
	//for (int i = 0; i < 45; i++)
	//{
	//	lotto[i] = i + 1;
	//}

	//for (int i = 0; i < 777; i++)
	//{
	//	dest = rand() % 45;
	//	sour = rand() % 45;
	//	temp = lotto[dest];
	//	lotto[dest] = lotto[sour];
	//	lotto[sour] = temp;
	//}

	//for (int i = 0; i < 6; i++)
	//{
	//	std::cout << "�̹��� ����� ��ȣ��? : " << lotto[i] << " , ";
	//}

	//�ǽ�
	//10���� �л� ������ �Է�. �迭�� �����ϰ� ������ ����� ���ض�.

	std::cout << "==========�л�������==========" << std::endl;
	int student[10];
	int su;
	int total = 0;
	double average;

	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << "��° �л� : ";
		std::cin >> student[i]; //for���� ���鼭 �Է¹��� ��� �����͸� �迭�� �����Ѵ�.
	}

	for (int i = 0; i < 10; i++)
	{
		total += student[i];
	}

	average = total / 10;

	std::cout << "���� : " << total << std::endl;
	std::cout << "��� : " << average << std::endl;
}