/***********************************************************
[함수 오버로딩]
 - 동일한 함수 이름을 사용하여 매개변수의 타입, 개수, 또는 순서를 다르게 정의하는 것.
 - 비슷한 작업을 수행하는 여러 함수가 있을 때, 각 함수에 다른 이름을 부여하는 대신에 함수 오버로딩을 사용하면,
   코드의 가독성이 향상되며 하나의 함수 이름으로 다양한 형태의 함수를 호출 가능


[함수 오버로딩의 성립조건]
1. 함수 이름이 동일해야 된다.
2. 리턴타입은 고려대상이 아니다.
3. 매개변수의 데이터 타입이 다르거나 개수가 달라야한다.

&& 여기서 체크 &&
 - 1. 함수 오버로딩이 무엇인가요? 다영성
 - 2. 함수 오버로딩과 오버라이딩의 차이점은 무엇인가요? 
***********************************************************/

#include<iostream>

//void PrintValue(int value) 
//{
//	std::cout << "정수값 : " << value << std::endl;
//}
//void PrintValue(double value)
//{
//	std::cout << "실수값 : " << value << std::endl;
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
	 1. 더하기, 빼기, 곱하기, 나누기 함수 만들기
	  - 오버로딩의 기능을 활용해서 각각 정수형, 실수형을 만들기
	 2. 사각형과 원의 면적을 계산하는 함수 만들기
	  - 출력이 가능해야함
	
	
	*/

	printPlus(1, 2);
	printPlus(1.2, 1.6);

	std::cout << quadrangle(4,5) << std::endl;

	
	std::cout << circle(1.5) << std::endl;
	


}