#include <iostream>
#include <string>

#include <askUserForDifficulty.h>
#include <checkIfLocationWasHit.h>
#include <generateRandomLayout.h>
#include <upateTopBoardWithHits.h>
#include <wasOpposingPlayerHit.h>

using namespace std;

//int N=5;


//char difficulty = 'e';
int detBoardSize(char difficulty);
int N;


int main(){
  // TODO uncomment when ready to use 
    //int player1;
    //int player2;
  char difficulty;

  cout << "choose a difficulty" << endl;
  cin >> difficulty;
  N = detBoardSize(difficulty);
  // TODO uncomment when ready to use
  //int boardSize[N][N];
  // NOTE testing values
  cout << "N:" << N << "difficulty: " << difficulty << endl;
  // end testing
  return 0;
}

// det is determine
int detBoardSize(char difficulty){
  switch(difficulty){
    case 'e':
        return 5;
    break;
    
    case 'm':
        return 6;
    break;
    
    case 'h':
        return 7;
    break;
    
    default:
        return 5;
    break;
  }
  return 0;
}
