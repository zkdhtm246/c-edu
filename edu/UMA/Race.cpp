#include"Race.h"
#include"Character.h"
#include"Track.h"
#include<Windows.h>


Race::Race(std::vector<Character*>& characters, Track& t)
    :characterList(characters), track(t), playX(0), playY(7), cpuX(0), cpuY(8) {}

void Race::RaceStart()
{
    //int player_x = 0, player_y = 7;  // 플레이어의 초기 위치
    //int cpu_x = 0, cpu_y = 8;        // CPU의 초기 위치
    while (1)
    {
        // 플레이어 이동 처리
        playX += characterList[0]->GetStatusSpeed() / 10;

        // CPU 이동 처리 (장애물이 없는 곳에서만 이동)
        cpuX += characterList[1]->GetStatusSpeed() / 10;

        // 트랙과 플레이어, CPU 위치 출력
        track.TrackPrint(playX, playY, cpuX, cpuY);

        // 경주 종료 조건: 플레이어나 CPU가 트랙 끝에 도착
        if (playX >= TRACK_WIDTH - 1)
        {
            std::cout << "플레이어 승리!" << std::endl;
            break;
        }
        else if (cpuX >= TRACK_WIDTH - 1)
        {
            std::cout << "CPU 승리!" << std::endl;
            break;
        }

        // 약간의 지연을 주어 게임 속도를 조절
        Sleep(30);
    }
}

int Race::GetplayX()
{
    return playX;
}

int Race::GetplayY()
{
    return playY;
}

int Race::GetcpuX()
{
    return cpuX;
}

int Race::GetcpuY()
{
    return cpuY;
}
