#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "assert.h"

/*
 * 1.2 Implement a function void reverse(char* str)
 * in C or C++ which reverses a null-terminated string.
 */

void reverse(char* str) {
    if (!str)
        return;
    int len = strlen(str);
    int tail = 1;
    for (int i = 1, j = 0; i < len; i++) {
        for (j = 0; j < tail; j++)
            if (str[i] == str[j])
                break;
        if (j == tail) {
            str[tail] = str[i];
            ++tail;
        }
    }
    str[tail] = 0;
}

void test1_2() {
    char* c = (char*)calloc(7, 1);
    strcpy(c, "foobar");
    reverse(c);
    free(c);
    assert(strcmp(c, "raboof") == 0);
    printf("1.2 passed!\n");
}
