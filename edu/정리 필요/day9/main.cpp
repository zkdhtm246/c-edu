/********************************************************************
[���������]
- ������ Ŭ������ ��ü�� �����Ͽ� ��ü�� ������ ��, ����ϴ� ������


 //�ܰ� ���� ����
 1. ���� ���� : ��ü�� ������ ��, ��ü�� ��� ��������� �ܼ��� ����, �⺻ ���� ������
  - ���� ��������� �������� �����, �������� �ּҰ��� ����
   -> ��, ���� �޸� ������ ����Ű�Ե�
   -> ���� �� ��ü���� �ش� �޸𸮸� �����ϸ� ������ ����
   -> �� ��ü�� ���� �޸� �ּҸ� ����Ű�� ������ �� ��ü�� �Ҹ�Ǹ鼭 �޸𸮸� �����ϸ�
	  �ٸ� ��ü�� �� �̻� ��ȿ���� ���� �޸𸮸� ����Ű�ԵǾ� ������ �߻�



 2. ���� ���� : ������ü�� ������ ���� ������ ���ο� �޸𸮸� �Ҵ��Ͽ� �����ϴ� ��
   -> �ٸ� �޸𸮸� ����ϰ� �ǹǷ� ���� ������ ���� �ʴ´�.

********************************************************************/

#include<iostream>

using namespace std;

#pragma region ShallowCopy
//class MyArray
//{
//private:
//
//	int* data;
//	int size;
//
//public:
//	MyArray(int size) :size(size), data(new int[size]) {}
//
//	//�⺻ ���� ������(��������) : ��� �ڵ����� �־���
//	MyArray(const MyArray& other) :size(other.size), data(other.data)
//	{
//		cout << "���� ������ ȣ��" << endl;
//	}
//	~MyArray()
//	{
//		delete[] data;
//	}
//	void SetValue(int index, int value) { data[index] = value; }
//	int GetValue(int index) { return data[index]; }
//
//	int* GetDataAddr() { return data; }
//
//};
//
//
//
//int main()
//{
//	MyArray arr1(10);
//
//	arr1.SetValue(0, 42);
//
//	MyArray arr2(arr1);
//
//	cout << arr1.GetDataAddr() << endl;
//	cout << arr2.GetDataAddr() << endl;
//
//	cout << arr1.GetValue(0) << endl;
//	cout << arr2.GetValue(0) << endl;
//
//	arr1.SetValue(0, 80);
//
//	cout << arr1.GetValue(0) << endl;
//	cout << arr2.GetValue(0) << endl;
//
//}


#pragma endregion

#pragma region DeepCopy

//class MyArray
//{
//private:
//	int* data;
//	int size;
//public:
//	MyArray(int size);
//	//���� ����
//	MyArray(const MyArray& other);
//	~MyArray();
//
//
//	int* GetDataArr()const { return data; }
//
//
//};
//MyArray::MyArray(int size)
//{
//	this->size = size;
//	data = new int[size];
//}
////���� ����
//MyArray::MyArray(const MyArray& other)
//{
//	cout << "���� ������ ȣ��" << endl;
//	this->size = other.size;
//	this->data = new int[other.size];
//	for (int i = 0; i < size; i++)//������ ����
//	{
//		this->data[i] = other.data[i];
//	}
//}
//MyArray::~MyArray()
//{
//	if (data != nullptr)delete[] this->data;
//	data = nullptr;
//}
//
//int main()
//{
//	MyArray arr(10);
//
//	cout << arr.GetDataArr() << endl;
//
//	MyArray clone = arr;
//
//	cout << clone.GetDataArr() << endl;
//
//}

#pragma endregion


class MyClass
{
private:
	int data;
public:
	MyClass(int value) :data(value)
	{
		cout << "������ ȣ��" << endl;
	}
	MyClass(const MyClass& other) :data(other.data)
	{
		cout << "���� ������" << endl;
	}
	void Show()const
	{
		cout << "������ : " << data << endl;
	}
};
void Func(MyClass m)
{
	cout << "����� ��ü" << endl;
	m.Show();
}

int main()
{
	/*MyArray arr(10);
	
	cout << arr.GetDataArr() << endl;

	MyArray clone = arr;

	cout << clone.GetDataArr() << endl;*/

	
}