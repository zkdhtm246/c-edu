#pragma once
#include"Handle.h"

#define TRACK_WIDTH 2400 // Ʈ���� ���� ����
#define TRACK_HEIGHT 15   // Ʈ���� ���� ����
#define PLAYER_FOCUS_WIDTH 50  // �÷��̾ �� �� �ִ� ȭ�� �ʺ�
#define PLAYER_FOCUS_HEIGHT 30  // �÷��̾ �� �� �ִ� ȭ�� ����

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