#pragma once
#include"Handle.h"
#ifndef DoubleBuffering_h
#define DoubleBuffering_h
 
//Rectangle 구조체
struct stRect {
	int nWidth;
	int nHeight;
};

//콘솔 관련 설정 값을 가지고 있을 구조체
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

//버퍼 해제
void DestroyGame();

//화면 클리어
void ClearScreen();

//버퍼 스왑
void BufferFlip();

#endif