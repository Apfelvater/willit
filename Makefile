#Makefile for Willit Game
FLAGS=-std=c++11
CC=g++

all: willit

willit: willit.o libF.o

willit.o: 
	$(CC) -c -o willit.o willit.cpp $(FLAGS)

libF.o: 
	$(CC) -c -o libF.o libF.cpp $(FLAGS)

clean:
	rm -f willit
	rm -f willit.o libF.o
