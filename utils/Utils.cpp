#include "Utils.h"
#include "stdbool.h"
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void swap(void* a, void* b, unsigned short size)
{
    void* tmp = malloc(size);
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
    free(tmp);
}

/* is 'a' a substring of 'b' */
bool isSubstring(char* a, char* b)
{
    /* a = wafer
     b = waterfall
     */
    
    unsigned int aIndex = 0;
    unsigned int numSimilarLetters = 0;
    bool previousSimilar = false;
    unsigned long aLen = strlen(a);
    unsigned long bLen = strlen(b);
    if (aLen > bLen)
        return false;
    for (unsigned int i = 0; i < bLen; i++)
    {
        if (a[aIndex] == b[i])
        {
            numSimilarLetters += 1;
            previousSimilar = true;
            aIndex++;
        }
        else if (previousSimilar)
        {
            if (numSimilarLetters == aLen)
                return true;
            else
                return false;
        }
    }
    return numSimilarLetters == aLen;
}

void testSubstring()
{
    assert(isSubstring("hello", "hello there"));
    assert(isSubstring("", "hello there"));
    assert(isSubstring("there", "hello there"));
    assert(isSubstring("water", "waterfall"));
    assert(!isSubstring("wafer", "waterfall"));
}


void print3x3Matrix(int matrix[3][3])
{
    printf("-----\n");
    
    for (unsigned i = 0; i < 3; i++)
    {
        for (unsigned j = 0; j < 3; j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print4x4Matrix(int matrix[4][4])
{
    printf("-----\n");
    
    for (unsigned i = 0; i < 4; i++)
    {
        for (unsigned j = 0; j < 4; j++)
        {
            printf("%i\t", matrix[i][j]);
        }
        printf("\n");
    }
}

bool getBit(int num, int i)
{
    return ((num & (1 << i)) != 0);
}

int setBit(int num, int i)
{
    return (num | (1 << i));
}

int clearBit(int num, int i)
{
    int mask = ~(1 << i);
    return num & mask;
}

int clearBitsMSBThroughI(int num, int i)
{
    int mask = (1 << i) - 1;
    return num & mask;
}

int clearBitsIThrough0(int num, int i)
{
    int mask = ~((1 << (i+1)) - 1);
    return num & mask;
}

int udpateBit(int num, int i, int v)
{
    int mask = ~(1 << i);
    return (num & mask) | (v << i);
}

void testBitFunctions()
{
    assert(getBit(5, 0) == 1);
    assert(setBit(8, 1) == 10);
    assert(clearBit(10, 1) == 8);
    assert(clearBitsMSBThroughI(10, 3) == 2);
    assert(clearBitsIThrough0(10, 2) == 8);
    assert(udpateBit(8, 1, 1) == 10);
}


// in case we're not in c++11
bool is_sorted(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
    if (begin == end)
        return false;

    int prev = *begin;
    while (begin != end)
    {
        if (prev > *begin)
            return false;
        prev = *begin;
        begin++;
    }
    return true;
}
