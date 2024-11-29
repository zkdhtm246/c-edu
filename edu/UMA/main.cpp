#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include "DoubleBuffring.h"
#include"Character.h"
#include"Track.h"
#include"Race.h"

int main()
{
    Track track;

    std::vector<Character*>characterList;
    CreateCharacterList(characterList);
    Race race(characterList, track);

    system("mode con:cols=150 lines=50");
    // Ʈ�� �ʱ�ȭ
    InitGame();
    race.RaceStart();
    track.TrackBuild();  

    DestroyGame();
    DeleteCharacterList(characterList);

    return 0;
}


// Ŀ�� ��ġ �̵� �Լ�
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}