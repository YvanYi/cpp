DIR_INC = ../inc
DIR_BIN = ../bin
DIR_OBJ = ../obj

CC = g++
CXXFLAGS = -std=c++11 -I$(DIR_INC)

#target = test1

$(target): $(DIR_BIN)/$(target)

$(DIR_BIN)/$(target): main.o
	g++ main.o -o $(target)
main.o: main.cc $(target).cc
	g++ -o main.o -c main.cc $(target).cc 

