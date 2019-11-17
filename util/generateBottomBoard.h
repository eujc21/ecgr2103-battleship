#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cctype>

using namespace std;
void generateBottomBoard(int bottomBoard[][7], int size){
	int MyBoard1A[3][5][5] = {
		{
			{ 1, 0, 0, 1},
			{ 1, 0, 0, 1},
			{ 1, 1, 1, 1},
			{ 0, 0, 0, 1}
		},
		{
			{ 1, 1, 1, 1},
			{ 0, 0, 0, 0},
			{ 0, 1, 1, 1},
			{ 1, 1, 0, 0}
		},
		{
			{ 0, 1, 1, 1},
			{ 0, 1, 1, 1},
			{ 0, 0, 1, 1},
			{ 0, 0, 1, 0}
		}
	};
	int MyBoard2A[3][6][6] = {
		{
			{0, 1, 1, 0, 0},
			{0, 0, 1, 0, 0},
			{0, 0, 1, 0, 0},
			{0, 0, 1, 0, 0},
			{0, 1, 1, 1, 1}
		},
		{
			{0, 0, 0, 1, 1},
			{0, 0, 0, 0, 1},
			{0, 1, 0, 0, 1},
			{0, 1, 0, 0, 1},
			{0, 1, 0, 0, 1}
		},
		{
			{1, 0, 0, 0, 0},
			{1, 0, 0, 0, 0},
			{0, 1, 1, 1, 1},
			{0, 0, 0, 0, 0},
			{0, 0, 1, 1, 1}
		}
	};
	int MyBoard3A[3][7][7] = {
		{
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0},
			{0, 1, 1, 0, 0, 0},
			{0, 0, 0, 0, 1, 0},
			{0, 0, 0, 0, 1, 0},
			{1, 1, 1, 1, 1, 0}
		},
		{
			{0, 0, 0, 0, 0, 0},
			{0, 0, 1, 1, 1, 0},
			{0, 0, 1, 0, 0, 0},
			{0, 0, 1, 0, 0, 0},
			{0, 0, 0, 0, 0, 0},
			{0, 1, 1, 1, 1, 0}
		},
		{
			{0, 0, 1, 1, 1, 0},
			{0, 0, 0, 0, 0, 1},
			{1, 0, 0, 0, 0, 1},
			{1, 0, 0, 0, 0, 0},
			{1, 0, 0, 0, 0, 0},
			{1, 0, 0, 0, 0, 0}
		}
	};


	int z = rand() % 3;
	switch(size){
		case 5:
			for(int i = 0; i < size; ++i){
				for(int j = 0; j < size; ++j){
					bottomBoard[i][j] = MyBoard1A[z][i][j]; 
				}
			}
			break;
		case 6:
			for(int i = 0; i < size; ++i){
				for(int j = 0; j < size; ++j){
					bottomBoard[i][j] = MyBoard2A[z][i][j]; 
				}
			}
			break;
		case 7:
			for(int i = 0; i < size; ++i){
				for(int j = 0; j < size; ++j){
					bottomBoard[i][j] = MyBoard3A[z][i][j]; 
				}
			}
			break;
		default:
			break;
	}
}

