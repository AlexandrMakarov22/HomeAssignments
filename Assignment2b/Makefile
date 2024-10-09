all: main

main: main.o polska.o
	g++ main.o polska.o -o main

main.o: main.cpp
	g++ -c main.cpp
	
dvoich.o: polska.cpp
	g++ -c polska.cpp

clean: 
	rm -rf *.o main
