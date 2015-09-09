#include <iostream>
#include <limits.h>
#include <string>

#include "5.2.h"

using namespace std;

// Given a real number between 0 and 1 (e.g., 0.72) that is passed in as a double,
// print the binary representation. If the number cannot be represented accurately
// in binary with at most 32 characters, print "ERROR."


string getBitsForDouble(double d)
{
    if (0.0f < d || d > 1.0f)
        return "ERROR";
    return "";
}

void test5_2()
{
    getBitsForDouble(0.0f);
    cout << "5.2 NOT passed!" << endl;
}
