all: 	main

main: main.o board.o game.o pieces.o AI.o
		g++ main.o board.o game.o pieces.o AI.o -o main

main.o: main.cpp
		g++ -c main.cpp
board.o:  board.cpp
		g++ -c board.cpp
game.o: game.cpp
		g++ -c game.cpp
pieces.o: pieces.cpp
		g++ -c  pieces.cpp
AI.o: AI.cpp
	g++ -c AI.cpp
clean:	
		rm -f *.o main

