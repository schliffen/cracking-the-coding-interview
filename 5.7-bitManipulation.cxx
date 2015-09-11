#include <bitset>
#include <iostream>
#include <assert.h>
#include <limits>
#include "lib/datastructures/vector.h"

// 5.7 An array A contains all the integers from 0 to n, except for one number which is missing.
// In this problem, we cannot access an entire integer in A with a single operation.
// The elements of A are represented in binary, and the only operation we can use to access
// them is "fetch the jth bit of A[i]," which takes constant time. Write code to find the
// missing integer. Can you do it in 0(n) time?

using namespace std;

short fetchTheJthBitOfAi(ctci::vector<int>& A, unsigned int j, unsigned int i)
{
    return bitset<sizeof(i) * CHAR_BIT>(A[i])[j];
}

unsigned int findMissingElementInArray(unsigned int missingElement)
{
    size_t arraySize = missingElement + 10 - 1;
    ctci::vector<int> ar(arraySize);
    for (size_t i = 0; i < arraySize; i++)
        ar[i] = i;
    ar.erase(ar.begin() + missingElement);
    for (size_t i = 0, t = 0; i <= arraySize; i++) {
        if (t % 2 != fetchTheJthBitOfAi(ar, 0, i))
            return i;
        t = t == 9 ? 0 : t + 1;
    }
    return 0;
}

void test5_7()
{
    for (size_t i = 0; i < 100; i++)
        assert(findMissingElementInArray(i) == i);
    cout << "5.7 passed!" << endl;
}
