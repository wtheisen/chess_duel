#ifndef _AI_H_INCLUDED
#define _AI_H_INCLUDED

#include <vector>
#include "board.h"
using namespace std;

class AI {
   public:
      void overallAlgorithm(); // skeleton
      void findMoves(Board B); // find valid moves
      void dispValidMoves();

   private:
      void getOutOfCheck();
      int makeObviousMove();

      // 3 vectors to store possible moves
      vector<Piece> Pieces; // piece that can make the move
      vector<int> moveRows; // destination row
      vector<int> moveCols; // destination column
             
};

#endif

