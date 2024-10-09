all: main

main: main.o transform.o
	g++ main.o transform.o -o main

main.o: main.cpp
	g++ -c main.cpp
	
dvoich.o: transform.cpp
	g++ -c transform.cpp

clean: 
	rm -rf *.o main
