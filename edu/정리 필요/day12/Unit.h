#pragma once
class Unit
{
protected:

	int mAtk;
	int mDef;


public:
	Unit(int atk = 0, int def = 0);
	~Unit();

	int GetAtk()const { return mAtk; }
	void SetAtk(const int atk) { mAtk = atk; }

	int GetDef()const { return mDef; }
	void SetDef(const int def) { mDef = def; }
};

