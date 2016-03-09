#include "AI.h"
#include <iostream>

using namespace std;

void AI::overallAlgorithm()
{
   //if(kingInCheck)
   //{
      getOutOfCheck();
   //}
   
   if(!makeObviousMove())
   {
      //makeMove();
   }
}

void AI::getOutOfCheck()
{
   //if king is in check
   //move him

}

int AI::makeObviousMove() // returns 1 if move is made
{
   //if queen can be taken, protect it
   //else if can take queen, take it

}

void AI::findMoves(Board B)
{
   // loop through each space in board vector
   for(int row=0; row<8; row++)
   {
      for(int col=0; col<8; col++)
      {
         if(B.chessBoard[row][col].getChar() != 32) // piece isn't null
         {
            if(B.chessBoard[row][col].getPlayer() == 1) // is our piece
            {
               for(int r=0; r<8; r++) // loop through all of spaces on board again to check for valid moves
               {
                  for(int c=0; c<8; c++)
                  {
                     //if(isValidMove(chessBoard[row][col], r, c)
                     //{
                         Pieces.push_back(B.chessBoard[row][col]);
                         moveRows.push_back(r);
                         moveCols.push_back(c);
                     //}
                  }
               }
            }
         }
      }
   }
}

void AI::dispValidMoves()
{
   cout << "Pieces" << endl;
   for(int i=0; i<Pieces.size(); i++)
      cout << Pieces[i].getChar() << " ";

   cout << "Rows" << endl;
   for(int j=0; j<moveRows.size(); j++)
      cout << moveRows[j] << " " ;

   cout << "Columns" << endl;
   for(int k=0; k<moveCols.size(); k++)
      cout << moveCols[k] << " ";

}
