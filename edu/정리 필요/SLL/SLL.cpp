#include "SLL.h"

SLL::SLL() :pHead(nullptr)
{
}

SLL::~SLL()
{
	while (pHead != nullptr) {
		//현재 노드를 가리키는 포인터를 임시 노드에 저장
		node* temp = pHead;

		//다음 노드를 현재노드로 설정
		pHead = pHead->pNext;


		delete temp;
	}
}

void SLL::Insert(int num)
{
	//노드 생성
	node* newNode = new node(num);

	//머리가 비어있으면
	if (pHead == nullptr) {

		//새로운 노드를 첫 노드로 설정하고
		pHead = newNode;
		return;
	}
	else {

		//리스트를 순회할 포인터
		node* temp = pHead;

		//리스트를 순회할 포인터가 nullptr이 아닐때까지
		while (temp->pNext != nullptr) {
			temp = temp->pNext;
		}
		temp->pNext = newNode;
	}
}

void SLL::Delete(int num)
{
	//현재 노드를 가리키는 포인터
	node* now = pHead;
	//다음 노드를 가리키는 포인터
	node* next = pHead->pNext;

	//만약에 첫번째 노드가 삭제하려는 노드라면 
	//헤드를 다음 노드로 이동시키고 현재 노드를 삭제
	if (now->value == num) {
		pHead = pHead->pNext;
		delete now;
		return;
	}

	//돌면서 삭제한 노드를 찾아야됨
	//현재 노드를 다음 노드로 이동
	while (next->value != num) {
		now = next;
		next = next->pNext;
	}
	
	//다음 노드를 그 다음 노드로 이동
	//찾지못하면 종료
	if (next == nullptr) {
		return;
	}

	//이전 노드를 다음 노드에 연결하고
	//삭제
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
