#include"Race.h"

Race::Race(std::vector<Character*>& characters, Track& t, Cash* cash)
    :RaceCharacterList(characters), track(t), playX(0), playY(7), cpuX(0), cpuY(8), batCash(cash) {}

void Race::RaceStart(int cash)
{
    SkillRandom();
    int playX = 0, playY = 7;  // �÷��̾��� �ʱ� ��ġ
    int cpuX = 0, cpuY = 8;    // CPU�� �ʱ� ��ġ
    while (1)
    {       
        
        // �÷��̾� �̵� ó��
        playX += RaceCharacterList[0]->GetStatusSpeed() / 10 + std::rand() & 2;

        // CPU �̵� ó�� (��ֹ��� ���� �������� �̵�)
        cpuX += RaceCharacterList[1]->GetStatusSpeed() / 10 + std::rand() & 2;

        // Ʈ���� �÷��̾�, CPU ��ġ ���
        track.TrackPrint(playX, playY, cpuX, cpuY);

        UpdateRank();
        for (Character* character : RaceCharacterList) {
            character->UpdatePassiveSkills();
            std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
            std::cout << "��ų�ߵ�" << std::endl;
        }

        RaceCharacterList[0]->UseActiveSkills(playX);
        RaceCharacterList[1]->UseActiveSkills(cpuX);

        // ���� ���� ����: �÷��̾ CPU�� Ʈ�� ���� ����
        if (playX >= TRACK_WIDTH - 1)
        {
            RaceWin(cash);
            break;
        }
        else if (cpuX >= TRACK_WIDTH - 1)
        {
            Sleep(1000);
            DestroyGame();
            ClearScreen();

            std::cout << R"(
 _      _____  _____  _____  _ 
| |    |  _  |/  ___||  ___|| |
| |    | | | |\ `--. | |__  | |
| |    | | | | `--. \|  __| | |
| |____\ \_/ //\__/ /| |___ |_|
\_____/ \___/ \____/ \____/ (_)
                                                         
	                )" << std::endl;
            Sleep(1000);
            break;
        }

        // �ణ�� ������ �־� ���� �ӵ��� ����
        Sleep(1);
    }
}

void Race::RaceWin(int cash)
{
    Sleep(1000);
    DestroyGame();
    ClearScreen();

    std::cout << R"(
 _    _  _____  _   _  _   _  _____ ______  _ 
| |  | ||_   _|| \ | || \ | ||  ___|| ___ \| |
| |  | |  | |  |  \| ||  \| || |__  | |_/ /| |
| |/\| |  | |  | . ` || . ` ||  __| |    / | |
\  /\  / _| |_ | |\  || |\  || |___ | |\ \ |_|
 \/  \/  \___/ \_| \_/\_| \_/\____/ \_| \_|(_)
                                                         
	                )" << std::endl;
    Sleep(1000);
    batCash->SetWinCash(cash, 1);
}

void Race::UpdateRank()
{
    std::vector<std::pair<int, int>>positions;
    for (int i = 0; i < 4; ++i) {
        positions.push_back({ i,RaceCharacterList[i]->GetplayX() });
    }

    std::sort(positions.begin(), positions.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second;
        });
    
    for (int i = 0; i < 4; ++i) {
        int characterIndex = positions[i].first;
        RaceCharacterList[characterIndex]->SetRank(i + 1);
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
