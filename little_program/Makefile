DIR_INC = ../inc
DIR_SRC = .
DIR_BIN = ../bin

SRCS = $(wildcard $(DIR_SRC)/*.cc)
BINS = $(patsubst %.cc, $(DIR_BIN)/%, $(notdir $(SRCS)))

CXX = g++
CXXFLAGS = -std=c++11 -I$(DIR_INC) 

all: $(BINS)

$(DIR_BIN)/%: $(DIR_SRC)/%.cc
	$(CXX) $(CXXFLAGS) $< -o $@
