// det is determine
using namespace std;

int detBoardSize(){
	char difficulty;
	cout << "choose a difficulty" << endl;
	cout << "Easy: e, Medium: m, Hard: h" << endl;
	cin >> difficulty;
	cout << difficulty;

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
			break;
	}
	return 0;
}
