#ifndef _BOARD_H_INCLUDED_
#define _BOARD_H_INCLUDED_
#include "pieces.h"

class Board{
	public:
		Board(); //default constructor for board
		~Board(); //deconstructor for board
		void initPieces();
	private:
		int dim;
		Piece ***  chessBoard;
};

#endif

