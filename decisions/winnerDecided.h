#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cctype>
#include <ctime>

using namespace std;

bool winnerDecided(int array[][7], int size){
	int count = 0;
	int i;
	int j;
	bool response = false;
	for (i = 0; i < size; ++i) { //rows
		for (j = 0; j < size; ++j) { //columns
			if (array[i][j]==1) {
				++count;
			}

		}
	}
	cout << count << endl;
	response = (count == 9) ? true : false;
	return response;
}
