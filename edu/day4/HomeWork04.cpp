
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

	std::cout << "�Ҽ� �ǰ�� �۵�" << std::endl;
	std::cout << "�Ǻ� ���ϴ� ���� : ";
	std::cin >> num;
	std::cout << std::endl;

	if (num == 0 || num == 1)
	{
		std::cout << "�ߺ�! �ش� ���� �Ҽ��� �ƴմϴ�.";
	}
	else if (IsPrime(num) == 0)
	{
		std::cout << "�ߺ�! �ش� ���� �Ҽ��� �ƴմϴ�.";
	}
	else
	{
		std::cout << "�ߺ�! �ش� ���� �Ҽ��Դϴ�.";
	}
	

}