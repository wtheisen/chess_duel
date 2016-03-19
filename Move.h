#include <iostream>
#include "pieces.h"

#ifndef Move_H
#define Move_H

class Move
{
	public:
		Move();
	
		Move(Piece piece, int startRow, int startCol, int endRow, int endCol);
	
	private: 
		Piece piece;
		int startRow;
		int startCol;
		int endRow;
		int endCol;
		double value;	
};

#endif
