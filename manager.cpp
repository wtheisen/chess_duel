

#include "manager.h"

Manager::Manager(){

}

void Manager::move( int sourceX, int sourceY, int targetX, int targetY ){ //actually moves pieces
	//determine if piece is being captured
	int captureStatus = 0; //0 signifies not a capturing move, etc...
	
	if( board.chessBoard[targetY].at(targetX).getPlayer() != 2){
		captureStatus = 1;
	}

	if( captureStatus == 0){
		swap(  board.chessBoard[targetY].at(targetX), board.chessBoard[sourceY].at(sourceX));		
	}

	if( captureStatus == 1){
		swap(  board.chessBoard[targetY].at(targetX), board.chessBoard[sourceY].at(sourceX));	
		//get null piece from null board
		for( int i = 0; i < 8; i++){
			for( int j = 0; j < 8; j++){
				if (board.nullBoard[j].at(i).getPlayer() == 2){
					targetY = j;
					targetX = i;
					break;
				}
			}
		}
			swap(  board.nullBoard[targetY].at(targetX), board.chessBoard[sourceY].at(sourceX));	
	}	
	
}

void Manager::play(){
	loadBoard();
	while( 1){
		board.display();
		game.getCoordinates();
		move( game.getFromX(), game.getFromY(), game.getToX(), game.getToY() );
		saveBoard();
	}
}

void Manager::saveBoard(){
	ofstream gamestate; 
	gamestate.open("gamestate");
	for( int i = 0; i < 8; i++){
		for( int j = 0; j < 8; j++){
			gamestate << board.chessBoard[j].at(i).getChar();	
		}
		gamestate << "\n";
	}
	gamestate.close();
}

void Manager::loadBoard(){
	ifstream gamefile; 
	string filename;
	cout << "Please enter the name of file to load from: ";
	cin >> filename;
	gamefile.open(filename.c_str());
	//read char from file into 2d array
	char boardArr[8][8];
	string currentString;
	string fileContents;
	while (getline( gamefile, currentString)){
		fileContents += currentString;
	}
	int count = 0;
	for( int i = 0; i < 8; i++){
		for( int j = 0; j < 8; j++){
			boardArr[i][j] = fileContents[count];
			count++;	
		}
	}
	//boardArr now holds the chars from file
	//now transform board to match boardArr
	for( int i = 0; i < 8; i++){
		for( int j = 0; j < 8; j++){
			char targetChar = boardArr[i][j]; 
			//find an appropriatte piece from the board
			int found = 0;
			for( int a = 0; a < 8; a++){
				for( int b = 0; b < 8; b++){
					if (board.chessBoard[b].at(a).getChar() == targetChar){
						move(  i, j, a, b);
						found = 1;
						break;		
					}
					if (found)
						break;
				}
			}
		}
	}	
}

void Manager::collectValues(){
	player0Val = 0;
	player1Val = 0;	
	
	for( int i = 0; i < 8; i++){
		for( int j = 0; j < 8; j++){
			if( board.chessBoard[j].at(i).getPlayer() == 0){
				player0Val += board.chessBoard[j].at(i).getValue();		
			}else if( board.chessBoard[j].at(i).getPlayer() == 1 ){
				player1Val += board.chessBoard[j].at(i).getValue();
			}
		}
	}	
}


