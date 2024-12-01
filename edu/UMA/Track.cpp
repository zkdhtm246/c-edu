#include "Track.h"

#include"Character.h"
#include"Race.h"
#include<Windows.h>


Track::Track()
{
    TrackBuild();
}

void Track::TrackBuild()
{
    for (int i = 0; i < TRACK_HEIGHT; ++i) {
        for (int j = 0; j < TRACK_WIDTH; ++j) {
            if (i == 0 || i == TRACK_HEIGHT - 1) {
                track[i][j] = '=';
            }
            else {
                track[i][j] = ' ';
            }
        }
    }
    //handle.CursorView();
}

void Track::TrackPrint(int playX, int playY, int cpuX, int cpuY)
{
    
    int start_x = playX - PLAYER_FOCUS_WIDTH / 2;
    int end_x = playX + PLAYER_FOCUS_WIDTH / 2;
    int start_y = playY - PLAYER_FOCUS_HEIGHT / 2;
    int end_y = playY + PLAYER_FOCUS_HEIGHT / 2;

    // ��� ������ Ʈ�� ������ ���� �ʵ��� ����
    if (start_x < 0) start_x = 0;
    if (end_x > TRACK_WIDTH) end_x = TRACK_WIDTH;
    if (start_y < 0) start_y = 0;
    if (end_y > TRACK_HEIGHT) end_y = TRACK_HEIGHT;
    
    ClearScreen();

    COORD cursorPos = { 0,0 };
    DWORD dwWritten;   

    for (int i = start_y; i < end_y; ++i)
    {     
        for (int j = start_x; j < end_x; ++j)
        {
            char ch = ' ';
            if (i == playY && j == playX && i == cpuY && j == cpuX)
                ch = 'x';  // �÷��̾�� CPU�� ���� ��ġ�� ������ 'X' ���
            if (i == playY && j == playX)
                ch = 'p';  // �÷��̾� ��ġ
            else if (i == cpuY && j == cpuX)
                ch = 'c';  // CPU ��ġ
            else
                ch = track[i][j];  // Ʈ�� ��� (0, 1, 2 ��)

            WriteConsoleOutputCharacter(console.hBuffer[console.nCurBuffer], &ch, 1, cursorPos, &dwWritten);

            cursorPos.X++;
        }
        cursorPos.X = 0;
        cursorPos.Y++;
    }
    BufferFlip();
    
}
