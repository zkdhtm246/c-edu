
#include<iostream>


using namespace std;
/*
 //������
 ������ ������ +, -
 -�߿��� �� ������ ���� ��, �ڷ����� ũ�⿡ ����ؼ� ���� �Ǵ� ����


 ����
 - �� �����Ͱ� �ٸ� �����Ϳ� ������ �޸� �ּҸ� ����Ű���� ��.
 - ���� �޸� �ּҸ� ����Ű�� �Ǿ� ������ �� ����.
 - �������� Ÿ���� ��ġ�ؾ���.
 - ���� �����Ͱ� ������ �޸� �ּҸ� ����Ű��, �޸� ���� �� ������ �߻��� �� �ִ�.
*/
int main()
{


	int a;
	int* pa = &a;
	cout << "pa�� �� : " << pa << endl;

	cout << (pa + 1) << endl;
	cout << (pa - 1) << endl;


	int num = 10;
	int* pA = &num;
	int* pB = pA;

	cout << *pA << endl;
	cout << *pB << endl;

	*pA = 20;
	//���� �ּҸ� ����Ű�� �ֱ� ������ ���� �Ŀ� pB�� ����Ű�� �ִ� ���� 
	cout << *pA << endl;
	cout << *pB << endl;

	int intA = 10;
	int* pIntA = &intA;
	//double* dp = pIntA;
}