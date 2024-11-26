/****************************************************************
[Map]
- 연관컨테이너
- Key, Value의 쌍으로 저장(pair)
- Key는 컨테이너에 중복저장 될 수 없음
- 삽입될 때마다 자동으로 Key가 정렬됨


[unordered_map]
- 정렬되지 않음
- 내부가 해시태그로 이루어짐

[해시테이블]
- 키-값 쌍으로 저장
- 해시 함수를 사용해서 키를 해시값으로 변환하고 이 값을 기반으로 데이터를 저장하거나 검색하는 방식
- 
****************************************************************/

#include<iostream>
#include<map>

class Armor {
private:
	std::string name;
	int defense;
public:
	Armor() :name(""), defense(0) {}
	Armor(const std::string& n, int d) :name(n), defense(d) {}
	std::string GetName()const {
		return name;
	}
	int GetDef()const {
		return defense;
	}
};

int main() {
	std::map<std::string, int>data;
	std::map<std::string, int>::iterator iter;

	//pair : 두 개의 값을 묶어서 하나의 객체로 사용하는 템플릿 클래스
	//두 개의 서로 다른 타입의 값을 함께 저장할 수 있음
	//페어는 두 개의 멤버를 가지고 있으며 first, second가 있음


	//1.value_type
	//기본적인 키-값 쌍 타입을 나타낸다. 이 방법은 명시적으로 pair 객체를 생성하여 insert에 전달
	//가독성 떨어짐
	data.insert(std::map<std::string, int>::value_type("바보", 1));

	//2.make_pair : pair객체를 생성하는 함수 템플릿
	//make_pair("홍길동", 5) -> std::pair<string, int>타입의 객체를 생성
	//템플릿 인자를 자동으로 추론하므로 타입이 명확하지 않을 수 있음
	//복잡한 타입을 다룰 때는 명시적인 타입선언이 필요할 수 있음
	data.insert(std::make_pair("홍길동", 5));

	//3.pair : 키-값 쌍을 명시적으로 생성하여 삽입
	//명확한 타입선언을 통해 가독성을 높임

	data.insert(std::pair<std::string, int>("홍길남", 40));
	data.insert(std::pair<std::string, int>("홍길서", 30));
	data.insert(std::pair<std::string, int>("홍길북", 10));
	data.insert(std::pair<std::string, int>("윈터", 40));
	data.insert(std::pair<std::string, int>("카리나", 40));

	//4. 객체를 직접 생성
	std::pair<std::string, int>pt1("경일", 500);
	data.insert(pt1);
	data.erase("홍길남");
	for (const auto& pair : data) {
		std::cout << "키값 : " << pair.first << ", 데이터 : " << pair.second << std::endl;
	}

	auto it = data.find("경일");

	if (it != data.end()) {
		std::cout << "찾았다 : " << it->second << std::endl;
	}
	//count : 주어진 키의 개수를 반환
	//clear : 맵의 모든 요소 삭제
	//at : 주어진 키의 해당값을 반환
	//empty : 

	std::cout << data["윈터"] << std::endl;

	/////////////////////////////////////////
	std::map<std::string, Armor>armorMap;

	armorMap.insert(std::make_pair("helmet", Armor("철모자", 5)));
	armorMap.insert(std::make_pair("shield", Armor("나무로 만든 방패", 15)));
	armorMap.insert(std::make_pair("greaves", Armor("신발", 25)));
	

	for (const auto& pair : armorMap) {
		std::cout << "키 : " << pair.first << std::endl;
		std::cout << "이름 : " << pair.second.GetName() << std::endl;
		std::cout << "방어력 : " << pair.second.GetDef() << std::endl;
	}

	std::string search;
	std::cout << "검색할 방어구의 키를 입력해라 : ";
	std::cin >> search;

	auto it = armorMap.find(search);
	if (it != armorMap.end()) {

	}
}


/*

1. SOLID 원칙
2. Map vs unoridered_mapy
- 다양하게 예제를 만들어보기
3. 해시테이블
4. 해시함수
5. 해시충돌
6. 충돌 해결방법
ㄴ체이닝, 개방주소법



=======================
스마트포인터
directx VS vulkan 차이점
*/