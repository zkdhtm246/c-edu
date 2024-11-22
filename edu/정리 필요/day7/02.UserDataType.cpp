/***********************************************************************
[열거형]
- 상수 집합에 이름을 붙여서 사용하는 데이터 타입.
- 코드의 가독성을 높임.
- 기본적으로 int타입으로 처리되며 자동으로 0부터 시작하여 1씩 증가
- 명시적으로 값을 지정할 수 있다.

//옛날 방식(C++이전)
enum Color
{
	//0      1      2
	Red, Green, Black
};



enum
{

};


***********************************************************************/




#include<iostream>


enum Color
{
	//0      1      2
	Red, Green, Black
};
enum Direction
{
	Left = 1,
	Right,
	Up = 4,
	Down
};
enum class Location
{
	Inven,
	Town,
	Shop
};
enum class Character
{
	Knight = 1,
	Mage,
	Archer,
	None
};
//리턴타입이 열거형인 함수;

Character GetCharacter(int n)
{
	switch (n)
	{
	case 1:
		return Character::Knight;
	case 2:
		return Character::Mage;
	case 3:
		return Character::Archer;
	default:
		return Character::None;
	}
}

//실습?
//1. 좌표를 나타내는 구조체를 정의
struct Point
{
	double x;
	double y;
};

//2. 두 점 사이의 거리를 계산하는 함수
double CalcutataDistance(const Point& p1, const Point& p2)
{
	
	double deltaX = p2.x - p1.x;
	double deltaY = p2.x - p1.x;
	return std::sqrt(deltaX * deltaX + deltaY * deltaY);
}
//3. 두개의 좌표를 생성하고 함수 호출을 하여 두 점 사이의 거리를 계산(출력)




int main()
{
	/*int Red = 0;
	int Green = 1;
	int Black = 1;*/

	//Color c = Red;

	////std::cout << Color::Red << std::endl;
	////std::cout << Color::Green << std::endl;
	////std::cout << Color::Black << std::endl;

	////범위기반 열거형
	////Location loc = Inven; //error->범위를 명확하게 지정해야한다.

	//Location loc = Location::Town;

	//int dirSelect;
	//std::cin >> dirSelect;

	//switch (dirSelect)
	//{
	//case Direction::Left:
	//	
	//	std::cout << "왼쪽으로 튀튀" << std::endl;
	//	break;
	//case Direction::Right:

	//	std::cout << "오른쪽으로 튀튀" << std::endl;
	//	break;
	//case Direction::Up:

	//	std::cout << "위로 튀튀" << std::endl;
	//	break;
	//case Direction::Down:

	//	std::cout << "아래로 튀튀" << std::endl;
	//	break;
	//}

	//

//	int characterSelect;
//	std::cin >> characterSelect;
//
//	Character selectedCharacter = static_cast<Character>(characterSelect);
//
//	switch (selectedCharacter)
//	{
//	case Character::Knight:
//;		break;
//	}



}