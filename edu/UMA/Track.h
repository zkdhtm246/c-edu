#pragma once
#include"Handle.h"

#define TRACK_WIDTH 24000 // Ʈ���� ���� ����
#define TRACK_HEIGHT 15   // Ʈ���� ���� ����
#define PLAYER_FOCUS_WIDTH 140  // �÷��̾ �� �� �ִ� ȭ�� �ʺ�
#define PLAYER_FOCUS_HEIGHT 30  // �÷��̾ �� �� �ִ� ȭ�� ����

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
    void TrackPrint(int playX, int playY, int cpuX, int cpuY, int charPose);

    void UpdateCondition(int time);
    TrackCondition GetCurrentCondition()const { return currentCondition; }
};