#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <cstdio>

/*
 Assume you have a method isSubstring which checks if one word
 is a substring of another. Given two strings, s1 and s2, write
 code to check if s2 is a rotation of s1 using only one call
 to isSubstring (i.e., “waterbottle” is a rotation of “erbottlewat”).
 */

/* check if a is a rotation of b */
bool isRotation(char* a, char* b) {
    int aLen = strlen(a);
    int bLen = strlen(b);

    if (aLen != bLen)
        return false;

    char together[aLen + bLen + 1];

    strcpy(together, b);
    strcat(together, b);

    return strstr(together, a);
}

void test1_8() {
    assert(isRotation("waterfall", "llwaterfa"));
    assert(isRotation("yellow", "owyell"));
    assert(!isRotation("yellow", "oyellw"));
    printf("1.8 passed!\n");
}
