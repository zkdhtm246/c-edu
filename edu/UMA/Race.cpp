#include"Race.h"
#include"Character.h"
#include"Track.h"
#include<Windows.h>


Race::Race(std::vector<Character*>& characters, Track& t)
    :characterList(characters), track(t), playX(0), playY(7), cpuX(0), cpuY(8) {}

void Race::RaceStart()
{
    //int player_x = 0, player_y = 7;  // �÷��̾��� �ʱ� ��ġ
    //int cpu_x = 0, cpu_y = 8;        // CPU�� �ʱ� ��ġ
    while (1)
    {
        // �÷��̾� �̵� ó��
        playX += characterList[0]->GetStatusSpeed() / 10;

        // CPU �̵� ó�� (��ֹ��� ���� �������� �̵�)
        cpuX += characterList[1]->GetStatusSpeed() / 10;

        // Ʈ���� �÷��̾�, CPU ��ġ ���
        track.TrackPrint(playX, playY, cpuX, cpuY);

        // ���� ���� ����: �÷��̾ CPU�� Ʈ�� ���� ����
        if (playX >= TRACK_WIDTH - 1)
        {
            std::cout << "�÷��̾� �¸�!" << std::endl;
            break;
        }
        else if (cpuX >= TRACK_WIDTH - 1)
        {
            std::cout << "CPU �¸�!" << std::endl;
            break;
        }

        // �ణ�� ������ �־� ���� �ӵ��� ����
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
