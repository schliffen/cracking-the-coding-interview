#include "assert.h"
#include <stdio.h>

/*
 * 1.1 Implement an algorithm to determine if a string has
 * all unique characters. What if you cannot use additional
 * data structures?
 */

int unique_c(char* s) {
    int ascii_n[128] = {0};
    for (int i = 0; s[i] != '\0'; ++i) {
        if (ascii_n[(int)s[i]])
            return 0;
        ascii_n[(int)s[i]]++;
    }
    return 1;
}

void test1_1() {
    assert(unique_c("asdfqwer") == 1);
    assert(unique_c("asdfqwera") == 0);
    printf("1.1 passed!\n");
}
