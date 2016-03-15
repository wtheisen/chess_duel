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
		swap(  board.chessBoard[targetY].at(targetX), board.chessBoard[sourceY].at(sourceX));		
	}

	if( captureStatus == 1){
		swap(  board.chessBoard[targetY].at(targetX), board.chessBoard[sourceY].at(sourceX));	
		//get null piece from null board
		for( int i = 0; i < 8; i++){
			for( int j = 0; j < 8; j++){
				if (board.nullBoard[j].at(i).getPlayer() == 2){
					targetY = j;
					targetX = i;
					break;
				}
			}
		}
			swap(  board.nullBoard[targetY].at(targetX), board.chessBoard[sourceY].at(sourceX));	
	}	
	
}

void Manager::play(){
	while( 1){
		game.getCoordinates();
		move( game.getFromX(), game.getFromY(), game.getToX(), game.getToY() );
		board.display();
	}
}
