#pragma once
#include<iostream>
using namespace std;

class Bingo
{
protected:
	int bingoLength;
	int input;
	const string box;
	const string result;
	int* bingo;
	int* bingoResult;
	int resultNum;
	int length;
	

public:
	Bingo(int length, int input)
		:bingoLength(length), input(input), box("[ ] "), result("[X] "), bingo(), bingoResult(), resultNum(), length() {}

	void Build(int inputLength) {
		length = inputLength;
		bingoLength = length * length;
		bingo = new int[bingoLength]();

		for (int i = 0; i < bingoLength; i++) {
			bingo[i] = rand() % bingoLength + 1;
			for (int k = 0; k < i; k++) {
				if (bingo[i] == bingo[k])
				{
					bingo[i] = rand() % bingoLength + 1;
					i--;
				}
			}
		}
		for (int i = 0; i < length; i++) {
			cout << endl;

			for (int k = 0; k < length; k++) {
				if (bingo[resultNum] != input && bingo[resultNum] != 0) {
					cout << box;
				}
				else if (bingo[resultNum] == 0) {
					cout << result;
				}
				else {
					bingo[resultNum] = 0;
					cout << result;
				}
				resultNum++;
			}
		}
		
		cout << endl;

	}
	void Result(int input) {

		bingoResult = new int[bingoLength]();		
		resultNum = 0;
		for (int i = 0; i < length; i++) {
			cout << endl;

			for (int k = 0; k < length; k++) {
				if (bingo[resultNum] != input && bingo[resultNum] != 0)	{
					cout << box;
				}
				else if (bingo[resultNum] == 0) {
					cout << result;
				}
				else {					
					bingoResult[resultNum] = 1;
					bingo[resultNum] = 0;
					cout << result;
				}
				resultNum++;
			}
		}
		cout << endl;

		
	}

	int BingoSuccess()	{
		int success = 0;
		int bingoSuccess = 0;
		
		for (int i = 0; i < bingoLength; i++) {
			if (bingoResult[i] == 1) {				
				for (int k = i % length; k < bingoLength; k += length) {
					if (bingo[k] == 0) {
						success++;
					}					
				}
				if (success >= length) {
					bingoSuccess++;
					cout << "¼¼·Îºù°í" << endl;
				}				
				success = 0;

				int garo = i - (i% length);
				for (int k = garo; k < garo + length; k++) {					
					if (bingo[k] == 0) {
						success++;
					}
				}
				if (success >= length) {
					bingoSuccess++;
					cout << "°¡·Îºù°í" << endl;
				}
				success = 0;

				if (i % (length + 1) == 0) {
					for (int k = 0; k < bingoLength; k += length + 1) {
						if (bingo[k] == 0) {
							success++;
						}
					}
				}
				if (success >= length) {
					bingoSuccess++;
					cout << "ÁÂ´ë°¢ºù°í" << endl;
				}
				success = 0;

				if (i % (length - 1) == 0 && i != bingoLength - 1) {
					for (int k = length - 1; k < bingoLength-1; k += length - 1) {
						if (bingo[k] == 0) {
							success++;
						}
					}
				}
				if (success >= length) {
					bingoSuccess++;
					cout << "¿ì´ë°¢ºù°í" << endl;
				}
				success = 0;		

			}									
		}
					
		return bingoSuccess;
	}
	virtual~Bingo() {

	}
};

//class Player :public Bingo
//{
//protected:
//public:
//	Player(int num, const string box) :Bingo() {}
//};

