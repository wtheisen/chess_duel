#include "board.h"

Piece::Piece(){
	
}

void Piece::move() const{
	//virtual function, do not remove!
}

void Piece::setChar( char c){
	repChar = c;
}

char Piece::getChar(){
	return repChar;
}

Null::Null(){
	setChar(0);
}

Pawn::Pawn(){
	setChar('p');
}


Bishop::Bishop(){
	setChar('b');
}

Knight::Knight(){
	setChar('n');
}

Castle::Castle(){
	setChar('c');
}

Queen::Queen(){
	setChar('q');
}

King::King(){
	setChar('k');
}



