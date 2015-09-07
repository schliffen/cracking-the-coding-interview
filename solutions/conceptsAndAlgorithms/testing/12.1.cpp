#include "12.1.h"
#include <cstdio>
#include <assert.h>

using namespace std;

/*
 *  12.1 Find the mistake(s) in the following code:
 *  unsigned int i;
 *  for (i = 100; i >= 0; --i)
 *      printf("%d\n",i);
 */

void test12_1()
{
    /*
     * On what should be the final invocation of the code inside the loop
     * if i were a signed integer type, it should have been pre-decremented to
     * the value of -1. -1 would have then been compared against the logical
     * expression i >= 0, which is false. Thus the loop should have stopped.
     * However since i is an unsigned integer, instead of reaching the value
     * of -1, it looped around and got the value of 2**32.
     * Moreover %d is printf's variable identifier for signed demical integers
     * so the correct identifier is %u.
     */
    assert(true);
}
