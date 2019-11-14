#include <iostream>
using namespace std;


int chooseX(int size){
    //logic that returns x (1,2,3,4,5,6,7)
    int x;
    
    cout << "Choose a row value: ";
    
    for(int i = 0; i < size; ++i){
        cout << i + 1 << " ";
    }
    cin >> x;
    x = x - 1;
    return x;
}



int chooseY(int size){
    //logic that returns y (A,B,C,D,E,F,G)
    int asciY;
    char letterY;
    int numberY = 0;
    
    cout << "Choose a column value: ";
    
    for(int i = 0; i < size; ++i) {
        asciY = i + 65;
        letterY = asciY;
        cout << letterY << " ";
    }
    cin >> letterY;
    
    if (letterY == 'A'){
        numberY = 0;
    }
    if (letterY == 'B'){
        numberY = 1;
    }
    if (letterY == 'C'){
        numberY = 2;
    }
    if (letterY == 'D'){
        numberY = 3;
    }
    if (letterY == 'E'){
        numberY = 4;
    }
    if (letterY == 'F'){
        numberY = 5;
    }
    if (letterY == 'G'){
        numberY = 6;
    }
    
    return numberY;
}
