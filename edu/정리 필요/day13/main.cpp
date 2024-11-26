/******************************************************************************
- static
 선언된 파일 내에서만 접근 허용


- extern
 다른 파일에 정의된 변수를 참조하겠다



******************************************************************************/

#include<iostream>
extern int GlovalValue;
extern int staticGValue;

void Count() {
	static int count = 0;
	count++;
	std::cout << count << std::endl;
}
/*************************************************************************
클래스 내의 static 변수 및 함수
- 클래스 내에서 선언된 static으로 선언된 변수는 해당 클래스의 모든 인스턴스에서 공유
- 인스턴스 간의 공통으로 사용되는 변수. 클래스의 인스턴스가 없어도 접근 가능함

1. 클래스 정적멤버변수 : 모든 클래스 인스턴스가 공유하는 변수
 ㄴ 클래스의 모든 인스턴스가 해당 변수에 접근이 가능. 하나의 인스턴스에서 변수를 수정하면 다른 인스턴스에도

2. 클래스 정적멤버함수 : 클래스의 인스턴스 없이 호출할 수 있는 함수
ㄴ 정적멤버함수는 클래스의 정적멤버변수에만 접근 가능. 인스턴스 멤버 변수나 함수에는 접근불가

*************************************************************************/
class Count
{
private:
	int num;
	static int count;
public:
	Count() {
		count++;
	}
	static int GetCount() {
		return count;
	}
	void Print();
	static int Sum(int a, int b) {
		//정적멤버변수 O
		count = 1;		
		//멤버변수 X
		//num = 1;
		//정적멤버함수는 O
		GetCount();
		//멤버함수는 X
		//Print();
	}
};
int Count::count = 0;

int main() {	
	std::cout << GlovalValue << std::endl;
	//std::cout << staticGValue << std::endl;
	//Count();  //1
	//Count();  //2


	Count c1;
	Count c2;
	Count c3;

	std::cout << Count::GetCount() << std::endl;

}