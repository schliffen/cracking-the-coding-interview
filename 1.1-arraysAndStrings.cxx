#include "assert.h"
#include <stdio.h>

/*
    1.1 Implement an algorithm to determine if a string has all unique characters.
    What if you cannot use additional data structures?
*/

int eachCharIsUnique(char* str) {
    int asciiCounts[128] = {0};

    int i = 0;

    while (str[i] != '\0') {
        if (asciiCounts[(int)str[i]])
            return 0;
        asciiCounts[(int)str[i]]++;
        i++;
    }

    return 1;
}

void test1_1() {
    assert(eachCharIsUnique("asdfqwer") == 1);
    assert(eachCharIsUnique("asdfqwera") == 0);
    printf("1.1 passed!\n");
}
