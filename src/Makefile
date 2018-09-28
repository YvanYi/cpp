CC = g++
FLAGS = -Wall
BIN = ../bin
SRC = ../src
INC = ../inc
OBJ = ../obj
SOURCE = $(wildcard $(SRC)/*.cc)
PROGS = $(patsubst %.cc, $(BIN)/%, $(notdir $(SOURCE)))
all: $(PROGS)
$(BIN)/%: $(SRC)/%.cc
	$(CC) $(FLAGS) $< -o $@ 
#$(BIN):
#	mkdir -p $@
#$(FOO_LIB): $(LIB)/foo.c | $(OBJ)
#	gcc -c $< -o $@
#$(OBJ):
#	mkdir -p $(OBJ)


























