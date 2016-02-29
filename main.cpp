//chess_dual
//main.cpp

#include "pieces.h"
#include "board.h"
#include "game.h"
using namespace std;

int main(){
	Board gameBoard; //instantiate board object	
	gameBoard.display();
	Game chessGame;
	chessGame.play();
	return 0;
}
