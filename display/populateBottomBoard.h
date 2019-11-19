#include <iostream>
#include <string>
/* initiliazes an array for all boards to use as a blank slate
 */
 
using namespace std;

void populateBoard(int board[][7], int row, int col){
	// TODO determine based off difficulty
	if (row ==5){
	cout << "  A B C D E" << endl;
	}
	if (row == 6){
	cout << "  A B C D E F" << endl;
	}
	if (row == 7){
	cout << "  A B C D E F G" << endl;
	}
	
  for (int i =0; i < row; i++){
		// TODO implement based off diff
		// for loop is for determining row number display
		cout << (i+1) << " ";
		for(int j=0; j < col; j++){
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

