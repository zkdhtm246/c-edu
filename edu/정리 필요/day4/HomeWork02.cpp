
#include<iostream>


int FindMaxNumber(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int main()
{
	int a = 0;
	int b = 0;


	std::cout << "비교하고 싶은 숫자를 입력해주세요" << std::endl;
	std::cout << "첫번째 숫자 : ";
	std::cin >> a;
	std::cout << "두번째 숫자 : ";
	std::cin >> b;
	std::cout << std::endl;

	while (a == b)
	{
		std::cout << "두 숫자가 같은 크기입니다." << std::endl;
		std::cout << "비교하고 싶은 숫자를 입력해주세요" << std::endl;
		std::cout << "첫번째 숫자 : ";
		std::cin >> a;
		std::cout << "두번째 숫자 : ";
		std::cin >> b;
		std::cout << std::endl;
	}

	std::cout << FindMaxNumber(a, b) << std::endl;

}