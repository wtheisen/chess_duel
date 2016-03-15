#include "board.h"

Piece::Piece(){
	
}

void Piece::validMove() const{ //checks if move is valid
	//virtual function, do not remove!
}

void Piece::setChar( char c){
	repChar = c;
}

void Piece::setPlayer( int num){
	player = num;	
}

char Piece::getChar(){
	return repChar;
}

int Piece::getPlayer(){
	return player;
}

Null::Null(int num){
	setChar(32);
	setPlayer(num);
}

Pawn::Pawn(int num){
	setChar('p');
	setPlayer(num);
}

Knight::Knight(int num){
	setChar('n');
	setPlayer(num);
}

Castle::Castle(int num){
	setChar('c');
	setPlayer(num);
}

Bishop::Bishop(int num){
	setChar('b');
	setPlayer(num);
}

King::King(int num){
	setChar('k');
	setPlayer(num);
}

Queen::Queen(int num){
	setChar('q');
	setPlayer(num);
}






