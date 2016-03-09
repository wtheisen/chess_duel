//chess_dual
//main.cpp

#include "pieces.h"
#include "board.h"
#include "game.h"
#include "AI.h"

using namespace std;

int main(){
	Board gameBoard; //instantiate board object	
	gameBoard.display();
	gameBoard.writeToFile();
	Game chessGame;
        AI AI_1;
        AI_1.findMoves(gameBoard);
        //AI_1.dispValidMoves();

	return 0;
}
