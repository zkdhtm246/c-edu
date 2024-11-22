
#include<iostream>


bool IsPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}


int main()
{
	int num;

	std::cout << "소수 판결기 작동" << std::endl;
	std::cout << "판별 원하는 숫자 : ";
	std::cin >> num;
	std::cout << std::endl;

	if (num == 0 || num == 1)
	{
		std::cout << "삐빅! 해당 수는 소수가 아닙니다.";
	}
	else if (IsPrime(num) == 0)
	{
		std::cout << "삐빅! 해당 수는 소수가 아닙니다.";
	}
	else
	{
		std::cout << "삐빅! 해당 수는 소수입니다.";
	}
	

}