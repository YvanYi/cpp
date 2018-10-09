DIR_BIN = ../bin
DIR_INC = ../inc
DIR_SRC = .

CXX = g++
CXXFLAGS = -std=c++11 -I$(DIR_INC)

sources = main.cc test.cc
incs    = test.h
target  = $(DIR_BIN)/test

incs_full = $(patsubst %, $(DIR_INC)/%, $(incs))

$(target):$(sources) $(incs_full)
	$(CXX) $(CXXFLAGS) $(sources) -o $@
