#ifndef __test__utils__
#define __test__utils__

#include <stdio.h>
#include <vector>
#include <iterator>

template<class a_type>
void swap(a_type* a, a_type* b)
{
    a_type tmp = *a;
    *a = *b;
    *b = tmp;
}

template<class a_type>
bool isArraySorted(a_type* data, int n)
{
    bool sorted = true;
    for (int i = 1; i < n; i++)
        if (data[i-1] > data[i])
            sorted = false;
    return sorted;
}

void swap(void* a, void* b, unsigned short size);

void print3x3Matrix(int matrix[3][3]);

void print4x4Matrix(int matrix[4][4]);

bool getBit(int num, int i);
int setBit(int num, int i);
int clearBit(int num, int i);
int clearBitsMSBThroughI(int num, int i);
int clearBitsIThrough0(int num, int i);
int udpateBit(int num, int i, int v);
void testBitFunctions();

bool is_sorted(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);

#endif
