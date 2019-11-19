#include <iostream>
#include <string>
#include <unistd.h>
#include "decisions/askUserForDifficulty.h"
#include "decisions/checkIfLocationWasHit.h"
#include "decisions/determineBoardSize.h"
#include "decisions/wasOpposingPlayerHit.h"
#include "decisions/chooseCoordinate.h"
#include "decisions/winnerDecided.h"
#include "display/updateTopBoardWithHits.h"
#include "display/displayResults.h"
#include "display/displayTopAndBottom.h"
#include "util/generateBottomBoard.h"
#include "util/populateTopBoard.h"

using namespace std;

int detBoardSize(char difficulty);
int N; //board size
int player1TB[7][7];
int player2TB[7][7];
int player1BB[7][7];
int player2BB[7][7];
int player1GB[7][7];
int player2GB[7][7];
bool gamestatus = false;
int currentPlayer = 0;

void gameLoopPlayer(
		int playerBB[][7],
		int playerGB[][7],
		int oppPB[][7],
		int &player,
		int size
		){
	int xCoord, yCoord;
	bool hitStatus = true;

	// displayBoard
	displayBoards(
			playerGB,
			playerBB,
			size,
			size,
			player
		     );
	while(hitStatus){
		// Choose Coordinates
		xCoord = chooseX(size);
		yCoord = chooseY(size);
		hitStatus = locationHit(
				oppPB,
				playerGB,
				xCoord,
				yCoord,
				size
				);
		// displayBoards
		displayBoards(
				playerGB,
				playerBB,
				size,
				size,
				player
			     );

	}
	if(!hitStatus && !winnerDecided(playerGB, size)){
		player = (player == 0) ? 1 : 0;
		clearScreen();
		cout << "Target Missed!" << endl;
	}

}

int main(){
	// TODO uncomment when ready to use 
	while(true){
		char anyKey;
			cout << "Press the 's' key to start: " << endl;
			cin.get(anyKey);
			clearScreen();
			if(anyKey == 's'){
				gamestatus = true;
			}
			// Determine the board size from user.
			N = detBoardSize();

			// Getting our ships ready.
			generateBottomBoard(player1BB, N);	
			usleep(1E6);

			generateBottomBoard(player2BB, N);

			// Getting our top board and opponents bottom board are synced up.
			populateTopBoard(player1TB, player2BB, N);				
			populateTopBoard(player2TB, player1BB, N);				
			while(gamestatus){

				// Winner Decided should go inside condition
				// Display Board
				// Switch Players
				if(currentPlayer == 0){
				gameLoopPlayer(
						player1BB,
						player1GB,
						player2BB,
						currentPlayer,
						N
					      );
				if(winnerDecided(player1GB, N)){
					gamestatus = false;
					break;
				}
			} else {
				gameLoopPlayer(
						player2BB,
						player2GB,
						player1BB,
						currentPlayer,
						N
					      );
				if(winnerDecided(player2GB, N)){
					gamestatus = false;
					break;
				}
			}
		}

		displayResults(currentPlayer);
	} 
	// end testing
	return 0;
}

