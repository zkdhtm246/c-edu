#pragma once
#include"Handle.h"
#ifndef DoubleBuffering_h
#define DoubleBuffering_h
 
//Rectangle ����ü
struct stRect {
	int nWidth;
	int nHeight;
};

//�ܼ� ���� ���� ���� ������ ���� ����ü
struct stConsole {
	//Console Handler
	HANDLE hConsole;
	//Console Rect Data
	stRect rtConsole;
	//Console Buffer Handler
	HANDLE hBuffer[2];
	//Current Console Buffer Index
	int nCurBuffer;

	stConsole()
		:hConsole(nullptr), hBuffer{ nullptr, }, nCurBuffer(0) {}
};

extern stConsole console;

void InitGame(bool bInitConsole = true);

//���� ����
void DestroyGame();

//ȭ�� Ŭ����
void ClearScreen();

//���� ����
void BufferFlip();

#endif