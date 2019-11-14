#include <iostream>
#include <string>
/* checks if a certain location has been hit. takes in as input a position in an array, outputs true or false If true, let person retry their move? if false, continue. question: who has the array that I will use as input*/
//hasLocationbeenhitBefore() is logic plan equiv
using namespace std;


int easyBoard[7][7] = {
  {0,0,0,0,0},
  {1,0,1,0,1},
  {1,0,1,0,1},
  {1,1,1,0,1},
  {1,0,1,0,1}
  };
// are these vars necessary?
// TODO: coordinate transform for A-f to 0-5(possible switch case func)
// input is an index location for an array
// TODO 5 is only for an easy board. 5 could be 7 or 9 depending on difficulty
bool checkRepeatedMove(int P2BottomBoard[][7], int rind, int cind){

  if (P2BottomBoard[rind][cind] == 1){
    return true;
  }
  else {
    return false;
    // a valid move
  }
}

int main(){
  //testing row 2 col 0 which is the same as the A 3 cordinate
  if (checkRepeatedMove(easyBoard,2,0) == true){
      cout << "T" << endl;
    }
  else {
    cout << "F" << endl;
  }
  return 0;
}
