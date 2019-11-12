#include <iostream>
#include <string>
/* initiliazes an array for all boards to use as a blank slate
 */
 
using namespace std;

int easyBoard[7][7] = {
  {0,0,0,0,0},
  {1,0,1,0,1},
  {1,0,1,0,1},
  {1,1,1,0,1},
  {1,0,1,0,1}
  };

int populateEmptyBoard(int board[][7], int row, int col){
	cout << "Hello" << endl;
	for (int i =0; i < row; i++){
		for(int j=0; j < col; j++){
			// TODO what should go here? what should the value of board[i][j] be?
			board[i][j] = 0;
			cout << board[i][j];
		}
		cout << endl;
	}
}

int main() {
	populateEmptyBoard(easyBoard, 7, 7);
	return 0;
}
