#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include "assert.h"

/*
 * 1.2 Implement a function void reverse(char* str)
 * in C or C++ which reverses a null-terminated string.
 */

void reverse(char* str) {
    if (!str)
        return;
    if (*str == '\0')
        return;  // Handle empty string

    // Make tail point to the last non-null character
    char* tail = str;
    while(*(tail+1)!='\0') ++tail;

    for(; tail > str; ++str, --tail) {
        std::swap(*str, *tail);
    }
}

void test1_2() {
    char* c = (char*)malloc(7);
    strcpy(c, "foobar\0");
    reverse(c);
    free(c);
    assert(strcmp(c, "raboof") == 0);
    printf("1.2 passed!\n");
}
