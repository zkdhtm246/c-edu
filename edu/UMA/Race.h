#pragma once
#include<iostream>
#include<vector>
#include"Character.h"
#include"Track.h"

class Track;

class Race
{
private:
    int playX, playY;
    int cpuX, cpuY;
    std::vector<Character*>& characterList;
    Track& track;

public:
    Race(std::vector<Character*>& characters, Track& t);

    void RaceStart();

    int GetplayX();
    int GetplayY();
    int GetcpuX();
    int GetcpuY();
};