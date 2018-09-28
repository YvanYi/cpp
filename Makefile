DIR_INC = ./inc
DIR_SRC = ./src
DIR_OBJ = ./obj
DIR_BIN = ./bin
SRC = $(wildcard $(DIR_SRC)/*.cc)
OBJ = $(patsubst %.cc, $(DIR_OBJ)/%.o, $(notdir $(SRC)))
BINS = $(patsubst %.cc, $(DIR_BIN)/%, $(notdir $(SRC)))
CXX = g++
CXXFLAGS = -std=c++11 -I$(DIR_INC)
all: $(BINS)
$(DIR_BIN)/%: $(DIR_OBJ)/%.o
	-$(CXX) $< -o $@
$(DIR_OBJ)/%: $(SRC)/%.cc
	-$(CXX) $(CXXFLAGS) -c $< -o $@
test:
	@echo "$(BINS)"
	@echo "$(OBJ)"
	@echo "$(SRC)"
.PHONY : clean
clean : 
	rm -rf ${DIR_OBJ}/*
	rm -rf ${DIR_BIN}/*

