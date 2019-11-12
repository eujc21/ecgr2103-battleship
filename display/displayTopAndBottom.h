#include <iostream>
using namespace std;

int p1b[7][7] = {
  {0,0,0,0,0},
  {1,0,1,0,1},
  {1,0,1,0,1},
  {1,1,1,0,1},
  {1,0,1,0,1}
  };
int p1t[7][7] = {
  {0,0,0,0,0},
  {1,0,1,0,1},
  {1,0,1,0,1},
  {1,1,1,0,1},
  {1,0,1,0,1}
  };

int p2t[5][5] = {
  {1,1,1,1,1},
  {1,0,1,0,1},
  {1,0,1,0,1},
  {1,1,1,0,1},
  {1,0,1,0,1}
  };

int p2b[5][5] = {
  {0,0,0,0,0},
  {1,0,1,0,1},
  {1,0,1,0,1},
  {1,1,1,0,1},
  {1,0,1,0,1}
  };

// make two fucntions into one. player "1" is a variable
void displayBoards(int tb[][7], int bb[][7], int row, int col, int PlayerNumber){
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
	for (int foo = 0; foo < 50; foo++){
		cout << endl;
	}

}
/*
void displayP2Boards(int P2tb[][5], int P2bb[][5], int row, int col){
	cout << "Player2 Top Board: " << endl;
	for (int i =0; i < row; i++){
		for(int j=0; j < col; j++){
			P2tb[i][j] = 0;
			cout << P2tb[i][j];
		}
		cout << endl;
	}
	cout << "*************************************************" << endl;
	cout << "Player2 Bottom Board: " << endl;
	for (int i =0; i < row; i++){
		for(int j=0; j < col; j++){
			P2bb[i][j] = 0;
			cout << P2tb[i][j];
		}
		cout << endl;
	}
}
*/

int main() {
	displayBoards(p1t, p1b, 5, 5, 1);
	clearScreen();
//	displayP2Boards(p2t, p2b, 5, 5); 
	return 0;
}
