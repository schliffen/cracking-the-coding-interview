
## DEPRECATED

INCLUDE := -I. -I../

all: binarytree string vector
	echo "done"

cpp=g++

vector:
	${cpp} ${INCLUDE} -c ../lib/datastructures/string.cpp -o string.o
	${cpp} ${INCLUDE} -c testvector.cpp -o testvector.o -DRUN_AS_MAIN
	${cpp} ${INCLUDE} -o testvector string.o testvector.o

string:
	${cpp} ${INCLUDE} -c ../lib/datastructures/string.cpp -o string.o
	${cpp} ${INCLUDE} -c teststring.cpp -o teststring.o -DRUN_AS_MAIN
	${cpp} ${INCLUDE} -o teststring string.o teststring.o

binarytree:
	${cpp} ${INCLUDE} -c ../lib/utils/Utils.cpp -o Utils.o
	${cpp} ${INCLUDE} -c ../lib/datastructures/string.cpp -o string.o
	${cpp} ${INCLUDE} -c ../lib/utils/SampleBinaryTrees.cpp -o SampleBinaryTrees.o
	${cpp} ${INCLUDE} -c testbinarytree.cpp -o testbinarytree.o -DRUN_AS_MAIN
	${cpp} ${INCLUDE} -o testbinarytree Utils.o testbinarytree.o SampleBinaryTrees.o string.o


clean:
	rm -fv *.o *.ii *.s