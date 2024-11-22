
#include<iostream>


using namespace std;
/*
 //포인터
 포인터 변수에 +, -
 -중요한 건 포인터 연산 시, 자료형의 크기에 비례해서 증가 또는 감소


 대입
 - 한 포인터가 다른 포인터와 동일한 메모리 주소를 가리키도록 함.
 - 같은 메모리 주소를 가리키게 되어 위험할 수 있음.
 - 포인터의 타입은 일치해야함.
 - 여러 포인터가 동일한 메모리 주소를 가리키면, 메모리 해제 시 문제가 발생될 수 있다.
*/
int main()
{


	int a;
	int* pa = &a;
	cout << "pa의 값 : " << pa << endl;

	cout << (pa + 1) << endl;
	cout << (pa - 1) << endl;


	int num = 10;
	int* pA = &num;
	int* pB = pA;

	cout << *pA << endl;
	cout << *pB << endl;

	*pA = 20;
	//같은 주소를 가리키고 있기 때문에 변경 후에 pB가 가리키고 있는 값도 
	cout << *pA << endl;
	cout << *pB << endl;

	int intA = 10;
	int* pIntA = &intA;
	//double* dp = pIntA;
}