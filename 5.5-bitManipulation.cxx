/* 5.5
 * Write a function to determine the number of bits required
 * to convert integer A to integer B.
 * EXAMPLE
 * Input: 31, 14
 * Output: 2
 */

#include <limits>
#include <cstdio>
#include "assert.h"

int bit_swap_required_1(int a, int b) {
    int count = 0;
    for (int c = a^b; c != 0; c = c >> 1)
        count += c & 1;
    return count;
}

int bit_swap_required_2(int a, int b) {
    int count = 0;
    for (int c = a^b; c != 0; c = c & (c-1))
        count++;
    return count;
}

void test5_5() {
    assert(bit_swap_required_1(31, 14)  == 2);
    assert(bit_swap_required_2(31, 14)  == 2);
}
