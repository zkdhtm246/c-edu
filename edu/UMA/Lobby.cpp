#include "Lobby.h"


void gotoxy(int x, int y);

void MeinMeun(Cash& batCash)
{		
	std::vector<Character*>characterList;
	CreateCharacterList(characterList);

	while (1) {
		ClearScreen();
		TitleDraw();
 		int menuCode = MenuDraw();
		Track track;
		
		if (menuCode == 0) {			
			InitGame();			

			//캐릭터 선택
			int selectedCharacterIndex = CharacterChoice(characterList);
			Character* selectedCharacter = characterList[selectedCharacterIndex];

			//스킬 선택
			int selectedSkillIndex = SkillChoice(*selectedCharacter);
			Skill* selectedSkill = selectedCharacter->GetSkills()[selectedSkillIndex];
			selectedCharacter->SetSelectedSkill(selectedSkill);

			//배팅 선택
			int selectedBattingCash = Batting(characterList, selectedCharacterIndex, batCash);

			//경기 시작
			std::vector<Character*>raceCharacters;
			raceCharacters.push_back(characterList[selectedCharacterIndex]);
			raceCharacters.push_back(characterList[(selectedCharacterIndex + 1) % 3]);
			raceCharacters.push_back(characterList[rand() % 6 + 3]);
			raceCharacters.push_back(characterList[rand() % 6 + 3]);
			raceCharacters.push_back(characterList[rand() % 6 + 3]);
			raceCharacters.push_back(characterList[rand() % 6 + 3]);
			
			//track.UpdateCondition(time);
			track.TrackBuild();
			Race race(raceCharacters, track, &batCash);
			race.RaceStart(selectedBattingCash);

			std::cout << "\n경기가 종료되었습니다. 메인 메뉴로 돌아갑니다.\n";
			Sleep(2000);			
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

int CharacterChoice(const std::vector<Character*>& characterList)
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
	characterList[characterIndex]->PrintLobbyInfo();
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
				characterList[characterIndex]->PrintLobbyInfo();
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
				characterList[characterIndex]->PrintLobbyInfo();
			}
			break;
		}
		case SPACE: {
			return characterIndex;
		}
		}
	}
}

int Batting(const std::vector<Character*>& characterList, int index, Cash& batCash)
{
	system("cls");
	int x = 3;
	int y = 6;
	
	int inCash = batCash.GetCash();
	int battingCash = 0;
	printf("\n");
	std::cout << "배팅 금액을 설정하세요 (500원 단위)\n" << std::endl;
	std::cout << "                   소지금 : " << inCash << std::endl;
	gotoxy(x, y);
	std::cout << "      원" << std::endl;
	gotoxy(x, y);
	std::cout << battingCash << std::endl;

	while (1) {
		int n = KeyControl();
		switch (n) {
		case UP: {
			if (battingCash < inCash) {
				gotoxy(x, y);
				std::cout << "      원" << std::endl;
				gotoxy(x, y);
				battingCash += 500;
				std::cout << battingCash << std::endl;				
			}
			break;
		}
		case DOWN: {
			if (battingCash >= 100) {
				gotoxy(x, y);
				std::cout << "      원" << std::endl;
				gotoxy(x, y);
				battingCash -= 500;
				std::cout << battingCash << std::endl;				
			}
			break;
		}
		case SPACE: {
			batCash.SetBattingCash(battingCash);
			return battingCash;
		}
		}
	}

}

int SkillChoice(Character& selectedCharacter)
{
	ClearScreen();
	int x = 3;
	int y = 6;
	std::cout << "\n\n";
	std::cout << "                     [스 킬    선 택]\n\n";

	const std::vector<Skill*>& skills = selectedCharacter.GetSkills();
	for (int i = 0; i < skills.size(); ++i) {
		gotoxy(x, y + i);
		std::cout << "> " << skills[i]->GetName().c_str();
	}

	int skillIndex = 0;
	while (1) {
		int n = KeyControl();
		switch (n) {
		case UP: {
			if (skillIndex <= 0) {
				gotoxy(x, y);
				std::cout << "  ";
				gotoxy(x, y - 1);
				std::cout << "> ";
				skillIndex--;
			}
			break;
		}
		case DOWN: {
			if (skillIndex < skills.size() - 1) {
				gotoxy(x, y);
				std::cout << "  ";
				gotoxy(x, y + 1);
				std::cout << "> ";
				skillIndex++;
			}
			break;
		}
		case SPACE: {
			return skillIndex;
		}
		}
	}
}
