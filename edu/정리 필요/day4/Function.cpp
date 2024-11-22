/******************************************************
[함수]
- 자판기
- 특정 작업을 수행하는 코드의 집합
- 코드의 안정성, 에러를 수정하기 쉽다.
- 볼륨이 커지는 프로그램일수록 수정, 유지보수가 쉽지 않기 때문에 기능별로 세분화 하는 것에 유리하다.
- 코드의 재사용성이 좋다.
- 함수 이름을 통해 코드가 무엇을 의미하는지 이해하기 쉽다.



[함수의 형태]
- 기본적으로 함수는 매개변수의 유무와 반환값의 유무에 따라 함수를 네 개의 형태로 나눌 수 있다.
 1. 매개변수와 반환값이 모두 있는 경우
 2. 매개변수가 있고 반환값이 없는 경우
 3. 매개변수가 없고 반환값이 있는 경우
 4. 매개변수가 없고 반환값이 없는 경우

 [아래와 같은 형태가 있다면]

 int : 출력형태(반환)
 Sum : 함수의 이름
 (int x, int y) : 입력형태(매개변수, 파라미터)

 int Sum(int x, int y)
{
	int result;
	result = x + y;
	return result;
}
 1. 매개변수 x, y를 받아 Sum()함수의 기능을 수행하고 출력형태 int형으로 반환하라는 의미
 2. 입력형태 : 입력형태로 설정된 변수를 매개변수, 파라미터라고 한다. 둘 이상의 매개변수를 설정할 필요가 있을 때, 콤마로 구분한다.
 3. 함수의 기능 : 해당 함수내에서 입력변수(매개변수 or 파라미터)를 더해 변수 result에 저장하고 return문이 result를 반환

******************************************************/





#include<iostream>

//1. 매개변수와 반환값이 모두 있는 경우
int Sum(int a, int b)
{
	int result = a + b;
	return result;
}
//2. 매개변수가 있고 반환값이 없는 경우
void Print(int num)
{
	std::cout << num << std::endl;
}
//3. 매개변수가 없고 반환값이 있는 경우
int ReadNum()
{
	int num;
	std::cin >> num;
	return num;
}
//4. 매개변수가 없고 반환값이 없는 경우
void MyPrint()
{
	std::cout << "난 아무 것도 없는 녀석이야" << std::endl;
}
//함수 원형은 헤더파일에
//함수 구현은 cpp에

void MyPrint01(); //원형만 선언(프로토타입)하고 실 구현은 아래..

int main()
{

	//1.
	int result;
	result = Sum(1,2);
	std::cout << result << std::endl;

	//2.
	Print(5);

	//3.
	int result1;
	result1 = ReadNum();
	std::cout << result1 << std::endl;

	//4.
	MyPrint();



}

void MyPrint01()
{
	std::cout << "이히히히" << std::endl;
}
