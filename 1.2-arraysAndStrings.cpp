#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include "assert.h"
#include "lib/string.h"

/*
 * 1.2 Implement a function void reverse(char* str)
 * in C or C++ which reverses a null-terminated string.
 */

// signature uses a _C_ array, as requested in question!
// this method does an in-place reversal, so is O(n)
void reverse_c(char* str) {
    const size_t len = strlen(str);
    for(size_t i=0; i<len/2; i++)
        std::swap(str[i], str[len-i-1]);
}

// signature uses a C array, as requested in question
// but this time let's use a more C++esque method
void reverse_cpp(char* str) {
    std::reverse(str, str + strlen(str));
}

void test1_2() {
    char c[7] = "foobar";
    reverse_c(c);
    assert(strcmp(c, "raboof") == 0);
    reverse_cpp(c);
    assert(strcmp(c, "foobar") == 0);
    printf("1.2 passed!\n");
}
