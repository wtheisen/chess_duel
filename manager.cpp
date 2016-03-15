#include "manager.h"

Manager::Manager(){

}

void Manager::move( int sourceX, int sourceY, int targetX, int targetY ){ //actually moves pieces
	//determine if piece is being captured
	int captureStatus = 0; //0 signifies not a capturing move, etc...
	
	if( board.chessBoard[targetY].at(targetX).getPlayer() != 2){
		captureStatus = 1;
	}

	if( captureStatus == 0){
		
	}	
}
