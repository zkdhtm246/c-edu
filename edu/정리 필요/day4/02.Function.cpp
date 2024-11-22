#include<iostream>
/*******************************************************************************
[변수의 존재기간과 접근범위]
- 변수는 선언되는 위치에 따라 크게 전역변수와 지역변수로 나뉜다.
- 메모리상에 존재하는 기간과 접근할 수 있는 범위에 대한 차이점이 있다.

1. 지역변수
 - 지역변수는 중괄호 내에 선언되는 변수는 모두 지역변수
 - 활동영역은 변수가 선언된 블록내에서만 유효. 블록이 끝나면 지역변수는 메모리에서 사라짐.


2. 전역변수
 - 블록 외부에서 정의. 프로그램 전체에 접근 가능
 - 프로그램 내 모든 함수에서 접근 가능
 - 프로그램 실행시작시 생성이 되고 프로그램이 종료가 되면 소멸
 - 전역변수는 지양해야한다. 데이터 및 유지보수에 어려움이 생김

*******************************************************************************/


//전역변수
int GlobalVariableNum = 10;

void GlobalVariableNum()
{
	std::cout << "여기서도 접근이 됨" << GlobalVariableNum << std::endl;
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
	std::cout << "지역변수 myFuncOneNum의 데이터 : " << myFuncOneNum << std::endl;
}
void MyFuncTwo()
{
	int num1 = 10;
	int num2 = 10;
	num1++;
	num2--;
	std::cout << "지역변수 num1의 데이터 : " << std::endl;
	std::cout << "지역변수 num2의 데이터 : " << std::endl;
}


////매개변수에 사용 시, 함수 내부에서 변경하는걸 막음.
//int Sum(const int a, int b)
//{
//	a = 5;
//	return a + b;
//}

//default 매개변수. 미리 지정된 매개변수
int Sum(int a, int b = 5, int c)
{
	return a + b + c;
}



int main()
{
	//함수호출
	MyFuncOne();
	MyFuncTwo();
	
	std::cout << GlobalVariableNum << std::endl;

	
	//상수화. 변경할 수 없음. 안정성 보장
	//선언과 초기화를 같이 해야함
	const int a = 1;
	//a = 2;

	int result = Sum(11, 5, 6);
	std::cout << result << std::endl;
}
