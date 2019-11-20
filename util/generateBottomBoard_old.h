#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <string>

using namespace std;

int checkNorth(
		int array[][7],
		int xStart,
		int yStart,
		int size
){
	int count = 0;
	// x - 0
	// lock the column
	for(int i = 0; i < xStart; ++i){
		if(array[i][yStart] == 0){
			++count;
		}
	}
	return count;
}

int checkSouth(
		int array[][7],
		int xStart,
		int yStart,
		int size
){
	// size - x
	// lock the column
	int count = 0;
	// x - 0
	// lock the column
	for(int i = xStart; i < size; ++i){
		if(array[i][yStart] == 0){
			++count;
		}
	}
	return count;
}

int checkWest(
		int array[][7],
		int xStart,
		int yStart,
		int size
){
	// y - 0
	// lock the row
	int count = 0;
	for(int i = yStart; i < size; ++i){
		if(array[xStart][i] == 0){
			++count;
		}
	}
	return count;
}

int checkEast(
		int array[][7],
		int xStart,
		int yStart,
		int size
){
	// y - 0
	// lock the row
	int count = 0;
	for(int i = 0; i < yStart; ++i){
		if(array[xStart][i] == 0){
			++count;
		}
	}
	return count;
}

void printArray(int** arr, int row, int col){
	for(int i = 0; i < row; ++i){
		for(int j = 0; j < col; ++j){
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int** initalCoordinatesGen(int rows, int cols, int size){
	int** arr = new int*[rows];
	int rowStart =  rand() % size;
	int columnStart =  rand() % size;
	for(int i = 0; i < rows; ++i){
		arr[i] = new int[cols];
		for(int j = 0; j < cols; ++j){
			if(i == 0 && j ==0){
				arr[i][j] = rowStart;
			}
			if(i == 0 && j ==1){
				arr[i][j] = columnStart;
			}
		}

	}
	return arr;

}

void fillUpTheRestofArray(
		int **boat,
		int bottomBoard[][7],
		int row,
		int col,
		int size
){
	int initialX = boat[0][0];
	int initialY = boat[0][1];
	int north, east, west, south;
	bottomBoard[initialX][initialY] = 1;

	for(int i =1; i < row; ++i){
		int x, y;
		for(int j =1; j < col; ++j){
			north = checkNorth(
					bottomBoard,
					initialX,
					initialY,
					size
			);
			south = checkSouth(
					bottomBoard,
					initialX,
					initialY,
					size
			);
			east = checkEast(
					bottomBoard,
					initialX,
					initialY,
					size
			);
			west = checkWest(
					bottomBoard,
					initialX,
					initialY,
					size
			);
			if(north == 0){
				if(south > row){
					bottomBoard[j][initialY] = 1;
				} 
			} else if(south == 0){
				if(north > row){
					bottomBoard[initialX-j][initialY] = 1;
				} 
			} else if(west == 0){
				if(east > row){
					bottomBoard[initialX][initialY-j] = 1;
				} 
			} else if(east == 0){
				if(west > row){
					bottomBoard[initialX][initialY + j] = 1;
				} 
			}	
		}
		// bottomBoard[x][y] = 1;
		cout << endl;
	}
	cout << "###########" << endl;
	cout << "North: " << north << endl;
	cout << "East:  " << east << endl;
	cout << "South: " << south << endl;
	cout << "West:  " << west << endl;
	cout << "###########" << endl;
} 

void randomGen(int bottomBoard[][7], int size){
	int column = 2;
	int b1Row = 2;
	int b2Row = 3;
	int b3Row = 4;
	int **boat1, **boat2, **boat3; 

	// Populate Bottom Board Array.
	for (int i = 0; i < size; i++){ 
		for (int j = 0;  j < size; j++){
			bottomBoard[i][j] = 0;  
		}
	}

	// Initialize arrays and their size.
	boat1 = initalCoordinatesGen(b1Row, column, size);
	fillUpTheRestofArray(
			boat1,
			bottomBoard,
			b1Row,
			column,
			size
	);	

	boat2 = initalCoordinatesGen(b2Row, column, size);
	boat3 = initalCoordinatesGen(b3Row, column, size);

	// Print out first array.
	// printArray(boat1, b1Row, column); 
	// printArray(boat2, b2Row, column); 
	// printArray(boat3, b3Row, column);

}


int main() {
	srand(time(0));
	int row;
	int col;
	int x;
	int y;
	int z;

	int bottomGem[7][7];
	int size = 5;
	randomGen(bottomGem, size);
	for(int i =0; i < size; ++i){
		for(int j =0; j < size; ++j){
			cout << bottomGem[i][j];
		}
		cout << endl;
	}
	return 0;
}
