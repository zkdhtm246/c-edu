/************************************************************
[구조체 UserDataTypes]
 - 구조체는 여러개의 변수를 묶어 하나의 데이터 단위로 정의하는 사용자 정의 데이터 형식--->C에서 해당
 - 구조체는 각각의 변수를 멤버로 가지고 이러한 멤버들은 서로 다른 데이터 타입일 수 있다.
 - C++에서는 함수도 포함이 가능하다.
 - 구조체 패딩 개념 공부

//키워드, 구조체 이름
struct MyStruct
{
	//여기에 필요한 멤버들이 들어간다...
};

************************************************************/

#include<iostream>
//학생과 관련된 정보를 만든다면...

struct Student
{
	int age; //학생 나이
	int phoneNumber; //학생 전화번호
	std::string name; //학생이름

};
struct Point
{
	int x;
	int y;

	void Print(); //C++에서는 함수도 멤버로 가능
};
struct Person
{
	std::string name;
	std::string phoneNumber;
	int age;
};


struct Test
{
	short s; //2
	int i; //4
	char c; //1
	
};


int main()
{
	//
	Student st;

	st.name = "경일이";
	st.age = 10;
	st.phoneNumber = 1234;

	std::cout << "이름 : " << st.name << std::endl;
	std::cout << "나이 : " << st.age << std::endl;
	std::cout << "전화번호 : " << st.phoneNumber << std::endl;

	Point p;
	p.x = 10;
	p.y = 20;


	Point p1 = { 50,102 }; //생성과 동시에 초기화
	std::cout << "구조체 p.x의 값 : " << p1.x << std::endl;
	std::cout << "구조체 p.y의 값 : " << p1.y << std::endl;
	
	Person person[3];
	person[0].name = "홍길동";
	person[0].phoneNumber = "010-1234";
	person[0].age = 20;

	person[1].name = "홍길tj";
	person[1].phoneNumber = "010-1234";
	person[1].age = 20;

	person[2].name = "홍길ska";
	person[2].phoneNumber = "010-1234";
	person[2].age = 20;

	//출력..

	Person person1[3] = {
		{"홍길동","010",50},
		{"홍길동","010",50},
		{"홍길동","010",50}
	};
	for (int i = 0; i < 3; i++)
	{
		std::cout << person1[i].name << " , " << person1[i].phoneNumber << " , " << person1[i].age << std::endl;
	}

	Test t;
	std::cout << sizeof(t) << std::endl;

}

void Point::Print()
{
	std::cout << "나는 Point구조체의 멤버 함수다" << std::endl;
}
