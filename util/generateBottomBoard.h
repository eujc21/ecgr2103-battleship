void generateBottomBoard(int bottomBoard[][7], int size){
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			// conditions where value of 1 for type
			// 2,3,4 can only be horizontal or vertical
			bottomBoard[i][j] = 0;
		}
	}
}
