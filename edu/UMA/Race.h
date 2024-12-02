#pragma once
#include"Handle.h"

class Track;
class Character;

class Race
{
private:
    int playX, playY;
    int cpuX, cpuY;
    std::vector<Character*>& RaceCharacterList;
    Track& track;

public:
    Race(std::vector<Character*>& characters, Track& t);

    void RaceStart();

    int GetplayX();
    int GetplayY();
    int GetcpuX();
    int GetcpuY();
};