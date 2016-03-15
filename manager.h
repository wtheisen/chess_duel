#ifndef _MANAGER_H_INCLUDED_
#define _MANAGER_H_INCLUDED_

#include "board.h"

class Manager{
	public:
		Manager();
		void move( int, int, int, int );
		void play();
		Board board;
		Game game;
	private:	
	
};

#endif

