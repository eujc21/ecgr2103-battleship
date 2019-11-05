#include <iostream>
#include <string>

#include "decisions/askUserForDifficulty.h"
#include "decisions/checkIfLocationWasHit.h"
#include "decisions/determineBoardSize.h"
#include "display/updateTopBoardWithHits.h"
#include "decisions/wasOpposingPlayerHit.h"
#include "util/generateBottomBoard.h"
#include "util/populateTopBoard.h"
using namespace std;

int detBoardSize(char difficulty);
int N;
int player1TB[7][7], player2TB[7][7], player1BB[7][7], player2BB[7][7];
bool gamestatus = false;

int main(){
	// TODO uncomment when ready to use 
	while(true){
		char difficulty;
		char anyKey;
		cout << "Press the Enter key to start: " << endl;
		cin.get(anyKey);
		if(anyKey == '\n'){
			gamestatus = true;
		}
		while(gamestatus){
			cout << "choose a difficulty" << endl;
			cout << "Easy: e, Medium: m, Hard: h" << endl;
			cin >> difficulty;
			cout << difficulty;
			N = detBoardSize(difficulty);
			
			// Getting our ships ready.
			generateBottomBoard(player1BB, N);	
			generateBottomBoard(player2BB, N);
			
			// Getting our top board and opponents bottom board are synced up.
			populateTopBoard(player1TB, player2BB, N);				
			populateTopBoard(player2TB, player1BB, N);				
			for(int i = 0; i < N; ++i){
				for(int j = 0; j < N; ++j){
					cout << player1TB[i][j] << "=" << player2BB[i][j]  << endl;
				}
			}
			// TODO uncomment when ready to use
			//int boardSize[N][N];
			// NOTE testing values
			cout << "N: " << N << " difficulty: " << difficulty << endl;
		}

	} 
	// end testing
	return 0;
}

