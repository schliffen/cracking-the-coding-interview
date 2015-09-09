#include "5.2.h"
#include <bitset>
#include <iostream>
#include <cstdio>
#include <limits.h>

using namespace std;

/*
Given a real number between 0 and 1 (e.g., 0.72) that is passed in as a double,
print the binary representation. If the number cannot be represented accurately
in binary with at most 32 characters, print "ERROR."
*/

void showDoubleBits(double in)
{
    union
    {
         float input;
         int   output;
    }    data;

    data.input = in;
    std::cout << std::bitset<sizeof(float) * CHAR_BIT>(data.output) << std::endl;
}

void testShowDoubleBits()
{
    showDoubleBits(0.72);
}
