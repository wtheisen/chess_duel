#ifndef _PIECES_H_INCLUDED
#define _PIECES_H_INCLUDED

class Piece{ //abstract base class for chess pieces
	public:
		Piece();
		virtual void move() const;
		void setChar( char);
		void setPlayer( int);
		char getChar();
	private:
		int player; //0 is caps, 1 is lower-case	
		char repChar; //p for pawn, etc...
};

class Null: public Piece{
	public:
		Null();
	private:

};

class Pawn: public Piece{
	public:
		Pawn( int );
		void move();
	private:

};

class Bishop: public Piece{
	public:
		Bishop(int);
		void move();
	private:
};

class Knight: public Piece{
	public:
		Knight(int);
		void move();
	private:
};

class Castle: public Piece{
	public:
		Castle(int);
		void move();
	private:
};

class Queen: public Piece{
	public:
		Queen(int);
		void move();
	private:
};

class King: public Piece{
	public:
		King(int);
		void move();
	private:

};
#endif

