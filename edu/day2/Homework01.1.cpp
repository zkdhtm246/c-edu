


#include<iostream>


int main()
{
	int num01;
	int num02;
	int cal;

	std::cout << "계산을 도와드립니다." << std::endl;

	std::cin >> num01;
	std::cin >> num02;

	std::cout << "원하는 계산식은 무엇인가요?" << std::endl;
	std::cout << "1. 더하기 +" << std::endl;
	std::cout << "2. 빼기 -" << std::endl;
	std::cout << "3. 곱하기 *" << std::endl;
	std::cout << "4. 나누기 /" << std::endl;

	std::cin >> cal;

	if (cal == 1)
	{
		std::cout << "답 : " << num01 + num02 << std::endl;
	}
	else if (cal == 2)
	{
		std::cout << "답 : " << num01 - num02 << std::endl;
	}
	else if (cal == 3)
	{
		std::cout << "답 : " << num01 * num02 << std::endl;
	}
	else if (cal == 4)
	{
		std::cout << "답 : " << num01 / num02 << std::endl;
	}
	else
		std::cout << "없는 계산식입니다." << std::endl;




}