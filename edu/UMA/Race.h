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
    std::vector<Character*>& raceCharacterList;
    Track& track;
    Cash* batCash;
    int raceCharacterNum;

public:
    Race(std::vector<Character*>& characters, Track& t, Cash* cash);

    void RaceStart(int cash);
    void RaceWin(int cash);
    //void RaceLose(int cash);    

    void UpdateRank();

    void PoseState() { charPose = (charPose + 1) % 2; }

    int GetplayX() { return playX; }
    int GetplayY() { return playY; }
    int GetcpuX() { return cpuX; }
    int GetcpuY() { return cpuY; }
    int GetRaceCharacterNum() { return raceCharacterNum; }
};