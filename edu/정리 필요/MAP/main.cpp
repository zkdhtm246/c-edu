/****************************************************************
[Map]
- ���������̳�
- Key, Value�� ������ ����(pair)
- Key�� �����̳ʿ� �ߺ����� �� �� ����
- ���Ե� ������ �ڵ����� Key�� ���ĵ�


[unordered_map]
- ���ĵ��� ����
- ���ΰ� �ؽ��±׷� �̷����

[�ؽ����̺�]
- Ű-�� ������ ����
- �ؽ� �Լ��� ����ؼ� Ű�� �ؽð����� ��ȯ�ϰ� �� ���� ������� �����͸� �����ϰų� �˻��ϴ� ���
- 
****************************************************************/

#include<iostream>
#include<map>

class Armor {
private:
	std::string name;
	int defense;
public:
	Armor() :name(""), defense(0) {}
	Armor(const std::string& n, int d) :name(n), defense(d) {}
	std::string GetName()const {
		return name;
	}
	int GetDef()const {
		return defense;
	}
};

int main() {
	std::map<std::string, int>data;
	std::map<std::string, int>::iterator iter;

	//pair : �� ���� ���� ��� �ϳ��� ��ü�� ����ϴ� ���ø� Ŭ����
	//�� ���� ���� �ٸ� Ÿ���� ���� �Բ� ������ �� ����
	//���� �� ���� ����� ������ ������ first, second�� ����


	//1.value_type
	//�⺻���� Ű-�� �� Ÿ���� ��Ÿ����. �� ����� ��������� pair ��ü�� �����Ͽ� insert�� ����
	//������ ������
	data.insert(std::map<std::string, int>::value_type("�ٺ�", 1));

	//2.make_pair : pair��ü�� �����ϴ� �Լ� ���ø�
	//make_pair("ȫ�浿", 5) -> std::pair<string, int>Ÿ���� ��ü�� ����
	//���ø� ���ڸ� �ڵ����� �߷��ϹǷ� Ÿ���� ��Ȯ���� ���� �� ����
	//������ Ÿ���� �ٷ� ���� ������� Ÿ�Լ����� �ʿ��� �� ����
	data.insert(std::make_pair("ȫ�浿", 5));

	//3.pair : Ű-�� ���� ��������� �����Ͽ� ����
	//��Ȯ�� Ÿ�Լ����� ���� �������� ����

	data.insert(std::pair<std::string, int>("ȫ�泲", 40));
	data.insert(std::pair<std::string, int>("ȫ�漭", 30));
	data.insert(std::pair<std::string, int>("ȫ���", 10));
	data.insert(std::pair<std::string, int>("����", 40));
	data.insert(std::pair<std::string, int>("ī����", 40));

	//4. ��ü�� ���� ����
	std::pair<std::string, int>pt1("����", 500);
	data.insert(pt1);
	data.erase("ȫ�泲");
	for (const auto& pair : data) {
		std::cout << "Ű�� : " << pair.first << ", ������ : " << pair.second << std::endl;
	}

	auto it = data.find("����");

	if (it != data.end()) {
		std::cout << "ã�Ҵ� : " << it->second << std::endl;
	}
	//count : �־��� Ű�� ������ ��ȯ
	//clear : ���� ��� ��� ����
	//at : �־��� Ű�� �ش簪�� ��ȯ
	//empty : 

	std::cout << data["����"] << std::endl;

	/////////////////////////////////////////
	std::map<std::string, Armor>armorMap;

	armorMap.insert(std::make_pair("helmet", Armor("ö����", 5)));
	armorMap.insert(std::make_pair("shield", Armor("������ ���� ����", 15)));
	armorMap.insert(std::make_pair("greaves", Armor("�Ź�", 25)));
	

	for (const auto& pair : armorMap) {
		std::cout << "Ű : " << pair.first << std::endl;
		std::cout << "�̸� : " << pair.second.GetName() << std::endl;
		std::cout << "���� : " << pair.second.GetDef() << std::endl;
	}

	std::string search;
	std::cout << "�˻��� ���� Ű�� �Է��ض� : ";
	std::cin >> search;

	auto it = armorMap.find(search);
	if (it != armorMap.end()) {

	}
}


/*

1. SOLID ��Ģ
2. Map vs unoridered_mapy
- �پ��ϰ� ������ ������
3. �ؽ����̺�
4. �ؽ��Լ�
5. �ؽ��浹
6. �浹 �ذ���
��ü�̴�, �����ּҹ�



=======================
����Ʈ������
directx VS vulkan ������
*/