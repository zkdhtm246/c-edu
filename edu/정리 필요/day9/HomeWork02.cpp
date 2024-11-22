//* ����� �ϴµ� �θ� Ŭ������ ������� protected, public, private���� �ϳ��� �����
//����� �޴� �ڽ� Ŭ������ public, private, protected�� ���� ���������� ������


#include<iostream>

using namespace std;

class parents
{
public:
	parents() :publicPar(1), protectedPar(2), privatePar(3) {}

	int publicPar;

protected:
	int protectedPar;

private:
	int privatePar;

};

class publicChildren :public parents
{
public:
	
	void publicChi()
	{
		publicPar = 10;
		protectedPar = 20;
		privatePar = 30;				//private�� ��� Ŭ������ ��� ���� �� ����
	}

};

class protectedChilren :protected parents
{
public:

	void protectedChi()
	{
		publicPar = 10;
		protectedPar = 20;
		privatePar = 30;				//private�� ��� Ŭ������ ��� ���� �� ����
	}
};

class privateChildren :private parents
{
public:

	void privateChi()
	{
		publicPar = 10;
		protectedPar = 20;
		privatePar = 30;				//private�� ��� Ŭ������ ��� ���� �� ����
	}
};


int main()
{
	publicChildren a;
	protectedChilren b;
	privateChildren c;

	cout << a.publicPar << endl;
	cout << a.protectedPar << endl;		//protected�� ��� ���� Ŭ������ �ƴ� ��� ������ �� ����
	cout << a.privatePar << endl;		//private�� ��� ���� Ŭ������ �ƴ� ��� ������ �� ����

	cout << b.publicPar << endl;		//public�̾����� ��� Ŭ�������� protected�� �ٲ�� ������ �� ����
	cout << b.protectedPar << endl;		//protected�� ��� ���� Ŭ������ �ƴ� ��� ������ �� ����
	cout << b.privatePar << endl;		//private�� ��� ���� Ŭ������ �ƴ� ��� ������ �� ����

	cout << c.publicPar << endl;		//public�̾����� ��� Ŭ�������� private���� �ٲ�� ������ �� ����
	cout << c.protectedPar << endl;		//protected�� ��� ���� Ŭ������ �ƴ� ��� ������ �� ����
	cout << c.privatePar << endl;		//private�� ��� ���� Ŭ������ �ƴ� ��� ������ �� ����
}