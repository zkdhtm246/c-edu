/******************************************************************

switch
- ���������� ó���ؾ��� ��, ����ϴ� ���ǹ� �� �ϳ�.
- �ַ� ������� �������� �б��� �� ���Ǹ�, �������� ����.

[switch�� ����]
- �ϳ��� ������ �˻��ϰ� �� ������ ���� ���� ���� case ��� �� �ϳ��� ����
- break Ű���带 ���� �� case�� ������ ����.
- break�� ������ ���� case ����� �����ؼ� ����ȴ�.
- ǥ���Ŀ��� ����, ����, ����Ÿ�� ���� ���´�.

[���]
- ������� �������� ���� ������ �� �ϳ��� �����ϴ� ��Ȳ���� ����ϱ� ����.
- �ڵ��� �������� ���̰� ȿ������ ������ ���� ������ ǥ������ ������ �ִ�.
- ������� �񱳴� �Ұ�(10<x<20 ��)
- if���� ���������� �پ��� ������ �ٷ�⿡ ����. �������ڸ� ����Ͽ� ������ ������ ���� �� ����.


	switch (ǥ����)
	{
	case ��1 :
		//��1�� �ش�Ǵ� �ڵ�..
		break;
	case ��2 :
		//��2�� �ش�Ǵ� �ڵ�..
		break;
	default:
		//� case���� �ش����� ���� �� ����Ǵ� �ڵ�(��������)
		break;
	}

[break��?]
- �ݺ����̳� switch���� ������ �� �����.
- break�� ����Ǹ� �ش� ������ switch���� �����ϰ� break �������� �̵��Ͽ� ����ȴ�.
- ���� switch�� ��ø�ݺ��������� break�� �ִ� �ش� ��������!!!����������.

******************************************************************/


#include<iostream>

int main()
{
	int choice;

	std::cout << "������ �����ϼ���! " << std::endl;
	std::cout << "1. ��" << std::endl;
	std::cout << "2. �߷ζ�Ʈ" << std::endl;
	std::cout << "3. ������ġ" << std::endl;
	std::cout << "4. ��Ÿũ����Ʈ" << std::endl;
	std::cout << "5. ��ƺ��2" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1: //if(choice==1)
		std::cout << "�� ����" << std::endl;
	break;
	case 2:
		std::cout << "�߷ζ�Ʈ ����" << std::endl;
		break;
	case 3:
		std::cout << "������ġ ����" << std::endl;
		break;
	case 4:
		std::cout << "��Ÿũ����Ʈ ����" << std::endl;
		break;
	case 5:
		std::cout << "��ƺ��2" << std::endl;
		break;
	default: //else
		std::cout << "���� �߸��ƽ��ϴ�." << std::endl;
		break;
	} //break�� ������ ���⸦ �������´�.(switch���� ���������� �ȴ�.)



	int jobChoice;
	int skillChoice;

	std::cout << "������ �����ض�!(1: ����, 2: ������, 3: ����) : ";
	std::cin >> jobChoice;
	switch (jobChoice)
	{
	case 1:
		std::cout << "���縦 �����ߴ�. � ��ų�� ����Ҳ���?(1: �뽬����, 2. ���а���) : ";
		std::cin >> skillChoice;
			
		switch (skillChoice)
		{
			case 1:
				std::cout << "�뽬����!!!" << std::endl;
				break;
			case 2:
				std::cout << "���а���!!!" << std::endl;
				break;

		}
	break;

	case 2:
		std::cout << "�����R";
		break;
	default:
		break;

	}



}
