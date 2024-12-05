#include"Race.h"

Race::Race(std::vector<Character*>& characters, Track& t, Cash* cash)
    :raceCharacterList(characters), track(t), playX(0), playY(7), cpuX(0), cpuY(8), batCash(cash), charPose(0), raceCharacterNum(6) {}

void Race::RaceStart(int cash)
{
    SkillRandom();
    //int playX = 0, playY = 7;  // 플레이어의 초기 위치
    //int cpuX = 0, cpuY = 8;    // CPU의 초기 위치
    
    std::vector<int>playX(raceCharacterNum, 0);
    std::vector<int>playY(raceCharacterNum);
    for (int i = 0; i < raceCharacterNum; ++i) {
        playY[i] = (TRACK_HEIGHT / raceCharacterNum) * i + 2;
    }

    bool raceEnd = false;

    while (!raceEnd)
    {        
        PoseState();

        //스킬발동
        for (int i = 0; i < raceCharacterNum; ++i) {
            raceCharacterList[i]->UseSkillCheck(playX[i]);
        }

        //트랙과 플레이어, CPU 위치
        track.TrackPrint(playX, playY, raceCharacterList, charPose);

        //캐릭터 이동
        for (int i = 0; i < raceCharacterNum; ++i) {
            playX[i] += raceCharacterList[i]->RaceSpeed(track);
        }

        //캐릭터 순위
        for (int i = 0; i < raceCharacterNum; ++i) {
            raceCharacterList[i]->SetPointX(playX[i]);
        }       
        UpdateRank();

        //경주 종료
        for (int i = 0; i < raceCharacterNum; ++i) {
            if (playX[i] >= TRACK_WIDTH - 1) {
                if (playX[2] >= TRACK_WIDTH - 1)
                {
                    RaceWin(cash);
                    raceEnd = true;
                    break;
                }
                else
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
                    raceEnd = true;
                    break;
                }
            }
        }         
        Sleep(30);
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
        pos[i] = raceCharacterList[i]->GetpointX();
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (pos[i] < pos[j]) {
                rank[i]++;
            }
        }
    }
    
    for (int i = 0; i < 2; ++i) {        
        raceCharacterList[i]->SetRank(rank[i]);
    }
}