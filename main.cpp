//chess_dual
//main.cpp

#include "pieces.h"
#include "board.h"
#include "game.h"
using namespace std;

int main(){
	Board gameBoard; //instantiate board object	
	gameBoard.display();
	gameBoard.writeToFile();
	Game chessGame;

	return 0;
}
