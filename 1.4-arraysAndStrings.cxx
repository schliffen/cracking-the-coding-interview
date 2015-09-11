#include "stdlib.h"
#include "assert.h"
#include "string.h"
#include <cstdio>

/*
    1.4 Write a method to replace all spaces in a string with'%20'.
    You may assume that the string has sufficient space at the end
    of the string to hold the additional characters, and that you
    are given the "true" length of the string. (Note: if implementing
    in Java, please use a character array so that you can perform
    this operation in place.) EXAMPLE,
    Input: "Mr John Smith"
    Output: "Mr%20Dohn%20Smith"
*/

char* replaceSpacesWithPercent20(char* str) {
    unsigned int numSpaces = 0;

    unsigned int len = (unsigned int)(strlen(str));

    for (unsigned int i = 0; i < len; i++) {
        if (str[i] == ' ')
            numSpaces += 1;
    }

    int offset = 0;

    unsigned int newLen = len + numSpaces * 2;

    char* newStr = (char*)malloc(newLen + 1);

    newStr[newLen] = '\0';

    for (unsigned i = 0; i < len + numSpaces; i++) {
        if (str[i] == ' ') {
            newStr[offset] = '2';
            newStr[offset + 1] = '0';
            newStr[offset + 2] = '%';
            offset += 3;
        } else {
            newStr[offset] = str[i];
            offset += 1;
        }
    }

    return newStr;
}

void replaceSpaces() {
    char* str = "Hello this is another test";

    char* newStr = replaceSpacesWithPercent20(str);

    char* expected = "Hello20%this20%is20%another20%test";

    assert(memcmp(newStr, expected, strlen(expected)) == 0);

    //printf("%s\n", newStr);

    free(newStr);
    newStr = 0;
}


void replaceSpacesWithPercent20InPlace(char** str) {
    unsigned int numSpaces = 0;

    unsigned long len = strlen(*str);

    for (unsigned int i = 0; i < len; i++)
        if ((*str)[i] == ' ')
            numSpaces++;

    unsigned long newLen = len + numSpaces * 2;

    *str = (char*)realloc(*str, newLen + 1);
    memset(*str + len, '-', newLen - len);

    (*str)[newLen] = '\0';

    for (long i = len - 1; i >= 0; i--) {
        if ((*str)[i] == ' ') {
            (*str)[newLen - 3] = '2';
            (*str)[newLen - 2] = '0';
            (*str)[newLen - 1] = '%';
            newLen -= 3;
        } else {
            (*str)[newLen - 1] = (*str)[i];
            newLen--;
        }
        //printf("%s\n", *str);
    }
}

void test1_4() {
    char* str = "A B C D E F G";

    unsigned long len = strlen(str);

    char* strAlloc = (char*)malloc(len + 1);
    strAlloc[len] = '\0';

    memcpy(strAlloc, str, strlen(str));

    replaceSpacesWithPercent20InPlace(&strAlloc);

    assert(strcmp("A20%B20%C20%D20%E20%F20%G", strAlloc) == 0);

    printf("1.4 passed!\n");
}
