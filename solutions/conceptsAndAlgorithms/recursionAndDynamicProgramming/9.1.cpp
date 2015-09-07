#include "9.1.h"
#include <iostream>
#include <assert.h>

using namespace std;

// 9.1 A child is running up a staircase with n steps,
// and can hop either 1 step, 2 steps, or 3 steps at a time.
// Implement a method to count how many possible ways
// the child can run up the stairs.

int countWays(int n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        int ways = 0;
        for (int i = 1; i <= 3; i++)
        {
            ways += countWays(n - i);
        }
        return ways;
    }
}

void test9_1()
{
    int ways = countWays(4);
    assert(ways == 7);
    cout << "9.1 passed!" << endl;
}
