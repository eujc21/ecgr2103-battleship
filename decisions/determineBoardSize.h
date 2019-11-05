// det is determine
int detBoardSize(char difficulty){
	switch(difficulty){
		case 'e':
			return 5;
			break;

		case 'm':
			return 6;
			break;

		case 'h':
			return 7;
			break;

		default:
			return 5;
			break;  }
	return 0;}
