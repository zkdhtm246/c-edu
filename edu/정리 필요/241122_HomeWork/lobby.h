#pragma once
#include"player.h"

class Lobby
{
protected:
	Player* play;
	Shop* shop;

public:
	Lobby(Player* n,Shop* m)
		:play(n),shop(m) {
	}

	void Insert();
};

