#include "5.1.h"
#include "lib/utils/Utils.h"
#include <bitset>
#include <iostream>

using namespace std;

/*
You are given two 32-bit numbers, N and M, and two bit positions, la n d j . Write
a method to insert M into N such that M starts at bit j and ends at bit i.
You can assume that the bits j through i have enough space to fit all of M.
That is, if M = 10011, you canassumethat there areat least 5 bits between j and i.
You would not, for example, have j = 3 and i = 2,
because M could notfully fit between bit 3 and bit 2.
*/

int fitBits(int N, int M, int i, int j)
{
    bitset<8> n(N);
    bitset<8> m(M);
    //cout << n << endl;
    //cout << m << endl;
    int mask = ((1 << (j - i + 1))-1) << i;
    //cout << bitset<8>(mask) << endl;

    int result = ((N & ~mask) | (M << i));
    //cout << bitset<8>(result) << endl;
    return result;
}

void test5_1()
{
    fitBits(129, 10, 1, 4);
}
