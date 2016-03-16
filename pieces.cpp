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

void Piece::setValue( int val){
	value = val;
}

char Piece::getChar(){
	return repChar;
}

int Piece::getPlayer(){
	return player;
}

int Piece::getValue(){
	return value;
}

Null::Null(int num){
	setChar(32);
	setPlayer(num);
	setValue(0);
}

Pawn::Pawn(int num){
	setChar('p');
	setPlayer(num);
	setValue( 1);
}

Knight::Knight(int num){
	setChar('n');
	setPlayer(num);
	setValue( 3);
}

Castle::Castle(int num){
	setChar('c');
	setPlayer(num);
	setValue( 5);
}

Bishop::Bishop(int num){
	setChar('b');
	setPlayer(num);
	setValue( 3);
}

King::King(int num){
	setChar('k');
	setPlayer(num);
	setValue( 4);
}

Queen::Queen(int num){
	setChar('q');
	setPlayer(num);
	setValue( 9);
}






