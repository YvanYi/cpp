DIR_INC = ./inc
DIR_SRC = ./src
DIR_OBJ = ./obj
DIR_BIN = ./bin
SRC = $(wildcard ${DIR_SRC}/*.cc)
OBJ = $(patsubst %.cc, ${DIR_OBJ}/%.o, $(notdir ${SRC}))
mains = $(patsubst ${DIR_OBJ}/%.o, ${DIR_BIN}/%, ${OBJ})
CXX = g++
CXXFLAGS = -std=c++11 -I${DIR_INC}
#${mains} : ${DIR_OBJ}/%.o
#	${CXX} $< -o $@
${OBJ} : ${DIR_SRC}/%.cc
#${CXX} ${CXXFLAGS} -c $< -o $@
	g++ -std=c++11 -I${DIR_INC} $< -o $@
test:
	@echo "${mains} "
	@echo "${OBJ} "
	@echo "${SRC} "
.PHONY : clean
clean : 
	rm -rf ${DIR_OBJ}/*
	rm -rf ${DIR_BIN}/*

