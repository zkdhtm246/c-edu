#pragma once
#include"Handle.h"

class Cash;

void MeinMeun(Cash& batCash);
void TitleDraw();
int MenuDraw();
int CharacterChoice(const std::vector<Character*>& characterList);
int Batting(const std::vector<Character*>& characterList, int index, Cash& batCash);
int SkillChoice(Character& selectedCharacter);