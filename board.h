#ifndef _BOARD_H_INCLUDED_
#define _BOARD_H_INCLUDED_

#include <iostream>
#include <vector>
#include "pieces.h"
using namespace std;

class Board{
	public:
		Board(); //default constructor for board
		void initPieces();
		void display();
	private:
		int dim;
		vector< vector < Piece> > chessBoard; 
};

#endif

