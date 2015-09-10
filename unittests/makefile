
INCLUDE := -I. -I../

all: string vector
	echo "done"

CXX=mpicxx

vector:
	${CXX} ${INCLUDE} -c ../lib/datastructures/string.cpp string.o
	${CXX} ${INCLUDE} -c testvector.cpp -o testvector.o -DRUN_AS_MAIN
	${CXX} ${INCLUDE} -o testvector string.o testvector.o


string:
	${CXX} ${INCLUDE} -c ../lib/datastructures/string.cpp string.o
	${CXX} ${INCLUDE} -c teststring.cpp -o teststring.o -DRUN_AS_MAIN
	${CXX} ${INCLUDE} -o teststring string.o teststring.o

