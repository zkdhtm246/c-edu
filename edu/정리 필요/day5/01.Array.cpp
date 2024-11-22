/*********************************************************************
[배열]
- 동일한 타입의 여러값을 "연속적으로 저장"할 수 있는 데이터구조
- 메모리에서 연속적인 공간을 가지고, 각 요소는 인덱스를 통해서 접근할 수 있다.
- 배열을 선언할 때 지정된 크기를 변경할 수가 없다.
- 배열의 모든 요소는 동일한 데이터 타입을 가져야 한다.
- 연속된 공간에 저장되기 때문에 요소에 대한 인덱스 접근이 매우 빠르다.

 [선언방법]
 - 1부터 시작하지 않고, 0부터 시작
 자료형 / 배열이름 [배열길이];
 int arr[10];



**********************************************************************/

#include<iostream>

int main()
{
	//int a, b, c, d, e, f....
	//초기화 방법
	//1. 크기를 명시하고 초기화
	int arr[4] = { 1,2,3,4 };

	//2. 배열의 크기를 생략하고 초기화
	int myArr[] = { 1,2,3 }; //크기는 3

	//3. 크기를 명시적으로 지정하고 일부 요소만 초기화
	int myArr1[5] = { 1,2,3 }; //나머지는 0으로 초기화

	//4. 모든 요소를 초기화 하지 않으면 기본값으로 초기화
	int myArr2[5] = {}; //0으로 초기화

	std::cout << arr[0] << std::endl; //int형 타입의 arr배열 0번째 인덱스에 접근하여 출력
	std::cout << arr[1] << std::endl;

	int numbers[5] = { 10,20,30,40,50 };

	for (int i = 0; i < 5; i++)
	{
		std::cout << "각 인덱스에 접근하여 출력 : " << i << " : " << numbers[i] << std::endl;
	}

	std::cout << "배열의 이름 출력" << arr << std::endl; //주소를 반환
	std::cout << "arr[0]" << &arr[0] << std::endl;
	std::cout << "arr[1]" << &arr[1] << std::endl;
	std::cout << "arr[2]" << &arr[2] << std::endl;

	//배열의 저장된 숫자를 찾아봅시다.
	int numbers2[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//입력
	int select;
	bool isFind = false;
	std::cin >> select;

	//처리
	for (int i = 0; i < 10; i++)
	{
		if (numbers2[i] == select)
		{
			isFind = true;
			break;
		}
	}

	//결과
	if (isFind)
	{
		std::cout << "찾음!" << std::endl;
	}
	else
	{
		std::cout << "없음!" << std::endl;
	}

	//배열에 저장된 모든 요소의 합을 구하면?

	//선언 및 초기화
	int numbers3[] = { 1,2,3,4,5 };
	//합계용
	int sum = 0;
	//배열의 각 인덱스에 저장되어 있는 값을 반복하면서 누적(sum)
	for (int i = 0; i < 5; i++)
	{
		sum += numbers3[i]; //각 요소의 값을 sum에 더함
	}
	std::cout << "합계 : " << sum << std::endl;



}