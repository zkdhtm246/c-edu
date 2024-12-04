#include"Race.h"

Race::Race(std::vector<Character*>& characters, Track& t, Cash* cash)
    :RaceCharacterList(characters), track(t), playX(0), playY(7), cpuX(0), cpuY(8), batCash(cash), charPose(0) {}

void Race::RaceStart(int cash)
{
    SkillRandom();
    int playX = 0, playY = 7;  // 플레이어의 초기 위치
    int cpuX = 0, cpuY = 8;    // CPU의 초기 위치
    int time = 0;

    while (1)
    {
        time++;
                

        for (Character* character : RaceCharacterList) {
            character->UpdatePassiveSkills();
            std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
            std::cout << "스킬발동" << std::endl;
        }

        RaceCharacterList[0]->UseSelectedSkill(playX);
        RaceCharacterList[0]->UseActiveSkills(playX);
        RaceCharacterList[1]->UseActiveSkills(cpuX);

        // 플레이어 이동 처리
        playX += RaceCharacterList[0]->RaceSpeed(playX, track) + rand() % 2;
        cpuX += RaceCharacterList[1]->RaceSpeed(cpuX, track) + rand() % 2;
       
        PoseState();
        // 트랙과 플레이어, CPU 위치 출력
        track.TrackPrint(playX, playY, cpuX, cpuY, charPose);

        RaceCharacterList[0]->SetPointX(playX);
        RaceCharacterList[1]->SetPointX(cpuX);
        UpdateRank();      

        // 경주 종료 조건: 플레이어나 CPU가 트랙 끝에 도착
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

        // 약간의 지연을 주어 게임 속도를 조절
        Sleep(100);
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
    std::vector<int>rank;
    rank.resize(2);
    std::vector<int>pos;
    pos.resize(2);

    for (int i = 0; i < 2; ++i) {
        rank[i] = 1;
        pos[i] = RaceCharacterList[i]->GetpointX();
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (pos[i] < pos[j]) {
                rank[i]++;
            }
        }
    }
    
    for (int i = 0; i < 2; ++i) {        
        RaceCharacterList[i]->SetRank(rank[i]);
    }
}

void Race::PoseState()
{
    charPose = (charPose + 1) % 2;
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
