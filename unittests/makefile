
INCLUDE := -I. -I../

all: binarytree string vector
	echo "done"

CXX=g++

vector:
	${CXX} ${INCLUDE} -c ../lib/datastructures/string.cpp -o string.o
	${CXX} ${INCLUDE} -c testvector.cpp -o testvector.o -DRUN_AS_MAIN
	${CXX} ${INCLUDE} -o testvector string.o testvector.o

string:
	${CXX} ${INCLUDE} -c ../lib/datastructures/string.cpp -o string.o
	${CXX} ${INCLUDE} -c teststring.cpp -o teststring.o -DRUN_AS_MAIN
	${CXX} ${INCLUDE} -o teststring string.o teststring.o

binarytree:
	${CXX} ${INCLUDE} -c ../lib/utils/Utils.cpp -o Utils.o
	${CXX} ${INCLUDE} -c ../lib/datastructures/string.cpp -o string.o
	${CXX} ${INCLUDE} -c ../lib/utils/SampleBinaryTrees.cpp -o SampleBinaryTrees.o
	${CXX} ${INCLUDE} -c testbinarytree.cpp -o testbinarytree.o -DRUN_AS_MAIN
	${CXX} ${INCLUDE} -o testbinarytree Utils.o testbinarytree.o SampleBinaryTrees.o string.o


clean:
	rm -fv *.o *.ii *.s