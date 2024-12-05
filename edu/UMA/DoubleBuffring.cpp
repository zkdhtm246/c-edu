#include "DoubleBuffring.h"

stConsole console;

void InitGame(bool bInitConsole)
{
	//Initialize Console Data
	if (bInitConsole) {
		//현재 콘솔의 핸들을 받아옵니다
		console.hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		//현재 콘솔 버퍼의 인덱스를 0으로 초기화
		console.nCurBuffer = 0;

		//콘솔 관련 설정
		CONSOLE_CURSOR_INFO consoleCursor{ 1,FALSE };	//콘솔의 커서 깜빡임을 제거합니다.
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo{ 0, };
		consoleCursor.bVisible = 0;
		GetConsoleScreenBufferInfo(console.hConsole, &consoleInfo);
		consoleInfo.dwSize.X = TRACK_WIDTH;		//콘솔의 Width
		consoleInfo.dwSize.Y = TRACK_HEIGHT / 2;	//콘솔의 Height

		SetConsoleScreenBufferSize(console.hConsole, consoleInfo.dwSize);
		SetConsoleCursorInfo(console.hConsole, &consoleCursor);

		//콘솔의 크기를 다시 계산(나중에 그림 그릴 때 사용)
		console.rtConsole.nWidth = consoleInfo.dwSize.X;
		console.rtConsole.nHeight = consoleInfo.dwSize.Y;

		//콘솔의 첫번째 화면 버퍼 생성
		console.hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
		SetConsoleScreenBufferSize(console.hBuffer[0], consoleInfo.dwSize);	//화면 버퍼 크기 설정
		SetConsoleWindowInfo(console.hBuffer[0], TRUE, &consoleInfo.srWindow);	//콘솔 설정
		SetConsoleCursorInfo(console.hBuffer[0], &consoleCursor);			//콘솔의 커서 설정

		//콘솔의 두번째 화면 버퍼 생성
		console.hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
		SetConsoleScreenBufferSize(console.hBuffer[1], consoleInfo.dwSize);	//화면 버퍼 크기 설정
		SetConsoleWindowInfo(console.hBuffer[1], TRUE, &consoleInfo.srWindow);	//콘솔 설정
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

	//콘솔 화면 전체를 띄어쓰기를 넣어 빈 화면처럼 만듭니다
	FillConsoleOutputCharacter(console.hConsole, ' ', size, pos, &dwWritten);
	SetConsoleCursorPosition(console.hConsole, pos);
}

void BufferFlip()
{
	//화면 버퍼 설정
	SetConsoleActiveScreenBuffer(console.hBuffer[console.nCurBuffer]);
	//화면 버퍼 인덱스를 교체
	console.nCurBuffer = console.nCurBuffer ? 0 : 1;
}