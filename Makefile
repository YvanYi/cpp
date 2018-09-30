DIR_INC = ./inc
DIR_SRC = ./src
DIR_OBJ = ./obj
DIR_BIN = ./bin

SRCS = $(wildcard $(DIR_SRC)/*.cc)
BINS = $(patsubst %.cc, $(DIR_BIN)/%, $(notdir $(SRCS)))

CXX = g++
CXXFLAGS = -std=c++11 -I$(DIR_INC)

all: $(BINS)

$(DIR_BIN)/%: $(DIR_OBJ)/%.o
	$(CXX) $< -o $@

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@
# By -o renaming the object files, we can add direction info to it.
# Otherwise, object files cannot be moved to corresponding direction.
.PHONY : clean
clean : 
	rm -rf $(DIR_OBJ)/*
	rm -rf $(DIR_BIN)/*

