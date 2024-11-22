/*******************************************************************
[template]
- 사용자가 지정한 자료형의 함수, 클래스를 컴파일 시간에 생성
- 동일한 로직에 대해 여러 데이터 타입에 대한 중복된 코드를 작성할 필요가 없음
- 컴파일 타임에 데이터 타입을 결정하기 때문에 동적 타입 결정보다 효율적일 수 있음

1. 함수 템플릿
 - 함수에 필요한 자료형을 선언하고 함수의 호출 시 자료형을 지정해주어 사용


2. 클래스 템플릿
 - 다양한 데이터 타입을 지원하는 클래스를 정의할 수 있게 해줌
 - 템플릿 매개변수를 통해 클래스의 멤버변수와 멤버함수의 타입을 일반화 할 수 있다

*******************************************************************/


#include<iostream>
//int GetMax(const int x, const int y) {
//	if (x > y)return x;
//	else return y;
//}
//int GetMax(const float x, const float y) {
//	if (x > y)return x;
//	else return y;
//}
//위에 식을 함수 템플릿으로 만든다면?
template<typename T>
T GetMax(const T x, const T y) {
	if (x > y)return x;
	else return y;
}
template<typename T>
void Output(const T data){
	std::cout << "데이터 : " << data << std::endl;
}
template<typename T>
void Output1(const T a, const T b) {
	std::cout << a << " , " << b << std::endl;
}
template<typename T1, typename T2>
void Output2(const T1 a, const T2 b) {
	std::cout << a << " , " << b << std::endl;
}

//간단한 클래스 템플릿
template<typename T>
class Box {
private:
	T data;
public:
	void SetData(T data) { this->data = data; }
	T GetData()const { return data; }
};
template<typename T1, typename T2>
class Box2 {
private:
	T1 firstData;
	T2 secondData;
public:
	T1 GetFirst();
	T2 GetSecond();

	void SetFirst(T1 val) { firstData = val; }
	void SetSecond(T2 val) { secondData = val; }
};
template<typename T1, typename T2>
T1 Box2<T1, T2>::GetFirst()
{
	return T1();
}

template<typename T1, typename T2>
T2 Box2<T1, T2>::GetSecond()
{
	return T2();
}


int main() {
	std::cout << GetMax(1, 2) << std::endl;
	std::cout << GetMax(1.2, 2.5) << std::endl;
	Output(1);
	Output(2.6);
	Output("dddd");
	Output1(1, 2);
	//Output1(1.5, 2); //typename 1개인 경우 -> 인자로 받는 데이터 타입이 일치하지 않으면 오류
	Output2(1.5, 2); //typename 2개

	std::cout << "=======================================" << std::endl;

	Box<int>box;
	box.SetData(10);
	std::cout << box.GetData() << std::endl;
	Box<double>box1;
	box1.SetData(10.5);
	std::cout << box1.GetData() << std::endl;

	Box2<int, double>b2;
	b2.SetFirst(10);
	b2.SetSecond(10.65);

	std::cout<<b2.GetFirst()<<" , "<<b2.GetSecond()<<std::endl;
}


