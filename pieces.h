#ifndef _PIECES_H_INCLUDED
#define _PIECES_H_INCLUDED

class Piece{ //abstract base class for chess pieces
	public:
		Piece();
		virtual void move() const;
		void setChar( char);
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
		Pawn();
		void move();
	private:

};

class Bishop: public Piece{
	public:
		Bishop();
		void move();
	private:
};

class Knight: public Piece{
	public:
		Knight();
		void move();
	private:
};

class Castle: public Piece{
	public:
		Castle();
		void move();
	private:
};

class Queen: public Piece{
	public:
		Queen();
		void move();
	private:
};

class King: public Piece{
	public:
		King();
		void move();
	private:

};
#endif

