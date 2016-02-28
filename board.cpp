#include "board.h"

Board::Board(){
	dim = 8;
	chessBoard = new Piece **[dim]; 	
	initPieces(); //put pieces on board
}

Board::~Board(){
	delete [] chessBoard;
}
void Board::initPieces(){
	//initialize pawns
	for( int i = 0; i < dim; i++){
		chessBoard[0][i] = new Pawn;
		chessBoard[7][i] = new Pawn;
	}

	//initialize null (empty) pieces
	for( int i = 0; i < dim; i++){
		for( int j = 2; i <= 5; j++){
			chessBoard[j][i] = new Null;
		}
	}

	//initialize kings
	chessBoard[0][3] = new King;
	chessBoard[7][3] = new King;

	//initialize queens
	chessBoard[0][4] = new Queen;
	chessBoard[7][4] = new Queen;

	//intiailize Castles
	chessBoard[0][0] = new Castle; chessBoard[0][7] = new Castle;
	chessBoard[7][0] = new Castle; chessBoard[7][7] = new Castle;

	chessBoard[0][1] = new Knight; chessBoard[0][6] = new Knight;
	chessBoard[7][1] = new Knight; chessBoard[7][6] = new Knight;

	chessBoard[0][2] = new Bishop; chessBoard[0][5] = new Bishop;
	chessBoard[7][2] = new Bishop; chessBoard[7][5] = new Bishop;
}
