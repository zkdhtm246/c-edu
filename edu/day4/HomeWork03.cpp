
#include<iostream>


int Sum(int n)
{
	int a = n;
	int num = 0;
		
	if (n != 0)
	{
		for (a; a != 0; a--)
		{
			num += n;
			n--;
		}
	}
	return num;
}


int main()
{
	int n = 0;

	std::cout << "n������ ���� ���ص帳�ϴ�." << std::endl;
	std::cout << "n : ";
	std::cin >> n;
	std::cout << std::endl;

	std::cout << Sum(n) << std::endl;


}