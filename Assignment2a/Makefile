all: main

main: main.o dvoich.o
	g++ main.o dvoich.o -o main

main.o: main.cpp
	g++ -c main.cpp
	
dvoich.o: dvoich.cpp
	g++ -c dvoich.cpp

clean: 
	rm -rf *.o main
