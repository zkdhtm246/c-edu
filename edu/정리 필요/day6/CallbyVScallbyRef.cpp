/************************************************************************
단골면접질문

callbyValue

callbyReference



*************************************************************************/


#include<iostream>

using namespace std;

//함수에 인수를 전달할 때, 인수의 값이 복사되어 함수의 매개변수로 전달된다.
//따라서 함수 내부에서 매개변수를 변경하더라도, 호출한 함수의 실제 인수는 변하지 않는다.
void Value(int n);
//===============================================================================
//함수 호출 시, 인수로 변수의 주소를 전달하는 방식.
//함수가 매개변수로 받은 포인터를 통해 실제 인수의 값을 직접 수정할 수 있다.
//함수 내부에서 매개변수의 값을 변경하면, 호출한 함수의 실제 인수도 변경된다.
//값을 복사하는 대신 주소를 전달하므로 메모리와 성능 효율이 좋다.
void Address(int* n);
//===============================================================================

//함수 호출 시, 인수로 변수의 참조(별명)를 전달
//함수가 해당 참조를 통해 실제 인수에 접근하여 값을 직접 수정할 수 있다.
//참조를 사용하면 메모리 주소를 직접 다루지 않아도 되기 때문에 안전하다.
void Reference(int& n);
//===============================================================================

/*
 *와 & 전달방식
 - * : 변수의 메모리 주소를 전달. 함수 내부에서 포인터를 통해 값을 수정
 ㄴ함수 호출 시, 변수의 주소를 명시적 전달.

 - & : 변수의 별칭을 전달하며 함수 내부에서 직접 값을 수정
 ㄴ함수 호출 시, 변수의 참조를 암시적으로 전달.
 
 
*/

//전달된 두 변수의 값을 교환하려고 하지만 값에 의한 것이므로 실제로 호출한 함수의 값은 변경되지 않는다.
void Swap(int a, int b);
//주소를 사용하여 변수를 직접 변경
//변수의 주소를 전달받아 그 주소의 값을 바꾸므로, 실제 변수의 값이 변경된다.
void SwapAddr(int* a, int* b);
//참조를 사용하여 값을 직접 변경
//변수의 참조를 받아서 변수를 직접 바꾸는 방식으로 값에 의한 것처럼 간단하지만 실제 변수가 변경된다.
void SwapRef(int& a, int& b);

int main()
{
	//int num = 30;
	//Value(num); //n = num 형태로 복사
	//cout << "num의 값 : " << num << endl;
	//cout << "num의 주소값 : " << &num << std::endl;
	//cout << "======================================" << endl;

	//int num1 = 30;
	//Address(&num1);
	//cout << "num의 값 : " << num1 << endl;
	//cout << "num의 주소값 : " << &num1 << std::endl;
	//cout << "======================================" << endl;

	//int num2 = 30;
	//Reference(num2);
	//cout << "num의 값 : " << num2 << endl;
	//cout << "num의 주소값 : " << &num2 << std::endl;
	//cout << "======================================" << endl;

	int num1 = 10;
	int num2 = 20;

	cout << "스왑 전 데이터 : " << num1 << " , " << num2 << endl;
	Swap(num1, num2);
	cout << "스왑 후 데이터 : " << num1 << " , " << num2 << endl;
	cout << "=================================================" << endl;

	int swapAddNum1 = 10;
	int swapAddNum2 = 20;

	cout << "스왑 전 데이터 : " << swapAddNum1 << " , " << swapAddNum2 << endl;
	SwapAddr(&swapAddNum1, &swapAddNum2);
	cout << "스왑 후 데이터 : " << swapAddNum1 << " , " << swapAddNum2 << endl;
	cout << "=================================================" << endl;

	int swapRefNum1 = 10;
	int swapRefNum2 = 20;

	cout << "스왑 전 데이터 : " << swapRefNum1 << " , " << swapRefNum2 << endl;
	SwapRef(swapRefNum1, swapRefNum2);
	cout << "스왑 후 데이터 : " << swapRefNum1 << " , " << swapRefNum2 << endl;
	cout << "=================================================" << endl;
}

//
//이 함수는 매개변수 n이 실제로 전달된 변수의 값을 복사받는다.
//따라서 함수 내에서 n의 값을 변경해도, 메인함수에서 전달된 원본변수에는 영향을 미치지 않는다.
void Value(int n)
{
	n = 10; //n을 10으로 변경하지만, 이 변경은 함수 내부에서만 적용
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소값 : " << &n << endl;
}
//이 함수에서는 포인터로 변수의 주소를 전달
//포인터를 통해 원래 변수가 저장된 메모리 위치에 직접 접근하여 값을 수정할 수 있다.
void Address(int* n)
{
	*n = 10; //n이 가리키는 주소의 값을 10으로 변경 -> 실제 변수가 변경된다.
	cout << "n의 값 : " << *n << endl;
	cout << "n의 주소값 : " << &n << endl;
}

void Reference(int& n)
{
	n = 10;
	cout << "n의 값 : " << n << endl;
	cout << "n의 주소값 : " << &n << endl;
}

void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "Swap()함수 내부의 값 : ";
	cout << a << " , " << b << endl;
}

void SwapAddr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SwapRef(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
class a
{

};

struct 캐릭터
{
	//여기에 캐릭터 관련된 무언가들이...hp, atk 등
};
void 싸우는함수(캐릭터 a, 캐릭터 b)
{
	
}