#pragma once
#include"Handle.h"

#define TRACK_WIDTH 2400 // 트랙의 가로 길이
#define TRACK_HEIGHT 15   // 트랙의 세로 높이
#define PLAYER_FOCUS_WIDTH 50  // 플레이어가 볼 수 있는 화면 너비
#define PLAYER_FOCUS_HEIGHT 30  // 플레이어가 볼 수 있는 화면 높이

class Track
{
private:
   // Handle handle;
    char track[TRACK_HEIGHT][TRACK_WIDTH];
    
public:
    Track();   
    void TrackBuild();
    void TrackPrint(int playX, int playY, int cpuX, int cpuY);
};