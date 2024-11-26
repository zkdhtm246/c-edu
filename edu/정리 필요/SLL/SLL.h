#pragma once
#include<iostream>


struct node {
	int value; //데이터
	node* pNext; //노드를 가리킬 수 있는 포인터

	node(int n):value(n), pNext(nullptr){}
};


class SLL
{
private:
	node* pHead; //첫번째 노드를 가리키는 포인터
public:
	SLL();
	~SLL();

	void Insert(int num);

	void Delete(int num);

	void Print();
};

