#include "board.h"

Board::Board(){	
	dim = 8;
	initPieces();
	//chessBoard[1].push_back( Pawn )	
}

void Board::initPieces(){
	//initialize pieces
	Pawn aPawn1(0), aPawn2(0), aPawn3(0), aPawn4(0), aPawn5(0), aPawn6(0), aPawn7(0), aPawn8(0);
	Pawn bPawn1(1), bPawn2(1), bPawn3(1), bPawn4(1), bPawn5(1), bPawn6(1), bPawn7(1), bPawn8(1);
	Null Null1, Null2, Null3, Null4, Null5, Null6, Null7, Null8;
	Null Null9, Null10, Null11, Null12, Null13, Null14, Null15, Null16;
	Null Null17, Null18, Null19, Null20, Null21, Null22, Null23, Null24; 
	Null Null25, Null26, Null27, Null28, Null29, Null30, Null31, Null32;	
	King aKing(0), bKing(1);
	Queen aQueen(0), bQueen(1);
	Bishop aBishop1(0), aBishop2(0), bBishop1(1), bBishop2(1);
	Castle aCastle1(0), aCastle2(0), bCastle1(1), bCastle2(1);
	Knight aKnight1(0), aKnight2(0), bKnight1(1), bKnight2(1);

	vector<Piece> tempVector;
	tempVector.push_back(aCastle1); tempVector.push_back(aPawn1);
	tempVector.push_back(Null1); tempVector.push_back(Null9); 
	tempVector.push_back(Null17); tempVector.push_back(Null25);
	tempVector.push_back(bPawn1); tempVector.push_back(bCastle1);
	chessBoard.push_back( tempVector);
	tempVector.clear();
	
	tempVector.push_back(aKnight1); tempVector.push_back(aPawn2);
	tempVector.push_back(Null2); tempVector.push_back(Null10); 
	tempVector.push_back(Null18); tempVector.push_back(Null26);
	tempVector.push_back(bPawn2); tempVector.push_back(bKnight1);
	chessBoard.push_back( tempVector);
	tempVector.clear();
	
	tempVector.push_back(aBishop1); tempVector.push_back(aPawn3);
	tempVector.push_back(Null3); tempVector.push_back(Null11); 
	tempVector.push_back(Null19); tempVector.push_back(Null27);
	tempVector.push_back(bPawn3); tempVector.push_back(bBishop1);
	chessBoard.push_back( tempVector);
	tempVector.clear();

	tempVector.push_back(aKing); tempVector.push_back(aPawn4);
	tempVector.push_back(Null4); tempVector.push_back(Null12); 
	tempVector.push_back(Null20); tempVector.push_back(Null28);
	tempVector.push_back(bPawn4); tempVector.push_back(bKing);
	chessBoard.push_back( tempVector);
	tempVector.clear();

	tempVector.push_back(aQueen); tempVector.push_back(aPawn5);
	tempVector.push_back(Null5); tempVector.push_back(Null13); 
	tempVector.push_back(Null21); tempVector.push_back(Null29);
	tempVector.push_back(bPawn5); tempVector.push_back(bQueen);
	chessBoard.push_back( tempVector);
	tempVector.clear();

	tempVector.push_back(aBishop2); tempVector.push_back(aPawn6);
	tempVector.push_back(Null6); tempVector.push_back(Null14); 
	tempVector.push_back(Null22); tempVector.push_back(Null30);
	tempVector.push_back(bPawn6); tempVector.push_back(bBishop2);
	chessBoard.push_back( tempVector);
	tempVector.clear();	
	
	tempVector.push_back(aKnight2); tempVector.push_back(aPawn7);
	tempVector.push_back(Null7); tempVector.push_back(Null15); 
	tempVector.push_back(Null23); tempVector.push_back(Null31);
	tempVector.push_back(bPawn7); tempVector.push_back(bKnight2);
	chessBoard.push_back( tempVector);
	tempVector.clear();

	tempVector.push_back(aCastle2); tempVector.push_back(aPawn8);
	tempVector.push_back(Null8); tempVector.push_back(Null16); 
	tempVector.push_back(Null24); tempVector.push_back(Null32);
	tempVector.push_back(bPawn8); tempVector.push_back(bCastle2);
	chessBoard.push_back( tempVector);
	tempVector.clear();
	

}



void Board::display(){
	for( int i = 0; i < dim; i++){
		for( int j = 0; j < dim; j++){
			cout << chessBoard[i].at(j).getChar();
		}
		cout << endl;
	}
}
