
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


	std::cout << "���ϰ� ���� ���ڸ� �Է����ּ���" << std::endl;
	std::cout << "ù��° ���� : ";
	std::cin >> a;
	std::cout << "�ι�° ���� : ";
	std::cin >> b;
	std::cout << std::endl;

	while (a == b)
	{
		std::cout << "�� ���ڰ� ���� ũ���Դϴ�." << std::endl;
		std::cout << "���ϰ� ���� ���ڸ� �Է����ּ���" << std::endl;
		std::cout << "ù��° ���� : ";
		std::cin >> a;
		std::cout << "�ι�° ���� : ";
		std::cin >> b;
		std::cout << std::endl;
	}

	std::cout << FindMaxNumber(a, b) << std::endl;

}