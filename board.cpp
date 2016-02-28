#include "board.h"
#include "pieces.h"

Board::Board(){
	dim = 8;
	for( int i = 0; i < dim; i++){
		for( int j = 0; j < dim; j++){
			chessBoard[i][j] = 0;
		}
	}	
}
