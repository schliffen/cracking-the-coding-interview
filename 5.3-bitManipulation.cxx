#include <bitset>
#include <iostream>
#include <limits>
#include <math.h>
#include "assert.h"

using namespace std;

template<class T>
unsigned short getNum1Bits(T val)
{
    unsigned short num = 0;
    bitset<sizeof(T) * CHAR_BIT> bits(val);
    for (size_t i = 0; i < bits.count(); i++)
        num++;
    return num;
}

template<class T>
void getNextAndPrev(T num, T& prev, T& next)
{
    int numBitsInNum = getNum1Bits(num);
    next = num+1, prev = num-1;
    unsigned long int max = pow(2, sizeof(T)*CHAR_BIT);
    while (numBitsInNum != getNum1Bits(next) && next < max){next++;}
    while (numBitsInNum != getNum1Bits(prev) && prev > 0){prev--;}
}

template<class T>
void testNumbersWithSameNum1Bits(T num, T actualPrev, T actualNext)
{
    T next, prev;
    getNextAndPrev<T>(num, prev, next);
    assert(next == actualNext && prev == actualPrev);
}

void test5_3()
{
    testNumbersWithSameNum1Bits<unsigned int>(5, 3, 6);
    testNumbersWithSameNum1Bits<unsigned int>(100, 98, 104);
    testNumbersWithSameNum1Bits<unsigned int>(9876123, 9876119, 9876125);
    cout << "5.3 passed!" << endl;
}
