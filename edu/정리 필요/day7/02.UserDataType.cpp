/***********************************************************************
[������]
- ��� ���տ� �̸��� �ٿ��� ����ϴ� ������ Ÿ��.
- �ڵ��� �������� ����.
- �⺻������ intŸ������ ó���Ǹ� �ڵ����� 0���� �����Ͽ� 1�� ����
- ��������� ���� ������ �� �ִ�.

//���� ���(C++����)
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
//����Ÿ���� �������� �Լ�;

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

//�ǽ�?
//1. ��ǥ�� ��Ÿ���� ����ü�� ����
struct Point
{
	double x;
	double y;
};

//2. �� �� ������ �Ÿ��� ����ϴ� �Լ�
double CalcutataDistance(const Point& p1, const Point& p2)
{
	
	double deltaX = p2.x - p1.x;
	double deltaY = p2.x - p1.x;
	return std::sqrt(deltaX * deltaX + deltaY * deltaY);
}
//3. �ΰ��� ��ǥ�� �����ϰ� �Լ� ȣ���� �Ͽ� �� �� ������ �Ÿ��� ���(���)




int main()
{
	/*int Red = 0;
	int Green = 1;
	int Black = 1;*/

	//Color c = Red;

	////std::cout << Color::Red << std::endl;
	////std::cout << Color::Green << std::endl;
	////std::cout << Color::Black << std::endl;

	////������� ������
	////Location loc = Inven; //error->������ ��Ȯ�ϰ� �����ؾ��Ѵ�.

	//Location loc = Location::Town;

	//int dirSelect;
	//std::cin >> dirSelect;

	//switch (dirSelect)
	//{
	//case Direction::Left:
	//	
	//	std::cout << "�������� ƢƢ" << std::endl;
	//	break;
	//case Direction::Right:

	//	std::cout << "���������� ƢƢ" << std::endl;
	//	break;
	//case Direction::Up:

	//	std::cout << "���� ƢƢ" << std::endl;
	//	break;
	//case Direction::Down:

	//	std::cout << "�Ʒ��� ƢƢ" << std::endl;
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