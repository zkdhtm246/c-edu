

/********************************************************************

[C������ ��ǥ���� ���ڿ� ���� �Լ���]
 - strlen(const char* str) : ���ڿ��� ���̸� ��ȯ
 - strcpy(char* dest, const char* src) : ���ڿ� src�� dest�� ����(���ڿ� ����)
 - strcat(char* dest, const char* src) : ���ڿ� src�� dest ���ڿ� ���� �̾����(���ڿ� ����)
 - strcmp(const char* src1, const char* src2) : str1�� str2 ���ڿ��� ���������� ��. �����ϸ� 0, str2���� ������ ����, ũ�� ����� ����


********************************************************************/
/********************************************************************

[����]
1. ���ڿ��� ����� ¦����°�� ����ϱ�

2. ���ڿ� �� Ư�� ���� ã��
 - ���ڸ� ã���� �ش� �ε����� ��ȯ
 - ������ -1�� ����(�����ߴٴ� �ǹ�)
 -



********************************************************************/





#include<iostream>
using namespace std;

//���ڿ��� ������ ����
void ReverseStr(char str[])
{
	int len = strlen(str); //���ڿ��� ����

	char temp; //�ӽú���

	//�ݺ����� ���� ���ڿ��� �ݱ����� �ݺ�
	//�� �ݺ����� ���� ���ڸ� �ӽú��� temp�� ����
	//���ڿ��� ���� ���ڸ� �������� �̵�
	//�ӽú����� ����� ���ڸ� �������� �̵�

	for (int i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
//¦�� ��°�� ����ϱ�
void ReverseEven(char str[])
{

}
//Ư�� ���� ã��
int FindChar(char str[], char c)
{
	//kyungil
	//k
	//


	return -1; //�̰� ã�� ������ ���� ����
}

int main()
{
	//const char* str = "Hello"; //5

	//char str1[10] = "abcd"; //4

	//cout << strlen(str) << endl;
	//cout << strlen(str1) << endl;

	//const char* strcmp1 = "aaa";
	//const char* strcmp2 = "aaa";

	//cout << strcmp(strcmp1, strcmp2) << endl; //0
	//cout << strcmp("aab", "aaa") << endl; //1				97 97 98		97 97 97
	//cout << strcmp("aab", "aac") << endl; //-1


	//char strcpy[10] = "Hello";
	//char strcpy2[6];

	//strcpy_s(strcpy2, strcpy);

	//cout << strcpy2 << endl;

	//char s1[10] = "world";
	//char s2[20] = "Hello";

	//strcat_s(s2, s1);

	//cout << s2 << endl;

	///////////////////
	char str[] = "Hello, World!";
	ReverseStr(str);
	cout << str << endl;

}