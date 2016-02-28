#ifndef _BOARD_H_INCLUDED_
#define _BOARD_H_INCLUDED_

class Board{
	public:
		Board(); //default constructor for board
	private:
		Pieces chessBoard [8][8];
		int dim;
};

#endif

