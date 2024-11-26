/******************************************************************************
D(Depeondency Inversion Principle, DIP, ������ ���� ��Ģ)
- ��������� ������⿡ �������� �ʵ��� �ϰ�, �߻�ȭ�� �������̽��� �����ϵ��� �ؾ��Ѵٴ� ��Ģ
- ��������� ��������� ������ ����X, �� ����� �߻�ȭ�� �������̽��� ���� ����Ǿ�� �Ѵ�
- ��ü���� ������ �������� �ʰ�, �߻�ȭ�� �����Ͽ� ��� ���� ���յ��� �٤���

******************************************************************************/


/***********************
- ������ ����ĳ����
- ������ ����ý���


***********************/

//class Sword {
//public:
//	void Use() {
//		//Į�� �ֵθ�
//	}
//};
//class Player {
//	Sword s;
//public:
//	void Attack() {
//		s.Use();
//	}
//};
class Weapon {
public:
	virtual void Use() = 0;
	
};
//
class Sword :public Weapon {
	void Use() override {
		//Į�� �ֵθ�
	}
};
class Bow :public Weapon {
	void Use() override {
		//Ȱ�� ���
	}
};

class Player {
private:
	Weapon* weapon;	
public:
	Player(Weapon* weapon)
		:weapon(weapon) {}

	void Attack() {
		weapon->Use();
	}
};

int main() {
		
	Sword s;
	Bow b;
	//Į�� ����
	Player playerSword(&s);
	playerSword.Attack();
	//Ȱ�� ����
	Player playerBow(&b);
	playerBow.Attack();

}

