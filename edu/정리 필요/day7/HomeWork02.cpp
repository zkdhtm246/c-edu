
#include<iostream>
using namespace std;

void ReverseEven(char str[]) //¦�� ��°�� ����ϱ�
{
	int even = strlen(str);

	char temp;

	for (int i = 0; i < even; i++)
	{
		if (i % 2 == 1)
		{
			cout << str[i] << endl;
		}
	}
}

int FindChar(char str[], char c) //Ư�� ���� ã��
{

	int Find = strlen(str);

	for (int i = 0; i < Find; i++)
	{
		if (str[i] == c)
		{
			return str[i];
		}
	}
	return -1;
}

int main()
{
	//¦�� ��°�� ����ϱ�
	char str[10] = "135791357";
	ReverseEven(str);


	//Ư�� ���� ã��
	char find;
	char str1[10] = "abcdefgh";

	cout << "ã�� ���� ���ڸ� �Է��ϼ���" << endl;
	cin >> find;
	

	if (FindChar(str1, find) == -1)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << static_cast<char>(FindChar(str1, find)) << endl;
	}

}