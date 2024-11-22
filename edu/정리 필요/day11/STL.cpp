/**************************************************************
STL(���Ĵٵ� ���ø� ���̺귯��)											�߿��߿��߿��߿��߿��߿��߿��߿��߿��߿��߿��߿�
 - ���α׷��� �ʿ��� �ڷᱸ���� �˰����� ���ø����� �����ϴ� ���̺귯��
 
 STL�� �������
  - �����̳� : ��ü�� �����ϴ� ��ü(������ Ŀ�ٶ� â��) Ŭ���� ���ø� ���·� �����Ǿ� ����
  �� ������ ���ҿ� ������ �� �ֵ��� �پ��� ����Լ��� ����
  - ���ͷ����� : �����Ϳ� ����� �������� �����̳��� ���Ҹ� ����Ű��,
				����Ű�� ���ҿ� �����Ͽ� ���� ���Ҹ� ����Ű�� �ϴ� ��� 
  - �˰��� : ����, ����, �˻� ���� �ذ��ϴ� �Ϲ�ȭ�� ����� �����ϴ� �Լ� ���ø�

	- ������ �����̳�(����) : �����̳� ���Ұ� �ڽŸ��� ���� ��ġ�� ������ �����̳�
	�� Vector, list, deque
	- ���� �����̳�(����) : ���� ���Ұ� ���� �����ʹ� �ٸ��� Ư�� ���� ���ؿ� ���ؼ� �ڵ����� �Ǵ� �����̳�
	�� set, multiset, map, multimap

**************************************************************/

/*
[Vector]
������������ ����Ǿ� �ְ�(�޸𸮻�) ���������� �����迭�� ����Ͽ� ũ�⸦ �ڵ����� ����
���ε����� ���� ������ ���ҿ� ������ ����(�迭�� [], ����Լ��� at)
 
 *list�� ������
 
[����Լ���]
- empty() : ���Ͱ� ��� �ִ��� Ȯ��
- clear() : ������ ��� ��� ����
- at() : ������ ��ҿ� �����ϸ�, �����˻�(����ó��)��
- front() : ������ ù��° ��� ��ȯ
- bakc() : ������ ������ ��� ��ȯ
- push_back() : ������ ���� ��� �߰�
- pop_back() : ������ ������ ��Ҹ� ����
- erase() : ������ ��ġ�� ��� ����
- reserve() : ������ �뷮�� ����
- shrink_to_fit() : ������ ���� ũ�⿡ �°� �پ�
- swap() : �� ���͸� ��ȯ
*/

