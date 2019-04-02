#include "assert.h"
#include <cstdio>

/*
 * 1.3 Given two strings, write a method to
 * decide if one is a permutation of the other.
 */

int anagrams(const char* a, const char* b) {
    int count[128] = {0};
    for (int c = 0; a[c] != '\0';)
        count[(int)a[c++]]++;
    for (int c = 0; b[c] != '\0';)
        count[(int)b[c++]]--;
    for (int i = 0; i < 128; ++i)
        if (count[i] != 0)
            return 0;
    return 1;
}

void test1_3() {
    assert(anagrams("listen", "silent") == 1);
    assert(anagrams("theearthquakes", "thatqueershake") == 1);
    printf("1.3 passed!\n");
}
