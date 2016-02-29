all: 	main

main: main.o board.o game.o pieces.o 
		g++ main.o board.o game.o pieces.o -o main

main.o: main.cpp
		g++ -c main.cpp
board.o:  board.cpp
		g++ -c board.cpp
game.o: game.cpp
		g++ -c game.cpp
pieces.o: pieces.cpp
		g++ -c  pieces.cpp
clean:	
		rm -f *.o main

