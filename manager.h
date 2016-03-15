#ifndef _MANAGER_H_INCLUDED_
#define _MANAGER_H_INCLUDED_

#include "board.h"

class Manager{
	public:
		Manager();
		void move( int, int, int, int );
		void play();
		void saveBoard();
		void collectValues();	
		//public data members
		Board board;
		Game game;
	
	private:	
		int player0Val;
		int player1Val;
};

#endif

