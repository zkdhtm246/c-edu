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

void Track::TrackPrint(const std::vector<int>& playX, const std::vector<int>& playY, const std::vector<Character*>& raceCharacters, int charPose)
{
    int start_x = playX[2] - PLAYER_FOCUS_WIDTH / 2;
    int end_x = playX[2] + PLAYER_FOCUS_WIDTH / 2;
    int start_y = playY[2] - PLAYER_FOCUS_HEIGHT / 2;
    int end_y = playY[2] + PLAYER_FOCUS_HEIGHT / 2;

    // 출력 범위가 트랙 범위를 넘지 않도록 제한
    if (start_x < 0) start_x = 0;
    if (end_x > TRACK_WIDTH) end_x = TRACK_WIDTH;
    if (start_y < 0) start_y = 0;
    if (end_y > TRACK_HEIGHT) end_y = TRACK_HEIGHT;

    COORD cursorPos;
    cursorPos.X = 0;
    cursorPos.Y = 0;
    DWORD dwWritten;   

    for (int i = start_y; i < end_y; ++i) {
        cursorPos.X = 0;
        for (int j = start_x; j < end_x; ++j) {
            char ch = track[i][j];

            for (int k = 0; k < playX.size(); ++k) {
                if (i == playY[k] && j == playX[k]) {
                    ch = raceCharacters[k]->GetDot(charPose);
                    break;
                }                    
            }
            WriteConsoleOutputCharacter(console.hBuffer[console.nCurBuffer], &ch, 1, cursorPos, &dwWritten);
            cursorPos.X++;           
        }        
        cursorPos.Y++;
    }
    BufferFlip();    
}