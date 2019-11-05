#include <iostream>
#include <string>

#include "decisions/askUserForDifficulty.h"
#include "decisions/checkIfLocationWasHit.h"
#include "decisions/determineBoardSize.h"
#include "display/updateTopBoardWithHits.h"
#include "decisions/wasOpposingPlayerHit.h"
#include "util/add.h"
#include "util/generateRandomLayout.h"

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
  cout << "Easy: e, Medium: m, Hard: h" << endl;
  cin >> difficulty;
  N = detBoardSize(difficulty);
  // TODO uncomment when ready to use
  //int boardSize[N][N];
  // NOTE testing values
  cout << "N:" << N << "difficulty: " << difficulty << endl;
  cout << add(3,5) << endl;
  // end testing
  return 0;
}

