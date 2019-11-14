#include <iostream>
#include <string>
/* initiliazes an array for all boards to use as a blank slate
 */
 
using namespace std;

int easyBoard[7][7] = {
  {0,3,2,0,0},
  {1,3,1,0,1},
  {1,3,1,0,1},
  {1,1,1,0,1},
  {1,0,1,0,1}
  };

char populateBoard(int board[][7], int row, int col){
	cout << "Hello" << endl;
	for (int i =0; i < row; i++){
		for(int j=0; j < col; j++){
			// TODO what should go here? what should the value of board[i][j] be?
			if (board[i][j] == 0) {
				// empty
				cout << "*";
			}

			if (board[i][j] == 1) {
				//hit 
				cout <<"x";
			}
			if (board[i][j] == 2) {
				// miss
				cout << "o";
			}
			if (board[i][j] == 3) {
				// a ship. no hit
				cout << "s";
			}
		cout << " ";
		}
		cout << endl;
	}
}

int main() {
	populateBoard(easyBoard, 7, 7);
	return 0;
}
