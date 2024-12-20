/*****************************************************
[namespace]
- 이름 충돌을 방지하고 코드의 구조를 더 명확하게 하기 위해서 사용
- 규모가 큰 프로젝트에서는 여러 라이브러리, 코드 모듈이 함께 사용된다.
- 동일한 이름의 함수, 클래스, 변수가 존재할 수 있는데, 네임스페이스로 구분하여 충돌을 방지하는데 중요한 역할을 한다.
- 특정 이름을 네임스페이스 안에 넣어 독립적인 이름 공간을 만들어줌.
- 관련된 함수, 변수, 클래스를 네임스페이스 안에 모아두면 관리가 매우 용이하다.

 [기본구조]
 namespace MyNameSpace
{
	//여기에 변수, 함수나, 클래스 등등이 들어갈 수 있다.
}
*****************************************************/



#include<iostream>

namespace MynameSpace
{
	int num = 5;
	int* num2 = &num;
		
	void Print()
	{
		std::cout << "MynameSpace의 함수 "+ num << std::endl;
	}
}
namespace A
{
	int num = 1;

	namespace B
	{
		int num = 2;
	}
}


namespace Physics
{
	//충돌과 관련된 함수들...
	//중력과 관련된 함수들...
}
namespace A
{
	enum class MyEnumClass
	{

	};
}

namespace Characters
{
	class Player
	{

	};
	class Enemy
	{

	};
}

namespace Graphics
{
	void render();
	void loadTexture();

	class shader
	{

	};
}
namespace MyMath
{
	//뭔가 수학과 관련된 함수를 정의해서 쓴다..
}

using namespace std;

int main()
{
	std::cout << MynameSpace::num << std::endl;
	std::cout << A::B::num << std::endl;
}