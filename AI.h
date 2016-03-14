#ifndef _AI_H_INCLUDED
#define _AI_H_INCLUDED

#include <vector>
#include "board.h"
using namespace std;

class AI {
   public:
      AI(Board B);
      void overallAlgorithm(); // skeleton
      void findMoves(Board B); // find valid moves
      void dispValidMoves();
      void getOutOfCheck();
      int makeObviousMove();
      int makeMove(int movesAhead);
      void findNextPiece();
      int currentRow; // row of current piece
      int currentCol; // column of current piece


   private:
      // 3 vectors to store possible moves
      vector<Piece> Pieces; // piece that can make the move
      vector<int> moveRows; // destination row
      vector<int> moveCols; // destination column
      vector<vector<Piece> > boardOriginal; 
      vector<vector<Piece> > boardCopy;  
      Piece currentPiece; // piece currently looking at moves for
};

#endif

