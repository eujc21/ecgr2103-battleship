using namespace std;
bool locationHit(
		int array1[][7],
		int array2[][7],
		int x,
		int y,
		int size
) {
	// x and y are the coordinates 
	// the arrays are interger arrays
	// array1 represents the top board
	// array2 represents the ghost top board that will hold the opponents board without displaying
	// the ghost board will help draw the board later on
	// size is the board size
	bool hitStatus;
	// hit status is what we are returning
	// 1 represents a hit
	// 2 was a miss
	// 0 was empty space
	if (array1[x][y] == 1) {
		hitStatus = true;
		if(array2[x][y] == 1){
		  cout << "Already hit that location!"
		} else {
		  array2[x][y] = 1;
		  cout << "Target Hit!"
		}
	}
	else {
		hitStatus = false;
		array2[x][y] = 2;
	  	cout << "Target Missed!"
	}
	
	//this logic updates the ghost board and this setups up the top board to be drawn
	return hitStatus;
}
