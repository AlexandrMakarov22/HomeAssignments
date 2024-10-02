all: main

main: main.o hello_string.o hello.o
	g++ main.o hello_string.o hello.o -o main

main.o: main.cpp
	g++ -c main.cpp

factorial.o: hello_string.cpp
	g++ -c hello_string.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

clean: 
	rm -rf *.o main
