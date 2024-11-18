


#include<iostream>


int main()
{
	int num01;
	int num02;
	int cal;

	std::cout << "제 맘대로 계산해볼게요." << std::endl;

	std::cin >> num01;
	std::cin >> num02;

	if (num01 > num02)
	{
		std::cout << "첫번째 값이 더 크네요." << std::endl;
		std::cout << "답 : " << num01 + num02 << std::endl;
	}
	else if (num01 < num02)
	{
		std::cout << "첫번째 값이 더 작네요." << std::endl;
		std::cout << "답 : " << num01 - num02 << std::endl;
	}
	else
		std::cout << "두 값이 같네요. 흥미가 사라졌습니다." << std::endl;




}