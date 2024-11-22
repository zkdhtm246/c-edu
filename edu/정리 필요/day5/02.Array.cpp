/**************************************************************************
**************************************************************************/


#include<iostream>


int main()
{
	
	srand(time(0));

	//int number[10];

	////초기화
	//for (int i = 0; i < 10; i++)
	//{
	//	number[i] = i; //0번째 인덱스에 0 저장
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << "number[" << i << "]인덱스 : " << number[i] << std::endl;
	//}
	//셔플 전 데이터

	//셔플용 변수들..
	//int dest, sour, temp;

	//for (int i = 0; i < 1000; i++)
	//{
	//	dest = rand() % 10; //0~9 
	//	sour = rand() % 10; //0~9

	//	temp = number[dest]; //temp = number[3] -> 1
	//	number[dest] = number[sour]; //number[3] = number[5];
	//	number[sour] = temp; //number[5] = temp;
	//}
	//std::cout << "======셔플 후 데이터======" << std::endl;
	////셔플 후 데이터
	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << "number[" << i << "]인덱스 : " << number[i] << std::endl;
	//}

	//이번주 대박을 위해 로또번호를 만들기

	//std::cout << "=======로또 번호 생성기=======" << std::endl;
	//int lotto[45];
	//int dest, sour, temp;

	////배열 초기화(0~44까지의 인덱스에 접근하면서 1~45를 저장한다.)
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
	//	std::cout << "이번주 행원의 번호는? : " << lotto[i] << " , ";
	//}

	//실습
	//10명의 학생 성적을 입력. 배열에 저장하고 총점과 평균을 구해라.

	std::cout << "==========학생성적부==========" << std::endl;
	int student[10];
	int su;
	int total = 0;
	double average;

	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << "번째 학생 : ";
		std::cin >> student[i]; //for문을 돌면서 입력받은 어떠한 데이터를 배열에 저장한다.
	}

	for (int i = 0; i < 10; i++)
	{
		total += student[i];
	}

	average = total / 10;

	std::cout << "총점 : " << total << std::endl;
	std::cout << "평균 : " << average << std::endl;
}