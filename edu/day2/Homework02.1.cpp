


#include<iostream>


int main()
{
	int choiceGame;
	int choiceChr;

	std::cout << "�����ϴ� ������ �������ּ���." << std::endl;
	std::cout << "1. ��ũ����Ʈ3" << std::endl;
	std::cout << "2. ��ƺ��3" << std::endl;
	std::cout << "3. ����" << std::endl;
	std::cout << "4. ���� ���� ������" << std::endl;

	std::cin >> choiceGame;

	if (choiceGame == 1) // ��ũ����Ʈ3
	{
		std::cout << "����� ��ũ����Ʈ3�� �����ϼ̱���" << std::endl;
		std::cout << "====������ �������ּ���====" << std::endl;
		std::cout << "1. �޸�" << std::endl;
		std::cout << "2. ��ũ" << std::endl;
		std::cout << "3. ����Ʈ����" << std::endl;
		std::cout << "4. �𵥵�" << std::endl;

		std::cin >> choiceChr;

		if (choiceChr == 1 || choiceChr == 3)
		{
			std::cout << "����̾𽺸� ���Ͽ�!!" << std::endl;
		}
		else if (choiceChr == 2 || choiceChr == 4)
		{
			std::cout << "ȣ��� �ƹ��͵� �ƴϾ�!!" << std::endl;
		}
		else
		{
			std::cout << "���� �����Դϴ�.";
		}
	}

	else if (choiceGame == 2) //��ƺ��3
	{
		std::cout << "����� ��ƺ��3�� �����ϼ̱���" << std::endl;
		std::cout << "====������ �������ּ���====" << std::endl;
		std::cout << "1. ������ õ��" << std::endl;
		std::cout << "2. ��Ȥ�� �Ǹ�" << std::endl;
		std::cout << "3. ������ ���ȷ�" << std::endl;

		std::cin >> choiceChr;

		if (choiceChr == 1)
		{
			std::cout << "�ż����̴�!!" << std::endl;
		}
		else if (choiceChr == 2)
		{
			std::cout << "�����ϴ� ���! ���� ������! ����!" << std::endl;
		}
		else if (choiceChr == 3)
		{
			std::cout << "�ΰ���...�Ǳ�� �ϼ̱���" << std::endl;
		}
		else
		{
			std::cout << "���� �����Դϴ�.";
		}
	}

	else if (choiceGame == 3) //����
	{
		std::cout << "����� ������ �����ϼ̱���" << std::endl;
		std::cout << "====������ �������ּ���====" << std::endl;
		std::cout << "1. ������ ���" << std::endl;
		std::cout << "2. ����� ����" << std::endl;
		std::cout << "3. ������ �̳��" << std::endl;
		std::cout << "4. ������ ���޸�" << std::endl;
		std::cout << "5. ������ ��Ÿ��" << std::endl;

		std::cin >> choiceChr;

		if (choiceChr == 1)
		{
			std::cout << "�ٸ����佺�� ������!" << std::endl;
		}
		else if (choiceChr == 2)
		{
			std::cout << "������� �����!" << std::endl;
		}
		else if (choiceChr == 3)
		{
			std::cout << "�پ˰� ������!" << std::endl;
		}
		else if (choiceChr == 4)
		{
			std::cout << "�ο����� ������!" << std::endl;
		}
		else if (choiceChr == 5)
		{
			std::cout << "��Į�ν��� ���Ǹ�!" << std::endl;
		}
		else
		{
			std::cout << "���� �����Դϴ�.";
		}
	}

	else if (choiceGame == 4) //���� ���� ������
	{
		std::cout << "����� ���� ���� �����带 �����ϼ̱���" << std::endl;
		std::cout << "====������ �������ּ���====" << std::endl;
		std::cout << "1. �� ����" << std::endl;
		std::cout << "2. ����" << std::endl;
		std::cout << "3. Ȳ��" << std::endl;
		std::cout << "4. AD CARRY" << std::endl;
		std::cout << "5. ����" << std::endl;

		std::cin >> choiceChr;

		if (choiceChr == 1)
		{
			std::cout << "�װ� �԰� ž���� ��" << std::endl;
		}
		else if (choiceChr == 2)
		{
			std::cout << "���� �̵尡 ���� ������ �����" << std::endl;
		}
		else if (choiceChr == 3)
		{
			std::cout << "�׷��� �̵�� ����" << std::endl;
		}
		else if (choiceChr == 4)
		{
			std::cout << "�߿��� ���� ������ �ʴ� ����" << std::endl;
		}
		else if (choiceChr == 5)
		{
			std::cout << "������ �����ʹϱ�" << std::endl;
		}
		else
		{
			std::cout << "���� �����Դϴ�.";
		}
	}


	else
	{
		std::cout << "���� �����Դϴ�." << std::endl;
	}


}