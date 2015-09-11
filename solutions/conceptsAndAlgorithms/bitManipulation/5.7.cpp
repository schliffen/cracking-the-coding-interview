#include "5.7.h"
#include <bitset>
#include <iostream>
#include <assert.h>
#include "lib/datastructures/vector.h"

using namespace std;

int findMissingElementInArray(int missingElement)
{
    size_t arraySize = missingElement + 10 - 1;
    ctci::vector<int> ar(arraySize);
    for (size_t i = 0; i < arraySize; i++)
            ar[i] = i;

    ar.erase(ar.begin() + missingElement);

    int t = 0;

    for (size_t i = 0; i <= arraySize; i++)
    {
        short b0 = bitset<sizeof(i)*8>(ar[i])[0];

        if ((t == 0 || t == 6) && b0 == 0){}
        else if (t % 2 == b0){}
        else if (t % 2 != !b0){}
        else
        {
            return i;
        }
        t = t == 9 ? 0 : t + 1;
    }
    return 0;
}

void test5_7()
{
    assert(findMissingElementInArray(0) == 0);
    assert(findMissingElementInArray(6) == 6);
    assert(findMissingElementInArray(14) == 14);
    assert(findMissingElementInArray(1e4+14) == 1e4+14);
}
