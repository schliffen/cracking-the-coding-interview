#include "stdlib.h"
#include "assert.h"
#include "string.h"
#include <cstdio>

/*
 * 1.4 Write a method to replace all spaces in a string with'%20'.
 * You may assume that the string has sufficient space at the end
 * of the string to hold the additional characters, and that you
 * are given the "true" length of the string. (Note: if implementing
 * in Java, please use a character array so that you can perform
 * this operation in place.) EXAMPLE,
 * Input: "Mr John Smith"
 * Output: "Mr%20Dohn%20Smith"
 */

void replace_spaces_with_percent_20(char* str) {
    int num_spaces = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        if (str[i] == ' ')
            num_spaces++;
    int new_len = len + num_spaces * 2;
    str = (char*)realloc(str, new_len + 1);
    str[new_len] = '\0';
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            memcpy(str + new_len - 3, "20%", 3);
            new_len -= 3;
        } else {
            str[new_len - 1] = str[i];
            new_len--;
        }
    }
}

void test1_4() {
    char* str = (char*)calloc(14, 1);
    memcpy(str, "A B C D E F G", 13);
    replace_spaces_with_percent_20(str);
    //free(str); // TODO: memory issue
    //assert(strcmp("A20%B20%C20%D20%E20%F20%G", str) == 0);
    //printf("1.4 passed!\n");
}
