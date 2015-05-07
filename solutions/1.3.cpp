#include "1.3.h"
#include "assert.h"
#include <cstdio>

/*
    1.3 Given two strings, write a method to
    decide if one is a permutation of the other.
*/

int anagrams(char* a, char* b)
{
    int count[128] = {0};
    
    int c = 0;
    
    while (a[c] != '\0')
        count[(int)a[c++]]++;
    
    c = 0;
    
    while (b[c] != '\0')
        count[(int)b[c++]]--;
    
    for (unsigned int i = 0; i < 128; i++)
        if (count[i] != 0)
            return 0;
    
    return 1;
}

void test1_3()
{
    assert(anagrams("listen", "silent") == 1);
    assert(anagrams("theearthquakes", "thatqueershake") == 1);
    printf("1.3 passed!\n");
}
