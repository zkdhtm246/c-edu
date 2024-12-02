#include "Track.h"

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
}

void Track::TrackPrint(int playX, int playY, int cpuX, int cpuY)
{
    ClearScreen();

    int start_x = playX - PLAYER_FOCUS_WIDTH / 2;
    int end_x = playX + PLAYER_FOCUS_WIDTH / 2;
    int start_y = playY - PLAYER_FOCUS_HEIGHT / 2;
    int end_y = playY + PLAYER_FOCUS_HEIGHT / 2;

    // 출력 범위가 트랙 범위를 넘지 않도록 제한
    if (start_x < 0) start_x = 0;
    if (end_x > TRACK_WIDTH) end_x = TRACK_WIDTH;
    if (start_y < 0) start_y = 0;
    if (end_y > TRACK_HEIGHT) end_y = TRACK_HEIGHT;

    COORD cursorPos;
    cursorPos.X = 0;
    cursorPos.Y = 0;
    DWORD dwWritten;   

    for (int i = start_y; i < end_y; ++i)
    {
        cursorPos.X = 0;
        for (int j = start_x; j < end_x; ++j)
        {
            char ch = ' ';
            if (i == playY && j == playX && i == cpuY && j == cpuX) {
                ch = 'x';  // 플레이어와 CPU가 같은 위치에 있으면 'X' 출력
            }                
            else if (i == playY && j == playX) {
                ch = 'p';  // 플레이어 위치
            }                
            else if (i == cpuY && j == cpuX) {
                ch = 'c';  // CPU 위치
            }                
            else {
                ch = track[i][j];  // 트랙 출력 (0, 1, 2 등)
            }               

            WriteConsoleOutputCharacter(console.hBuffer[console.nCurBuffer], &ch, 1, cursorPos, &dwWritten);

            cursorPos.X++;           
        }        
        cursorPos.Y++;
    }
    BufferFlip();    
}
