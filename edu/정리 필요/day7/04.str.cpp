

/********************************************************************

[C에서의 대표적인 문자열 관련 함수들]
 - strlen(const char* str) : 문자열의 길이를 반환
 - strcpy(char* dest, const char* src) : 문자열 src를 dest로 복사(문자열 복사)
 - strcat(char* dest, const char* src) : 문자열 src를 dest 문자열 끝에 이어붙임(문자열 연결)
 - strcmp(const char* src1, const char* src2) : str1과 str2 문자열을 사전순으로 비교. 동일하면 0, str2보다 작으면 음수, 크면 양수를 리턴


********************************************************************/
/********************************************************************

[과제]
1. 문자열을 뒤집어서 짝수번째만 출력하기

2. 문자열 내 특정 문자 찾기
 - 문자를 찾으면 해당 인덱스를 반환
 - 없으면 -1를 리턴(실패했다는 의미)
 -



********************************************************************/





#include<iostream>
using namespace std;

//문자열을 뒤집어 볼까
void ReverseStr(char str[])
{
	int len = strlen(str); //문자열의 길이

	char temp; //임시변수

	//반복문을 통해 문자열의 반까지만 반복
	//각 반복에서 앞쪽 문자를 임시변수 temp에 저장
	//문자열의 뒤쪽 문자를 앞쪽으로 이동
	//임시변수에 저장된 문자를 뒤쪽으로 이동

	for (int i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
//짝수 번째만 출력하기
void ReverseEven(char str[])
{

}
//특정 문자 찾기
int FindChar(char str[], char c)
{
	//kyungil
	//k
	//


	return -1; //이건 찾지 못했을 때의 리턴
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