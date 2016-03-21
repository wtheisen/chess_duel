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
	setPlayer(num);
	setChar(32);
	setValue(0);
}

Pawn::Pawn(int num){
	setPlayer(num);
	setChar('p' - num * 32);
	setValue( 1);
}

Knight::Knight(int num){
	setPlayer(num);
	setChar('n' - num * 32);
	setValue( 3);
}

Castle::Castle(int num){
	setPlayer(num);
	setChar('c' - num * 32);
	setValue( 5);
}

Bishop::Bishop(int num){
	setPlayer(num);
	setChar('b' - num * 32);
	setValue( 3);
}

King::King(int num){
	setPlayer(num);
	setChar('k' - num * 32);
	setValue( 4);
}

Queen::Queen(int num){
	setPlayer(num);
	setChar('q' - num * 32);
	setValue( 9);
}

int Pawn::ValidMove(int sCol, int sRow, int mCol, int mRow) {
    
    if (chessBoard[sCol].at(Srow).getPlayer() == 2) {
        cout << "Selected vacant location " << endl;
        return 2;
    }
    return 0;
    
}

int Knight::ValidMove(int sCol, int sRow, int mCol, int mRow) {
    
    if (chessBoard[sCol].at(Srow).getPlayer() == 2) {
        cout << "Selected vacant location " << endl;
        return 2;
    }
    return 0;
    
}

int Castle::ValidMove(int sCol, int sRow, int mCol, int mRow) {
    
    if (chessBoard[sCol].at(Srow).getPlayer() == 2) {
        cout << "Selected vacant location " << endl;
        return 2;
    }
    return 0;
    
}

int Bishop::ValidMove(int sCol, int sRow, int mCol, int mRow) {
    
    if (chessBoard[sCol].at(Srow).getPlayer() == 2) {
        cout << "Selected vacant location " << endl;
        return 2;
    }
    return 0;
    
}

int King::ValidMove(int sCol, int sRow, int mCol, int mRow) {
    
    if (chessBoard[sCol].at(Srow).getPlayer() == 2) {
        cout << "Selected vacant location " << endl;
        return 2;
    }
    return 0;
    
}

int Queen::ValidMove(int sCol, int sRow, int mCol, int mRow) {
    
    if (chessBoard[sCol].at(Srow).getPlayer() == 2) {
        cout << "Selected vacant location " << endl;
        return 2;
    }
    return 0;
    
}



