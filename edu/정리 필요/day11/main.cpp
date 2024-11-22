/*************************************************************************************

string
- C++���� �����ϴ� ���ڿ��� �ٷ�� ���� Ŭ����
- C��Ÿ���� ���ڹ迭���� ���� �����ϰ� ������
- ���������� �����迭�� ����ϰ� ũ�⸦ �ڵ����� ����
- ���ڿ� ��, ����, �κ� ���ڿ� ����, �˻�, ���� �� �پ��� ������ ����
- �޸𸮸� �������� �����ϱ� ������, ��Ը� ���ڿ� �۾����� �޸� ������� �� �� �ִ�
- ũ�� ������ ���� �߻��ϴ� ���, ���Ҵ� ������� ���� �������ϰ� ���� �� �ִ�
- ���ڿ��� ª���� ���� �޸� �Ҵ��� ���ϰ� ���ÿ� �����Ͽ� ����ȭ��(SSO -> Small String Optimization)

*************************************************************************************/

#include<iostream>

int main() {
	std::string str = "Hello";
	std::string name = "World";
	std::string result;

	//1. ���ڿ� ���� ���
	std::cout << "str�� ����: " << str.length() << std::endl;
	std::cout << "name�� ���� : " << name.size() << std::endl;
	
	//2. ���ڿ� ����
	result = str + ", " + name + "!";
	std::cout << "���� : " << result << std::endl;

	//3. �κ� ���ڿ� ���� : Ư�� ��ġ���� ������ ���̸�ŭ �κ� ���ڿ��� ����
	std::string sub = result.substr(0, 5);
	std::cout << "�κ� ���ڿ� : " << sub << std::endl;

	//4. ���ڿ� �ٲٱ�?
	//���ڿ��� Ư�� �κ��� �ٸ� ���ڿ���...
	result.replace(0, 2, "Hi"); //0��° ��ġ���� 2���� ���ڸ� Hi�� �ٲ�
	std::cout << "������ ���ڿ� : " << result << std::endl;

	//

	const char* cstr = result.c_str();
	std::cout << "C��Ÿ�Ϸ� : " << cstr << std::endl;

	//append : ���ڿ��� ���� �ٸ� ���ڿ��� �߰�
	//insert : ������ ��ġ�� ���ڿ��� ����(��ġ, ������ ���ڿ�)
	//erase : ������ ��ġ���� Ư�� ���̸�ŭ ���ڿ� ����(��ġ, ����)


	//���ڿ� ������
	std::string inptut;
	std::cin >> inptut;
	
	std::reverse(inptut.begin(), inptut.end());

	std::cout << inptut << std::endl;


	//���ڿ� �� Ư�� ���� ����
	int count = 0;
	char target;
	std::string input1;
	std::cout << "���ڿ��� �Է��ض�";
	std::cin >> input1;
	std::cout << "ã�� ���ڸ� �Է��ض�";
	std::cin >> target;

	for (int i = 0; i < input1.length(); i++) {
		if (input1[i] == target) {
			count++;
		}
	}

}