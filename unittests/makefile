
INCLUDE := -I. -I../

all: string vector
	echo "done"

vector:
	g++ ${INCLUDE} -c ../lib/datastructures/string.cpp string.o
	g++ ${INCLUDE} -c testvector.cpp -o testvector.o -DRUN_AS_MAIN
	g++ ${INCLUDE} -o testvector string.o testvector.o


string:
	g++ ${INCLUDE} -c ../lib/datastructures/string.cpp string.o
	g++ ${INCLUDE} -c teststring.cpp -o teststring.o -DRUN_AS_MAIN
	g++ ${INCLUDE} -o teststring string.o teststring.o

