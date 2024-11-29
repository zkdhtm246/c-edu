#pragma once
#include<Windows.h>

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

stConsole console;

void InitGame(bool bInitConsole = true) {
	//Initialize Console Data
	if (bInitConsole) {
		//���� �ܼ��� �ڵ��� �޾ƿɴϴ�
		console.hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		//���� �ܼ� ������ �ε����� 0���� �ʱ�ȭ
		console.nCurBuffer = 0;

		//�ܼ� ���� ����
		CONSOLE_CURSOR_INFO consoleCursor{ 1,FALSE };	//�ܼ��� Ŀ�� �������� �����մϴ�.
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo{ 0, };
		GetConsoleScreenBufferInfo(console.hConsole, &consoleInfo);
		consoleInfo.dwSize.X = 40;	//�ܼ��� Width
		consoleInfo.dwSize.Y = 30;	//�ܼ��� Height

		//�ܼ��� ũ�⸦ �ٽ� ���(���߿� �׸� �׸� �� ���)
		console.rtConsole.nWidth = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left;
		console.rtConsole.nHeight = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top;

		//�ܼ��� ù��° ȭ�� ���� ����
		console.hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
		SetConsoleScreenBufferSize(console.hBuffer[0], consoleInfo.dwSize);	//ȭ�� ���� ũ�� ����
		SetConsoleWindowInfo(console.hBuffer[0], TRUE, &consoleInfo.srWindow);	//�ܼ� ����
		SetConsoleCursorInfo(console.hBuffer[0], &consoleCursor);			//�ܼ��� Ŀ�� ����

		//�ܼ��� �ι�° ȭ�� ���� ����
		console.hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
		SetConsoleScreenBufferSize(console.hBuffer[1], consoleInfo.dwSize);	//ȭ�� ���� ũ�� ����
		SetConsoleWindowInfo(console.hBuffer[1], TRUE, &consoleInfo.srWindow);	//�ܼ� ����
		SetConsoleCursorInfo(console.hBuffer[1], &consoleCursor);
	}
}

//���� ����
void DestroyGame() {
	if (console.hBuffer[0] != nullptr) {
		CloseHandle(console.hBuffer[0]);
	}
	if (console.hBuffer[1] != nullptr) {
		CloseHandle(console.hBuffer[1]);
	}
}

//ȭ�� Ŭ����
void ClearScreen() {
	COORD pos{ 0, };
	DWORD dwWritten = 0;
	unsigned size = console.rtConsole.nWidth * console.rtConsole.nHeight;

	//�ܼ� ȭ�� ��ü�� ���⸦ �־� �� ȭ��ó�� ����ϴ�
	FillConsoleOutputCharacter(console.hConsole, ' ', size, pos, &dwWritten);
	SetConsoleCursorPosition(console.hConsole, pos);
}

//���� ����
void BufferFlip() {
	//ȭ�� ���� ����
	SetConsoleActiveScreenBuffer(console.hBuffer[console.nCurBuffer]);
	//ȭ�� ���� �ε����� ��ü
	console.nCurBuffer = console.nCurBuffer ? 0 : 1;
}
