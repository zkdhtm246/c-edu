


#include<iostream>


int main()
{
	int num01;
	int num02;
	int cal;

	std::cout << "�� ����� ����غ��Կ�." << std::endl;

	std::cin >> num01;
	std::cin >> num02;

	if (num01 > num02)
	{
		std::cout << "ù��° ���� �� ũ�׿�." << std::endl;
		std::cout << "�� : " << num01 + num02 << std::endl;
	}
	else if (num01 < num02)
	{
		std::cout << "ù��° ���� �� �۳׿�." << std::endl;
		std::cout << "�� : " << num01 - num02 << std::endl;
	}
	else
		std::cout << "�� ���� ���׿�. ��̰� ��������ϴ�." << std::endl;




}