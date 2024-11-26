/******************************************************************************
D(Depeondency Inversion Principle, DIP, 의존성 역전 원칙)
- 상위모듈이 하위모듈에 의존하지 않도록 하고, 추상화된 인터페이스에 의존하도록 해야한다는 원칙
- 하위모듈은 상위모듈의 구현에 의존X, 두 모듈이 추상화된 인터페이스를 통해 연결되어야 한다
- 구체적인 구현에 의존하지 않고, 추상화에 의존하여 모듈 간의 결합도를 줄ㅇ미

******************************************************************************/


/***********************
- 상위는 게임캐릭터
- 하위는 무기시스템


***********************/

//class Sword {
//public:
//	void Use() {
//		//칼을 휘두름
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
		//칼을 휘두름
	}
};
class Bow :public Weapon {
	void Use() override {
		//활을 쏜다
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
	//칼을 쓰는
	Player playerSword(&s);
	playerSword.Attack();
	//활을 쓰는
	Player playerBow(&b);
	playerBow.Attack();

}

