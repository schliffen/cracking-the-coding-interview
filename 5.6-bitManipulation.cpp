/*
 * 5.6
 * Write a program to swap odd and even bits in an integer
 * with as few instructions as possible
 * (e.g., bit 0 and bit 1 are swapped, bit 2 and bit 3 are
 *  swapped, and so on).
 */

#include "assert.h"
#include <cstdio>
#include <bitset>
#include <limits>
#include <iostream>

using namespace std;

unsigned int swap_bits(unsigned int a) {
    return ((a&0xaaaaaaaa)>>1)|((a&0x55555555)<<1);
}

void test5_6() {
    assert(swap_bits(2) == 1);
    assert(swap_bits(12) == 12);
    assert(swap_bits(89) == 166);
    printf("5.6 passed!\n");
}
