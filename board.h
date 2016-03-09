#ifndef _BOARD_H_INCLUDED_
#define _BOARD_H_INCLUDED_

//macros
#include <iostream> //needed for cout, cin, endl
#include <vector> //needed for stl::vector
#include <string>
#include <fstream>
//headers
#include "pieces.h"
#include "game.h"

using namespace std;

class Board{

        friend class AI;
	public:
		Board(); //default constructor for board
		void initPieces();
		void display();
		void writeToFile();
	private:
		int dim;
		vector< vector < Piece> > chessBoard; 
};

#endif

