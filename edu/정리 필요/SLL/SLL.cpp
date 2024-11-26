#include "SLL.h"

SLL::SLL() :pHead(nullptr)
{
}

SLL::~SLL()
{
	while (pHead != nullptr) {
		//���� ��带 ����Ű�� �����͸� �ӽ� ��忡 ����
		node* temp = pHead;

		//���� ��带 ������� ����
		pHead = pHead->pNext;


		delete temp;
	}
}

void SLL::Insert(int num)
{
	//��� ����
	node* newNode = new node(num);

	//�Ӹ��� ���������
	if (pHead == nullptr) {

		//���ο� ��带 ù ���� �����ϰ�
		pHead = newNode;
		return;
	}
	else {

		//����Ʈ�� ��ȸ�� ������
		node* temp = pHead;

		//����Ʈ�� ��ȸ�� �����Ͱ� nullptr�� �ƴҶ�����
		while (temp->pNext != nullptr) {
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	//���� ��带 ����Ű�� ������
	node* now = pHead;
	//���� ��带 ����Ű�� ������
	node* next = pHead->pNext;

	//���࿡ ù��° ��尡 �����Ϸ��� ����� 
	//��带 ���� ���� �̵���Ű�� ���� ��带 ����
	if (now->value == num) {
		pHead = pHead->pNext;
		delete now;
		return;
	}

	//���鼭 ������ ��带 ã�ƾߵ�
	//���� ��带 ���� ���� �̵�
	while (next->value != num) {
		now = next;
		next = next->pNext;
	}
	
	//���� ��带 �� ���� ���� �̵�
	//ã�����ϸ� ����
	if (next == nullptr) {
		return;
	}

	//���� ��带 ���� ��忡 �����ϰ�
	//����
	if (now->pNext->value == num) {
		now->pNext = next->pNext;
		delete next;
	}	

}

void SLL::Print()
{
	node* temp = pHead;

	std::cout << "=============Print=============" << std::endl;

	while (temp != nullptr) {
		std::cout << temp->value << " ";
		temp = temp->pNext;
	}
	std::cout << std::endl;
}
