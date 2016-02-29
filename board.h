#ifndef _BOARD_H_INCLUDED_
#define _BOARD_H_INCLUDED_

//macros
#include <iostream> //needed for cout, cin, endl
#include <vector> //needed for stl::vector
#include <string>
//headers
#include "pieces.h"
#include "game.h"

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

