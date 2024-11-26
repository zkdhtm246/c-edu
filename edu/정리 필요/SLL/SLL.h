#pragma once
#include<iostream>


struct node {
	int value; //������
	node* pNext; //��带 ����ų �� �ִ� ������

	node(int n):value(n), pNext(nullptr){}
};


class SLL
{
private:
	node* pHead; //ù��° ��带 ����Ű�� ������
public:
	SLL();
	~SLL();

	void Insert(int num);

	void Delete(int num);

	void Print();
};

