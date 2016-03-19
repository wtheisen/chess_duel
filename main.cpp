//chess_dual
//main.cpp

//#include "pieces.h"
//#include "board.h"
//#include "game.h"
//#include "AI.h"
#include "manager.h"
using namespace std;

int main(){
	Manager gameManager; //instantiates game, board, etc. 
	gameManager.play();
	/*Board gameBoard; //instantiate board object	
	gameBoard.display();
	gameBoard.writeToFile();
	Game chessGame;
	*/

        /*AI AI_1(gameBoard);
        AI_1.findMoves(gameBoard);
        AI_1.dispValidMoves();*/

        gameManager.AI_1.dispValidMoves();

	return 0;
}
