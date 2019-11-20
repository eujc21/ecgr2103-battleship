// top has no values
// bottom has values
// we know the size
void populateTopBoard(int topboard[][7], int bottomboard[][7], int size) {
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			topboard[i][j] = bottomboard[i][j];
		}
	}	
}
