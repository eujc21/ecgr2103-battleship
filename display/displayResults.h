#include <iostream>

using namespace std;

void displayResults(int currentPlayer){

	cout << "Player " << currentPlayer << " Wins" << endl;
	if (currentPlayer == 0){ // player 0 is player 1
		cout << "Player 2" << ", better luck next time" << endl;
	}
	if(currentPlayer == 1){
		cout << "Player 1" << ", better luck next time" << endl;
	}

}

