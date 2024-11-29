#include "Track.h"
#include"Handle.h"
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
    handle.CursorView();
}

void Track::TrackPrint(int playX, int playY, int cpuX, int cpuY)
{
    
    int start_x = playX - PLAYER_FOCUS_WIDTH / 2;
    int end_x = playX + PLAYER_FOCUS_WIDTH / 2;
    int start_y = playY - PLAYER_FOCUS_HEIGHT / 2;
    int end_y = playY + PLAYER_FOCUS_HEIGHT / 2;

    // 출력 범위가 트랙 범위를 넘지 않도록 제한
    if (start_x < 0) start_x = 0;
    if (end_x > TRACK_WIDTH) end_x = TRACK_WIDTH;
    if (start_y < 0) start_y = 0;
    if (end_y > TRACK_HEIGHT) end_y = TRACK_HEIGHT;
    
    system("cls");

    for (int i = start_y; i < end_y; ++i)
    {
        for (int j = start_x; j < end_x; ++j)
        {
            if (i == playY && j == playX && i == cpuY && j == cpuX)
                std::cout << "X";  // 플레이어와 CPU가 같은 위치에 있으면 'X' 출력
            if (i == playY && j == playX)
                std::cout << "P";  // 플레이어 위치
            else if (i == cpuY && j == cpuX)
                std::cout << "C";  // CPU 위치
            else
                std::cout << track[i][j];  // 트랙 출력 (0, 1, 2 등)
        }
        std::cout << std::endl;
    }
}
