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
        AI AI_1(gameBoard);
        //AI_1.findMoves(gameBoard);
        //AI_1.dispValidMoves();
        //AI_1.makeObviousMove();
        //AI_1.makeMove(1);
        AI_1.currentRow = 0;
        AI_1.currentCol = 0;
        AI_1.findNextPiece();
        cout << "current Row: " << AI_1.currentRow << endl;
        cout << "current Col: " << AI_1.currentCol << endl;
        AI_1.findNextPiece();
        cout << "current Row: " << AI_1.currentRow << endl;
        cout << "current Col: " << AI_1.currentCol << endl;
        AI_1.findNextPiece();
        cout << "current Row: " << AI_1.currentRow << endl;
        cout << "current Col: " << AI_1.currentCol << endl;
        AI_1.findNextPiece();
        AI_1.findNextPiece();
        AI_1.findNextPiece();
        AI_1.findNextPiece();
       
 


	return 0;
}
