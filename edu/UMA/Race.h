#pragma once
#include"Handle.h"

class Track;
class Character;
class Cash;
class Skill;

class Race
{
private:
    int playX, playY;
    int cpuX, cpuY;
    int charPose;
    std::vector<Character*>& RaceCharacterList;
    Track& track;
    Cash* batCash;

public:
    Race(std::vector<Character*>& characters, Track& t, Cash* cash);

    void RaceStart(int cash);
    void RaceWin(int cash);
    //void RaceLose(int cash);    

    void UpdateRank();

    void PoseState();

    int GetplayX();
    int GetplayY();
    int GetcpuX();
    int GetcpuY();
};