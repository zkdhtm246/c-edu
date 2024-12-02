#include "Lobby.h"

void gotoxy(int x, int y);

void MeinMeun()
{		
	std::vector<Character*>characterList;
	CreateCharacterList(characterList);

	InitGame();

	Track track;

	while (1) {
		TitleDraw();
 		int menuCode = MenuDraw();
		if (menuCode == 0) {
			//게임시작
			int selectedCharacterIndex = CharacterChoice();
			
			std::vector<Character*>raceCharacters;
			raceCharacters.push_back(characterList[selectedCharacterIndex]);
			raceCharacters.push_back(characterList[(selectedCharacterIndex + 1) % 3]);
			
			track.TrackBuild();
			Race race(raceCharacters, track);			
			race.RaceStart();
			
		}
		else if (menuCode == 1)	{
			//게임설정
		}
		else if (menuCode == 2) {
			//종료
			DeleteCharacterList(characterList);
			return;
		}
		
	}	
}

void TitleDraw()
{
	std::cout << R"(
 __    __  .___  ___.      ___      .______   ____    ____  ______    __  
|  |  |  | |   \/   |     /   \     |   _  \  \   \  /   / /  __  \  |  | 
|  |  |  | |  \  /  |    /  ^  \    |  |_)  |  \   \/   / |  |  |  | |  | 
|  |  |  | |  |\/|  |   /  /_\  \   |   ___/    \_    _/  |  |  |  | |  | 
|  `--'  | |  |  |  |  /  _____  \  |  |          |  |    |  `--'  | |  | 
 \______/  |__|  |__| /__/     \__\ | _|          |__|     \______/  |__| 
                                                         
	)" << std::endl;
}

int MenuDraw()
{
	int x = 30;
	int y = 12;
	gotoxy(x - 2, y);
	printf("> 게 임 시 작");
	gotoxy(x, y + 1);
	printf("게 임 설 정");
	gotoxy(x, y + 2);
	printf("   종 료   ");
	
	while (1) {
		int n = KeyControl();
		switch (n) {
		case UP: {
			if (y > 12) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				printf(">");
			}
			break;
		}
		case DOWN: {
			if (y < 14) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SPACE:
			return y - 12;
		}
	}
}

int CharacterChoice()
{
	int x = 3;
	int y = 6;
	system("cls");
	printf("\n\n");
	printf("                     [캐 릭 터    선 택]\n\n");
	gotoxy(x, y);
	printf("> [HARU URARA]"); //14
	gotoxy(x + 19, y);
	printf("  [GOLD SHIP ]"); //16
	gotoxy(x + 39, y);
	printf(" [OGURI CAP ]"); //18

	int characterIndex = 0;

	while (1) {
		int n = KeyControl();
		switch (n) {
		case RIGHT: {
			if (characterIndex < 2) {
				gotoxy(x, y);
				printf(" ");
				gotoxy(x += 19, y);
				printf(">");
				characterIndex++;
			}
			break;
		}
		case LEFT: {
			if (characterIndex > 0) {
				gotoxy(x, y);
				printf(" ");
				gotoxy(x -= 19, y);
				printf(">");
				characterIndex--;
			}
			break;
		}
		case SPACE: {
			return characterIndex;
		}
		}
	}
}
