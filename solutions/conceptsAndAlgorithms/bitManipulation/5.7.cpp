#include "5.7.h"
#include <bitset>
#include <iostream>
#include <assert.h>
#include "lib/datastructures/vector.h"

using namespace std;

int findMissingElementInArray(int missingElement)
{
    int arraySize = missingElement + 10 - 1;
    ctci::vector<int> ar(arraySize);
    for (int i = 0, j = 0; i < arraySize; i++, j == missingElement-1 ? j+=2 : j++)
            ar[i] = j;

    int missing = -1;
    int t = 0;

    for (int i = 0; i <= arraySize; i++)
    {
        short b0 = bitset<sizeof(i)*8>(ar[i])[0];
        if ((t == 0 || t == 6) && b0 == 0)
        {
        }
        else if (t % 2 == b0)
        {
        }
        else if (t % 2 != 0 && b0 == 1)
        {
        }
        else
        {
            missing = ar[i]-1;
            break;
        }
        t = t == 9 ? 0 : t + 1;
    }
    return missing;
}

void test5_7()
{
    assert(findMissingElementInArray(14) == 14);
}
