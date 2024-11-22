
#include<iostream>


int main()
{
	//int arr[4];
	
	//int arr[4][3];

	//arr[0][0] = 1;
	//arr[0][1] = 2;
	//arr[0][2] = 3;

	//arr[1][0] = 4;
	//arr[1][1] = 5;
	//arr[1][2] = 6;

	//arr[2][0] = 7;
	//arr[2][1] = 8;
	//arr[2][2] = 9;

	//arr[3][0] = 10;
	//arr[3][1] = 11;
	//arr[3][2] = 12;

	////메모리 구조상 직선의 형태를 띄고 있음
	//std::cout << arr[0][0] << ", " << arr[0][1] << ", " << arr[0][2] << std::endl;
	//std::cout << arr[1][0] << ", " << arr[1][1] << ", " << arr[1][2] << std::endl;
	//std::cout << arr[2][0] << ", " << arr[2][1] << ", " << arr[2][2] << std::endl;
	//std::cout << arr[3][0] << ", " << arr[3][1] << ", " << arr[3][2] << std::endl;

	//std::cout << &arr[0][0] << ", " << &arr[0][1] << ", " << &arr[0][2] << std::endl;
	//std::cout << &arr[1][0] << ", " << &arr[1][1] << ", " << &arr[1][2] << std::endl;

	//int array1[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	//for (int i = 0; i < 4; i++)
	//{
	//	std::cout << std::endl;

	//	for (int k = 0; k < 3; k++)
	//	{
	//		std::cout << array1[i][k] << std::endl;
	//	}
	//}


	////2중 배열을 써서...
	////아파트에 사람이 살고 있음.
	////각 층에는 3개의 호실만 존재하고, 3층까지 있다.
	////각각 층, 호에 가족이 몇 명 사는지 입력을 받고 아파트에 총 몇 명이 살고 있는지 합을 구한다면?

	//int apart[3][3] = { 0, };
	//int total = 0;

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int k = 0; k < 3; k++)
	//	{
	//		std::cout << "각 층 호수에 가족은 몇 명이 살고 있나요?" << i + 1 << "층" << "----" << k + 1 << "호 : ";
	//		std::cin >> apart[i][k];

	//		
	//	}
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int k = 0; k < 3; k++)
	//	{
	//		total += apart[i][k];
	//	}
	//}
	//std::cout << "총 주민수 : " << total << "명이 살고 있다." << std::endl;


	//과제
	//숫자야구게임
	
	//1. 플레이어 있음
	//2. 컴퓨터가 있음
	//3. 숫자의 범위(0~9)

	//컴퓨터는 임의의 숫자 3개를 받는다.
	//만약 컴퓨터가
	//2, 3, 5
	
	//플레이어가 맞춘다.
	//조건.
	//3, 2, 5 플
	//2, 3, 5 컴

	//숫자만 같다면 ball
	//숫자도 같고 자리까지 같다면 strike

	//1s 2b

	//배팅액
	//플레이어의 소지금 : 10000
	//당연히 배팅액은 소지금보다 클 수 없다.
	//이왕이면..최소 배팅액도?

	//따는 조건은 스트라이크의 개수와는 상관없이
	//배팅액*2
	//3out일 경우, 배팅액*2를 잃음

	//종료조건
	//10판
	//소지금이 최소 배팅액 미만

	//+내일 발표(메모리영역 -> ppt)
	//stack, heap..


	char name[6] = "hello";
	char name1[] = { 'h','e','l','l','o','\0'};
	
	std::string s = "dddd";
	std::cout << s << std::endl;
	std::cout << name1 << std::endl;
	
	//const char* : 문자열의 시작 주소를 가리킴
	const char* str = "hello";
	std::cout << str[0] << std::endl;
	std::cout << &str << std::endl;

	/*
	Hello :

	주소 :			1000	1001	1002	1003	1004	1005
	값 :				H		e		l		l		o		\0

	*/

	//const char* a = "dddd";
	//a = "adfhdfh";
	//std::cout << a << std::endl;
	///*
	// const char* a = "Hello";
	//  - 문자열이 저장된 메모리 주소를 가리키는 포인터를 선언
	//  - 포인터 자체는 상수가 아니지만, 가리키는 대상은 상수.

	// const char ab[] = "ddd";

	//*/
	//const char ab[] = "dddd";

	int* p;
	const char* a = "world";

	std::cout << static_cast<const void*>(a) << std::endl;
	a = "dddf";


}