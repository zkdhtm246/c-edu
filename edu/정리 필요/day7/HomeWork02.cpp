
#include<iostream>
using namespace std;

void ReverseEven(char str[]) //짝수 번째만 출력하기
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

int FindChar(char str[], char c) //특정 문자 찾기
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
	//짝수 번째만 출력하기
	char str[10] = "135791357";
	ReverseEven(str);


	//특정 문자 찾기
	char find;
	char str1[10] = "abcdefgh";

	cout << "찾고 싶은 문자를 입력하세요" << endl;
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