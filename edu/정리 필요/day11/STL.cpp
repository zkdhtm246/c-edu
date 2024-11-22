/**************************************************************
STL(스탠다드 템플릿 라이브러리)											중요중요중요중요중요중요중요중요중요중요중요중요
 - 프로그램에 필요한 자료구조와 알고리즘을 템플릿으로 제공하는 라이브러리
 
 STL의 구성요소
  - 컨테이너 : 객체를 보관하는 객체(일종의 커다란 창고) 클래스 템플릿 형태로 구현되어 있음
  ㄴ 각각의 원소에 접근할 수 있도록 다양한 멤버함수를 제공
  - 이터레이터 : 포인터와 비슷한 개념으로 컨테이너의 원소를 가리키고,
				가리키는 원소에 접근하여 다음 원소를 가리키게 하는 기능 
  - 알고리즘 : 정렬, 삭제, 검색 등을 해결하는 일반화된 방법을 제공하는 함수 템플릿

	- 시퀀스 컨테이너(선형) : 컨테이너 원소가 자신만의 삽입 위치를 가지는 컨테이너
	ㄴ Vector, list, deque
	- 연관 컨테이너(비선형) : 저장 원소가 삽입 순서와는 다르게 특정 정렬 기준에 의해서 자동정렬 되는 컨테이너
	ㄴ set, multiset, map, multimap

**************************************************************/

/*
[Vector]
ㄴ순차적으로 저장되어 있고(메모리상) 내부적으로 동적배열을 사용하여 크기를 자동으로 조절
ㄴ인덱스를 통해 임의의 원소에 접근이 가능(배열의 [], 멤버함수인 at)
 
 *list의 차이점
 
[멤버함수들]
- empty() : 벡터가 비어 있는지 확인
- clear() : 벡터의 모든 요소 제거
- at() : 벡터의 요소에 접근하며, 범위검사(예외처리)함
- front() : 벡터의 첫번째 요소 반환
- bakc() : 벡터의 마지막 요소 반환
- push_back() : 벡터의 끝에 요소 추가
- pop_back() : 벡터의 끝에서 요소를 제거
- erase() : 지정한 위치에 요소 제거
- reserve() : 벡터의 용량을 지정
- shrink_to_fit() : 벡터의 현재 크기에 맞게 줄암
- swap() : 두 벡터를 교환
*/

#include<iostream>
#include<vector>
int main() {
	std::vector<int>v1; //빈벡터 생성
	std::vector<int>v2(10); //10개의 기본값(0)으로 초기화된 벡터 생성
	std::vector<int>v3(10, 5); //10개의 요소를 5로 초기화된 벡터 생성
	std::vector<int>v4 = { 1,2,3,4,5,6,7,8,9,10 }; //초기화 리스트를 사용한 벡터 생성

	std::cout << "벡터 v1의 사이즈 : " << v1.size() << std::endl;
	std::cout << "벡터 v2의 사이즈 : " << v2.size() << std::endl;
	std::cout << "벡터 v3의 사이즈 : " << v3.size() << std::endl;
	std::cout << "벡터 v4의 사이즈 : " << v4.size() << std::endl;

	//capacity() : 현재 할당된 메모리에서 저장할 수 있는 최대 원소의 수
	//메모리가 초과될 경우, 기존 메모리의 1/2만큼 추가해줌
	std::cout << "==================================" << std::endl;
	std::cout << "벡터의 capacity v1: " << v1.capacity() << std::endl;
	std::cout << "벡터의 capacity v2: " << v2.capacity() << std::endl;
	std::cout << "벡터의 capacity v3: " << v3.capacity() << std::endl;
	std::cout << "벡터의 capacity v4: " << v4.capacity() << std::endl;
	std::cout << "==================================" << std::endl;

	v4.push_back(10);
	std::cout << "벡터의 capacity v4(푸시백 후): " << v4.capacity() << std::endl;

	std::vector<int>v5;
	v5.push_back(1);
	v5.push_back(2);
	v5.push_back(3);
	std::cout << "벡터 v5출력" << std::endl;

	for (int i = 0; i < v5.size(); i++) {
		std::cout << "뽀문으로 벡터 v5출력 : " << v5[i] << std::endl;
	}

	//범위기반 for
	//컨테이너의 모든 요소를 간단하게 순회
	//일반 for문은 더 많은 제어를 제공하지만 코드가 복잡할 수 있다
	//특정조건이나 일부 순회는 어렵다. 반복자를 내부적으로 사용

	for (int i : v5) {
		std::cout << "범위기반 for로 벡터 v5 출력 : " << i << std::endl;
	}
	for (int& i : v5) {
		std::cout << "범위기반 for로(참조) 벡터 v5 출력 : " << i << std::endl;
	}


	//auto : 타입추론

	for (auto& i : v5)
	{
		i += 1; //참조를 통해 변경가능
		std::cout << "범위기반(참조) 벡터 v5 출력 : " << i << std::endl;
	}
	//변경이 일어나지 않는 경우라면 cont를 사용
	for (const auto& i : v5)
	{		
		std::cout << "범위기반(참조) 벡터 v5 출력 : " << i << std::endl;
	}
	std::cout << "==================================" << std::endl;

	std::vector<int>v6;

	v6.push_back(1);
	v6.push_back(2);
	v6.push_back(3);
	v6.push_back(4);
	v6.insert(v6.begin() + 1, 10); //인덱스 1에 10을 삽입
	v6.erase(v6.begin() + 3); //인덱스 3의 요소를 제거
	v6.pop_back(); //마지막 인덱스의 요소를 제거
	std::cout << "==================================" << std::endl;

	/*
	반복자 이용(iterator)
	
	
	*/

	for (auto& i : v6)
	{
		std::cout << i << std::endl;
	}

	std::cout << "========반복자========" << std::endl;

	std::vector<int>v7;
	v7.push_back(1);
	v7.push_back(2);
	v7.push_back(3);
	v7.push_back(4);
	v7.push_back(5);
	v7.emplace_back(1); //조사필요오오오오오오오오
	//int i=0;
	for (std::vector<int>::const_iterator it = v7.begin(); it != v7.end(); ++it) {
		//*it += 10;
		std::cout << *it << "->";
	}
	//for (std::vector<int>::reverse_iterator it = v7.begin(); it != v7.rend(); ++it) {
	//	//*it += 10;
	//	std::cout << *it << "->";
	//}
	std::cout << "==================================" << std::endl;
	std::vector<int>v8;
	v8.push_back(1);
	v8.push_back(2);
	v8.push_back(3);
	v8.push_back(4);
	v8.push_back(5);

	//std::vector<int>::const_iterator iter = v8.begin(); // //시작원소를 가리키는 반복자

	
	std::vector<int>vec = { 10,20,30,40 };
	
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}

	///////////////////////////////////////////
	std::vector<int>vt;
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	
	
	vt.clear(); //메모리관리
	std::cout << vt.capacity() << std::endl;

	std::vector<int>().swap(vt);

	std::cout << vt.capacity() << std::endl;

}




/*
=과제=
상점시스템
- 벡터 사용
- 모든 건 클래스 사용

1. Shop
2. Item
3. Player
4. Inventory
[기능]
1. Shop
 ㄴ사는 곳, 파는 곳
 ㄴ금액 변경
 ㄴ판매 시, 구매 금액의 반값
 ㄴ수량제한

2. Player
 - 기본능력치
  ㄴ공격력, 방어력 등 (상호참조오류,클래스전방선언)
  ㄴ장착기능 : 인벤토리 빠지기, 능력치 변경
  ㄴ탈착기능 : 인벤토리 들어가기

 차근차근만들기
*/