//-�������� �����ϴ� ���� -
//-�������
//- 5x5
//- ���ڸ� ���� ��� �ش� ĭ�� ��ȣ(#, * ��)�� �ٲ�
//- ����, ����, �밢�� ���� �˻�
//- ���������� 3����
//
//= ������� =
//-�÷��̾� ������ �����
//- ��ǻ�͵� �÷���
//- �����ɼ� üũ


#include<iostream>
#include"Bingo.h"

using namespace std;


int main() {

	Bingo* play = new Bingo(0, 0);

	int bingoLength;

	cin >> bingoLength;

	play->Build(bingoLength);

	int num;
	int bingoSuccess = 0;

	while (1)
	{
		cin >> num;

		play->Result(num);

		bingoSuccess += play->BingoSuccess();

		if (bingoSuccess >= 12)
		{
			cout << "�¸�" << endl;
		}

	}
	
}

