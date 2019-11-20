#include <iostream>
#include "populateBottomBoard.h"

using namespace std;

void clearScreen(){
	cout << "\033[2J\033[1;1H";
}
// make two fucntions into one. player "1" is a variable
void displayBoards(int tb[][7], int bb[][7], int row, int col, int PlayerNumber){
	PlayerNumber = (PlayerNumber == 0) ? 1 : 2;
	cout << endl;
	clearScreen();// probable error
	cout << "Player " << PlayerNumber << " Top Board: " << endl;
	populateBoard(tb, row, col);
	cout << "*********************************" << endl;
	cout << "Player " << PlayerNumber << "  Bottom Board: " << endl;
	populateBoard(bb, row, col);
}

