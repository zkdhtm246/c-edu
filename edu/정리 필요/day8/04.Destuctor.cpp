/********************************************************************
[소멸자]
- 객체가 소멸될 때, 자동으로 호출되는 함수
- 매개변수가 없음
- 반환값 없음
- 오버로딩 불가


********************************************************************/

#include<iostream>

class MyClass
{
public:
	//생성자
	MyClass(int size);
	//소멸자
	~MyClass();

private:
	int* data;
};

//생성
MyClass::MyClass(int size)
{
	data = new int[size];
	std::cout << "여긴 생성자" << std::endl;
}
//소멸
MyClass::~MyClass()
{
	delete[] data;
	data = nullptr;
	std::cout << "소멸자" << std::endl;
}


int main()
{

	MyClass* m = new MyClass(10);

	delete m;

}