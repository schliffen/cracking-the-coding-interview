
INCLUDE := -I. -I../

all: string
	echo "done"

vector:
	g++ testvector.cpp -I. -I../ -DRUN_AS_MAIN -O0 -ggdb -o testvector

string:
	g++ -save-temps ${INCLUDE} -c ../lib/datastructures/string.cpp string.o
	g++ -save-temps ${INCLUDE} -c teststring.cpp -o teststring.o -DRUN_AS_MAIN
	g++ -save-temps ${INCLUDE} -o teststring string.o teststring.o
