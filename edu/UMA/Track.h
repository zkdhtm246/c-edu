#pragma once
#include"Handle.h"

#define TRACK_WIDTH 24000 // Ʈ���� ���� ����
#define TRACK_HEIGHT 15   // Ʈ���� ���� ����
#define PLAYER_FOCUS_WIDTH 140  // �÷��̾ �� �� �ִ� ȭ�� �ʺ�
#define PLAYER_FOCUS_HEIGHT 30  // �÷��̾ �� �� �ִ� ȭ�� ����

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