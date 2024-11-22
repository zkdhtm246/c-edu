/****************************************************************
[형변환]
 - 변수나 값을 한 데이터 타입에서 다른 데이터 타입으로 변환하는 작업.

 1. 암시적(묵시적) 형변환
  - 컴파일러가 자동으로 자료형을 변환
  - 주로 작은 자료형이 큰 자료형으로 변환
  - 큰 자료형을 작은 자료형으로 변환은 가능하지만 데이터 손실이 발생할 가능성이 있다.


 2. 명시적 형변환
  - 사용자가 직접 형변환을 한다.

 [C 스타일 명시적 형변환]

  - 문법적으로 간단. 괄호 안에 원하는 데이터 타입을 명시하여 변수나 값을 변환
  - (target_type)value
  - (target_type) : 변환하려는 데이터 타입
  - value : 변환 대상 값
  - 포인터, 기본형, 사용자 정의 타입 등, 거의 모든 데이터 타입에 대해 적용 가능
  - C++ 형변환 방식에 비해 어떤 변환이 이루어지는지 명확하지 않을 수 있음.
  - 잘못된 형변환으로 인해 런타임 오류나 데이터 손실이 발생될 수 있다.

 [C++ 명시적 형변환]
  
  - 형변환을 더 안전하고 명확하게 하기 위해 캐스트 연산자를 제공
  
  [C++ 캐스팅 종류] ---------------------> 면접 질문, 따로 정리 필요
  1. static_cast : 컴파일 타임에 타입을 변환하는데 사용. 주로 기본 타입 간의 변환에 사용
   - 컴파일러가 변환이 가능한지 검사하기 때문에 잘못된 변환을 방지할 수 있다.
   - UpCasting 때도 사용하긴 한다.
   - 복잡한 상속구조에서 타입변환이 혼동을 줄 수 있을 때, 명시적으로 붙히는게 가독성에 도움이 될 수 있다.

  2. dynamic_cast : 런타임에 타입 변환 수행. 주로 DownCasting에 사용
   - 안정성을 보장하며 타입이 맞지 않는다면 nullptr을 반환시킴.
   - RTTI(Runtime Type Information)을 기반으로 작동 -------------> 별도 공부 필요

  3. const_cast : 객체의 상수성을 제거하거나 추가할 때...

  4. reinterpret_cast : 매우 강력하지만...잘못 사용하면 상당한 위험을 초래할 수 있음...

****************************************************************/

#include<iostream>

int main()
{
#pragma region 암시적 형변환

	int a = 1;
	double b = a; //int->double로 형변환

	std::cout << b << std::endl;

#pragma endregion 명지적 형변환 (C)
	int iValue = 10;
	float fValue = (float)iValue; //int->float
	std::cout << "명시적 형변환 후(C) : " << fValue << std::endl;
	double dValue = 3.14;
	int iValue1 = (int)dValue;
	std::cout << "실수가 정수로 변환되어 소수점이 날아간다. : " << iValue1 << std::endl;

	//포인터 타입 변환
	int value = 40;
	void* ptr = (void*)&value;
	int* intPtr = (int*)ptr;


	//static_cast

	int intVal = 10;
	double doubleVal = static_cast<double>(intVal); //int->double

	std::cout << "static_cast 후 : " << doubleVal << std::endl;

	double dd = 3.14;
	char* p = static_cast<char*>(dd);

#pragma endregion
}

