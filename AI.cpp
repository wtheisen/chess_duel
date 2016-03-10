#include "AI.h"
#include <iostream>

using namespace std;

AI::AI(Board B)
{
   boardOriginal = B.chessBoard;  
}

void AI::overallAlgorithm()
{
   //if(kingInCheck)
   //{
      getOutOfCheck();
   //}
   
   if(!makeObviousMove())
   {
      int movesAhead = 1;
      makeMove(movesAhead);
   }
}

void AI::getOutOfCheck()
{  
   //if(kingInCheck())
   {

      for(int col=0; col<8; col++)
      {
         for(int row=0; row<8; row++)
         {
            //if(isValidMove(bKing, row, col)
            {
               //move king
            }
         }
      }

   }


}

int AI::makeObviousMove() // returns 1 if move is made
{
  
   int AIQueenRow, AIQueenCol, PlayerQueenRow, PlayerQueenCol; // track position of both queens
   
   // find queen and store the space where it is
   for(int col=0; col<8; col++)
   {
      for(int row=0; row<8; row++)
      {
         Piece P = boardOriginal[col][row];

         if(P.getChar() == 'q')
         {
            if(P.getPlayer() == 1) // this is the AI queen
            {
               AIQueenRow = row;
               AIQueenCol = col;
               cout << "Found AI queen in row " << AIQueenRow+1 << " and column " << AIQueenCol+1 << endl;
            }
            else if(P.getPlayer() == 0) // this is the player Queen
            {
               PlayerQueenRow = row;
               PlayerQueenCol = col;
               cout << "Found Player queen in row " << PlayerQueenRow+1 << " and column " << PlayerQueenCol+1 << endl;
            }
         }

      }
   }

   // check if our queen is threatened or can capture the opposing queen
   for(int c=0; c<8; c++)
   {
      for(int r=0; r<8; r++)
      {

         Piece P = boardOriginal[c][r];
         if(P.getPlayer() == 1)
         {
            //if(isValidMove(P, AIQueenRow, AIQueenCol)) // queen is threatened
            {
               //move queen
               return 1; 
            }
         }
         if(P.getPlayer() == 0)
         {
            //if(isValidMove(P, PlayerQueenRow, PlayerQueenCol)) // can take opposing queen
            {
               //capture queen
               return 1;
            }
         }

      }
   }

   return 0;
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

int AI::makeMove(int movesAhead)
{
   if(movesAhead > 4)
      return 0; 

   cout << "moves ahead: " << movesAhead << endl;

   makeMove(movesAhead+1);
}

void AI::findNextPiece()
{
   currentRow = 0;
   currentCol = 0; // get rid of these eventually

   int row = currentRow;
   int col = currentCol;
   col++;

   while(col < 7)
   {

      int player = boardOriginal[row][col].getPlayer(); 
      if(player == 0 | player == 2)
         col++;
      else
         break;

      while(row < 7)
      {

         player = boardOriginal[row][col].getPlayer(); 
         row++;
         if(player == 0 | player == 2)
            row++;
         else
            break;

      }
   }

   currentPiece = boardOriginal[row][col];
   cout << "Next Piece: " << currentPiece.getChar();
}