#include<iostream>
#include<vector>
int main() {
	std::vector<int>v1; //���� ����
	std::vector<int>v2(10); //10���� �⺻��(0)���� �ʱ�ȭ�� ���� ����
	std::vector<int>v3(10, 5); //10���� ��Ҹ� 5�� �ʱ�ȭ�� ���� ����
	std::vector<int>v4 = { 1,2,3,4,5,6,7,8,9,10 }; //�ʱ�ȭ ����Ʈ�� ����� ���� ����

	std::cout << "���� v1�� ������ : " << v1.size() << std::endl;
	std::cout << "���� v2�� ������ : " << v2.size() << std::endl;
	std::cout << "���� v3�� ������ : " << v3.size() << std::endl;
	std::cout << "���� v4�� ������ : " << v4.size() << std::endl;

	//capacity() : ���� �Ҵ�� �޸𸮿��� ������ �� �ִ� �ִ� ������ ��
	//�޸𸮰� �ʰ��� ���, ���� �޸��� 1/2��ŭ �߰�����
	std::cout << "==================================" << std::endl;
	std::cout << "������ capacity v1: " << v1.capacity() << std::endl;
	std::cout << "������ capacity v2: " << v2.capacity() << std::endl;
	std::cout << "������ capacity v3: " << v3.capacity() << std::endl;
	std::cout << "������ capacity v4: " << v4.capacity() << std::endl;
	std::cout << "==================================" << std::endl;

	v4.push_back(10);
	std::cout << "������ capacity v4(Ǫ�ù� ��): " << v4.capacity() << std::endl;

	std::vector<int>v5;
	v5.push_back(1);
	v5.push_back(2);
	v5.push_back(3);
	std::cout << "���� v5���" << std::endl;

	for (int i = 0; i < v5.size(); i++) {
		std::cout << "�ǹ����� ���� v5��� : " << v5[i] << std::endl;
	}

	//������� for
	//�����̳��� ��� ��Ҹ� �����ϰ� ��ȸ
	//�Ϲ� for���� �� ���� ��� ���������� �ڵ尡 ������ �� �ִ�
	//Ư�������̳� �Ϻ� ��ȸ�� ��ƴ�. �ݺ��ڸ� ���������� ���

	for (int i : v5) {
		std::cout << "������� for�� ���� v5 ��� : " << i << std::endl;
	}
	for (int& i : v5) {
		std::cout << "������� for��(����) ���� v5 ��� : " << i << std::endl;
	}


	//auto : Ÿ���߷�

	for (auto& i : v5)
	{
		i += 1; //������ ���� ���氡��
		std::cout << "�������(����) ���� v5 ��� : " << i << std::endl;
	}
	//������ �Ͼ�� �ʴ� ����� cont�� ���
	for (const auto& i : v5)
	{		
		std::cout << "�������(����) ���� v5 ��� : " << i << std::endl;
	}
	std::cout << "==================================" << std::endl;

	std::vector<int>v6;

	v6.push_back(1);
	v6.push_back(2);
	v6.push_back(3);
	v6.push_back(4);
	v6.insert(v6.begin() + 1, 10); //�ε��� 1�� 10�� ����
	v6.erase(v6.begin() + 3); //�ε��� 3�� ��Ҹ� ����
	v6.pop_back(); //������ �ε����� ��Ҹ� ����
	std::cout << "==================================" << std::endl;

	/*
	�ݺ��� �̿�(iterator)
	
	
	*/

	for (auto& i : v6)
	{
		std::cout << i << std::endl;
	}

	std::cout << "========�ݺ���========" << std::endl;

	std::vector<int>v7;
	v7.push_back(1);
	v7.push_back(2);
	v7.push_back(3);
	v7.push_back(4);
	v7.push_back(5);
	v7.emplace_back(1); //�����ʿ����������������
	//int i=0;
	for (std::vector<int>::const_iterator it = v7.begin(); it != v7.end(); ++it) {
		//*it += 10;
		std::cout << *it << "->";
	}
	//for (std::vector<int>::reverse_iterator it = v7.begin(); it != v7.rend(); ++it) {
	//	//*it += 10;
	//	std::cout << *it << "->";
	//}
	std::cout << "==================================" << std::endl;
	std::vector<int>v8;
	v8.push_back(1);
	v8.push_back(2);
	v8.push_back(3);
	v8.push_back(4);
	v8.push_back(5);

	//std::vector<int>::const_iterator iter = v8.begin(); // //���ۿ��Ҹ� ����Ű�� �ݺ���

	
	std::vector<int>vec = { 10,20,30,40 };
	
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}

	///////////////////////////////////////////
	std::vector<int>vt;
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	vt.push_back(10);
	
	
	vt.clear(); //�޸𸮰���
	std::cout << vt.capacity() << std::endl;

	std::vector<int>().swap(vt);

	std::cout << vt.capacity() << std::endl;

}




/*
=����=
�����ý���
- ���� ���
- ��� �� Ŭ���� ���

1. Shop
2. Item
3. Player
4. Inventory
[���]
1. Shop
 ����� ��, �Ĵ� ��
 ���ݾ� ����
 ���Ǹ� ��, ���� �ݾ��� �ݰ�
 ����������

2. Player
 - �⺻�ɷ�ġ
  �����ݷ�, ���� �� (��ȣ��������,Ŭ�������漱��)
  ��������� : �κ��丮 ������, �ɷ�ġ ����
  ��Ż����� : �κ��丮 ����

 �������ٸ����
*/