#pragma once
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include"DoubleBuffring.h"
#include"Race.h"
#include"Track.h"
#include"Character.h"
#include"Lobby.h"
#include"Skill.h"

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 0

void gotoxy(int x, int y);
int KeyControl();
void SkillRandom();