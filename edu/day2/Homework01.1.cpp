


#include<iostream>


int main()
{
	int num01;
	int num02;
	int cal;

	std::cout << "����� ���͵帳�ϴ�." << std::endl;

	std::cin >> num01;
	std::cin >> num02;

	std::cout << "���ϴ� ������ �����ΰ���?" << std::endl;
	std::cout << "1. ���ϱ� +" << std::endl;
	std::cout << "2. ���� -" << std::endl;
	std::cout << "3. ���ϱ� *" << std::endl;
	std::cout << "4. ������ /" << std::endl;

	std::cin >> cal;

	if (cal == 1)
	{
		std::cout << "�� : " << num01 + num02 << std::endl;
	}
	else if (cal == 2)
	{
		std::cout << "�� : " << num01 - num02 << std::endl;
	}
	else if (cal == 3)
	{
		std::cout << "�� : " << num01 * num02 << std::endl;
	}
	else if (cal == 4)
	{
		std::cout << "�� : " << num01 / num02 << std::endl;
	}
	else
		std::cout << "���� �����Դϴ�." << std::endl;




}