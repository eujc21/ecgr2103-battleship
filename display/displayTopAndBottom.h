#include <iostream>
using namespace std;

// make two fucntions into one. player "1" is a variable
void displayBoards(int tb[][7], int bb[][7], int row, int col, int PlayerNumber){
	PlayerNumber = (PlayerNumber == 0) ? 1 : 2;
	cout << "Player " << PlayerNumber << " Top Board: " << endl;
	for (int i =0; i < row; i++){
		for(int j=0; j < col; j++){
			cout << tb[i][j];
		}
		cout << endl;
	}
	cout << "*********************************" << endl;
	cout << "Player " << PlayerNumber << "  Bottom Board: " << endl;
	for (int i =0; i < row; i++){
		for(int j=0; j < col; j++){
			cout << bb[i][j];
		}
		cout << endl;
	}

}

void clearScreen(){
//	for (int foo = 0; foo < 1000; foo++){
//		cout << endl;
//	}
	cout << "\033[2J\033[1;1H";
}
