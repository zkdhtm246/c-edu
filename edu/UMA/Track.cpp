#include "Track.h"

Track::Track()
{
    track = new char* [TRACK_HEIGHT];
    for (int i = 0; i < TRACK_HEIGHT; ++i) {
        track[i] = new char[TRACK_WIDTH];
    }
    TrackBuild();
}

Track::~Track()
{
    for (int i = 0; i < TRACK_HEIGHT; ++i) {
        delete[]track[i];
    }
    delete[]track;
}

void Track::TrackBuild()
{
    for (int i = 0; i < TRACK_HEIGHT; ++i) {
        for (int j = 0; j < TRACK_WIDTH; ++j) {
            if (i == 0 || i == TRACK_HEIGHT - 1) {
                track[i][j] = '=';
                if (j % 100 == 0) {
                    track[i][j] = '/';
                }
            }
            else {
                if (currentCondition == CLEAR) {
                    track[i][j] = ' ';
                }
                else if (currentCondition == RAINY) {
                    track[i][j] = '.';
                }
                else if (currentCondition == WINDY) {
                    track[i][j] = '~';
                }
                else if (currentCondition == SNOWY) {
                    track[i][j] = '*';
                }
            }
        }
    }    
}

void Track::TrackPrint(int playX, int playY, int cpuX, int cpuY, int charPose)
{
    

    int start_x = playX - PLAYER_FOCUS_WIDTH / 2;
    int end_x = playX + PLAYER_FOCUS_WIDTH / 2;
    int start_y = playY - PLAYER_FOCUS_HEIGHT / 2;
    int end_y = playY + PLAYER_FOCUS_HEIGHT / 2;

    // 출력 범위가 트랙 범위를 넘지 않도록 제한
    if (start_x < 0) start_x = 0;
    if (end_x > TRACK_WIDTH) end_x = TRACK_WIDTH;
    if (start_y < 0) start_y = 0;
    if (end_y > TRACK_HEIGHT) end_y = TRACK_HEIGHT;

    COORD cursorPos;
    cursorPos.X = 0;
    cursorPos.Y = 0;
    DWORD dwWritten;   

    for (int i = start_y; i < end_y; ++i)
    {
        cursorPos.X = 0;
        for (int j = start_x; j < end_x; ++j)
        {
            char ch = ' ';
            if (i == playY && j == playX && i == cpuY && j == cpuX) {
                ch = 'x';  // 플레이어와 CPU가 같은 위치에 있으면 'X' 출력
            }                
            else if (i == playY && j == playX) { //플레이어 위치
                if (charPose == 0) {
                    ch = 'p';
                }
                else {
                    ch = 'q';
                }
            }            
            else if (i == cpuY && j == cpuX) { //CPU 위치
                if (charPose == 0) { 
                    ch = 'u';
                }
                else {
                    ch = 'n';
                }
            }                
            else {
                ch = track[i][j];  // 트랙 출력 (0, 1, 2 등)
            }               

            WriteConsoleOutputCharacter(console.hBuffer[console.nCurBuffer], &ch, 1, cursorPos, &dwWritten);
            cursorPos.X++;           
        }        
        cursorPos.Y++;
    }
    BufferFlip();    
}

void Track::UpdateCondition(int time)
{
    if (time % 50 == 0) {
        int randomCondition = rand() % 4;
        currentCondition = static_cast<TrackCondition>(randomCondition);

        switch (currentCondition) {
        case CLEAR:
            std::cout << "\n\n\n\n\n\n\n\n\n";
            std::cout << "날씨 : 맑음!" << std::endl;
            break;
        case RAINY:
            std::cout << "\n\n\n\n\n\n\n\n\n";
            std::cout << "날씨 : 비!" << std::endl;
            break;
        case WINDY:
            std::cout << "\n\n\n\n\n\n\n\n\n";
            std::cout << "날씨 : 강풍!" << std::endl;
            break;
        case SNOWY:
            std::cout << "\n\n\n\n\n\n\n\n\n";
            std::cout << "날씨 : 눈!" << std::endl;
            break;
        }
    }
}
