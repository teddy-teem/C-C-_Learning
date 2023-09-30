main: main.o help.o
	g++ main.o help.o -o main

main.o: main.cpp
	g++ -c main.cpp

help.o: help.cpp
	g++ -c help.cpp

clean:
	rm *.o math