#include "DoubleBuffring.h"

stConsole console;

void InitGame(bool bInitConsole)
{
	//Initialize Console Data
	if (bInitConsole) {
		//���� �ܼ��� �ڵ��� �޾ƿɴϴ�
		console.hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		//���� �ܼ� ������ �ε����� 0���� �ʱ�ȭ
		console.nCurBuffer = 0;

		//�ܼ� ���� ����
		CONSOLE_CURSOR_INFO consoleCursor{ 1,FALSE };	//�ܼ��� Ŀ�� �������� �����մϴ�.
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo{ 0, };
		consoleCursor.bVisible = 0;
		GetConsoleScreenBufferInfo(console.hConsole, &consoleInfo);
		consoleInfo.dwSize.X = TRACK_WIDTH;		//�ܼ��� Width
		consoleInfo.dwSize.Y = TRACK_HEIGHT / 2;	//�ܼ��� Height

		SetConsoleScreenBufferSize(console.hConsole, consoleInfo.dwSize);
		SetConsoleCursorInfo(console.hConsole, &consoleCursor);

		//�ܼ��� ũ�⸦ �ٽ� ���(���߿� �׸� �׸� �� ���)
		console.rtConsole.nWidth = consoleInfo.dwSize.X;
		console.rtConsole.nHeight = consoleInfo.dwSize.Y;

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

void DestroyGame()
{
	if (console.hBuffer[0] != nullptr) {
		CloseHandle(console.hBuffer[0]);
	}
	if (console.hBuffer[1] != nullptr) {
		CloseHandle(console.hBuffer[1]);
	}
}

void ClearScreen()
{
	COORD pos{ 0, };
	DWORD dwWritten = 0;
	unsigned size = console.rtConsole.nWidth * console.rtConsole.nHeight;

	//�ܼ� ȭ�� ��ü�� ���⸦ �־� �� ȭ��ó�� ����ϴ�
	FillConsoleOutputCharacter(console.hConsole, ' ', size, pos, &dwWritten);
	SetConsoleCursorPosition(console.hConsole, pos);
}

void BufferFlip()
{
	//ȭ�� ���� ����
	SetConsoleActiveScreenBuffer(console.hBuffer[console.nCurBuffer]);
	//ȭ�� ���� �ε����� ��ü
	console.nCurBuffer = console.nCurBuffer ? 0 : 1;
}