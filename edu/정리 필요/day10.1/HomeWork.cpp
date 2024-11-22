//-오랜만에 구현하는 과제 -
//-빙고게임
//- 5x5
//- 숫자를 맞출 경우 해당 칸을 기호(#, * 등)로 바꿈
//- 가로, 세로, 대각선 빙고 검색
//- 종료조건은 3빙고
//
//= 대전모드 =
//-플레이어 빙고판 만들기
//- 컴퓨터도 플레이
//- 빙고가능성 체크


#include<iostream>
#include"Bingo.h"

using namespace std;


int main() {

	Bingo* play = new Bingo(0, 0);

	int bingoLength;

	cin >> bingoLength;

	play->Build(bingoLength);

	int num;
	int bingoSuccess = 0;

	while (1)
	{
		cin >> num;

		play->Result(num);

		bingoSuccess += play->BingoSuccess();

		if (bingoSuccess >= 12)
		{
			cout << "승리" << endl;
		}

	}
	
}

