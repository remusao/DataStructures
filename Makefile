PREFIX=-I`pwd`"/"
LDIR=${PREFIX}"Array "\
	 ${PREFIX}"Vector"

CXX=clang++
FLAGS=-std=c++11 -g -Wall -Wextra -DDEBUG

all:
	@${CXX} ${FLAGS} -IVector -IArray -IExceptions main.cc
