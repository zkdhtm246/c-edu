//* 상속을 하는데 부모 클래스의 멤버들은 protected, public, private으로 하나씩 만들고
//상속을 받는 자식 클래스도 public, private, protected로 각각 만들었을경우 차이점


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
		privatePar = 30;				//private는 상속 클래스도 상속 받을 수 없음
	}

};

class protectedChilren :protected parents
{
public:

	void protectedChi()
	{
		publicPar = 10;
		protectedPar = 20;
		privatePar = 30;				//private는 상속 클래스도 상속 받을 수 없음
	}
};

class privateChildren :private parents
{
public:

	void privateChi()
	{
		publicPar = 10;
		protectedPar = 20;
		privatePar = 30;				//private는 상속 클래스도 상속 받을 수 없음
	}
};


int main()
{
	publicChildren a;
	protectedChilren b;
	privateChildren c;

	cout << a.publicPar << endl;
	cout << a.protectedPar << endl;		//protected는 상속 관계 클래스가 아닌 경우 가져올 수 없음
	cout << a.privatePar << endl;		//private는 상속 관계 클래스가 아닌 경우 가져올 수 없음

	cout << b.publicPar << endl;		//public이었지만 상속 클래스에서 protected로 바뀌어 가져올 수 없음
	cout << b.protectedPar << endl;		//protected는 상속 관계 클래스가 아닌 경우 가져올 수 없음
	cout << b.privatePar << endl;		//private는 상속 관계 클래스가 아닌 경우 가져올 수 없음

	cout << c.publicPar << endl;		//public이었지만 상속 클래스에서 private으로 바뀌어 가져올 수 없음
	cout << c.protectedPar << endl;		//protected는 상속 관계 클래스가 아닌 경우 가져올 수 없음
	cout << c.privatePar << endl;		//private는 상속 관계 클래스가 아닌 경우 가져올 수 없음
}