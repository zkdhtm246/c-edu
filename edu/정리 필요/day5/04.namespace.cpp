/*****************************************************
[namespace]
- �̸� �浹�� �����ϰ� �ڵ��� ������ �� ��Ȯ�ϰ� �ϱ� ���ؼ� ���
- �Ը� ū ������Ʈ������ ���� ���̺귯��, �ڵ� ����� �Բ� ���ȴ�.
- ������ �̸��� �Լ�, Ŭ����, ������ ������ �� �ִµ�, ���ӽ����̽��� �����Ͽ� �浹�� �����ϴµ� �߿��� ������ �Ѵ�.
- Ư�� �̸��� ���ӽ����̽� �ȿ� �־� �������� �̸� ������ �������.
- ���õ� �Լ�, ����, Ŭ������ ���ӽ����̽� �ȿ� ��Ƶθ� ������ �ſ� �����ϴ�.

 [�⺻����]
 namespace MyNameSpace
{
	//���⿡ ����, �Լ���, Ŭ���� ����� �� �� �ִ�.
}
*****************************************************/



#include<iostream>

namespace MynameSpace
{
	int num = 5;

	void Print()
	{
		std::cout << "MynameSpace�� �Լ� " << std::endl;
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
	//�浹�� ���õ� �Լ���...
	//�߷°� ���õ� �Լ���...
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
	//���� ���а� ���õ� �Լ��� �����ؼ� ����..
}

using namespace std;

int main()
{
	std::cout << MynameSpace::num << std::endl;
	std::cout << A::B::num << std::endl;
}