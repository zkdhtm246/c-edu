#include "Handle.h"

void gotoxy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

int KeyControl()
{
	//72 위, 80 아래, 77 오른쪽, 75 왼쪽
	char temp = _getch();

	if (temp == 72) {
		return UP;
	}
	else if (temp == 80) {
		return DOWN;
	}
	else if (temp == 77) {
		return RIGHT;
	}
	else if (temp == 75) {
		return LEFT;
	}
	else if (temp == ' ') {
		return SPACE;
	}		
}

void SkillRandom()
{
	std::srand(static_cast<unsigned>(std::time(0)));
}
