#pragma once
#include"Handle.h"

#define TRACK_WIDTH 24000 // 트랙의 가로 길이
#define TRACK_HEIGHT 15   // 트랙의 세로 높이
#define PLAYER_FOCUS_WIDTH 140  // 플레이어가 볼 수 있는 화면 너비
#define PLAYER_FOCUS_HEIGHT 30  // 플레이어가 볼 수 있는 화면 높이

class Character;

enum TrackCondition {
    CLEAR, RAINY, WINDY, SNOWY
};

class Track
{
private:
    char** track;
    int charPose;
    TrackCondition currentCondition = CLEAR;
public:
    Track();
    ~Track();
    void TrackBuild();
    void TrackPrint(const std::vector<int>& playX, const std::vector<int>&playY, const std::vector<Character*>& raceCharacters, int charPose);
};