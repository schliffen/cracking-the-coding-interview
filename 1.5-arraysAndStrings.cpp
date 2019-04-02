#include <assert.h>
#include <cstring>
#include <cstdlib>
#include <cstdio>

/*
    1.5 Implement a method to perform basic string compression
    using the counts of repeated characters. For example, the
    string aabcccccaaa would become a2b1c5a3. If the "compressed"
    string would not become smaller than the original string,
    your method should return the original string.
*/

char* compress_string(const char* str) {
    int len = strlen(str);
    if (len >= 2) {
        char result[len];
        int counter = 0;
        int resulti = 0;
        for (int i = 1; i <= len; i++) {
            char c = i < len ? str[i] : '\0';
            char p = str[i - 1];
            if (c == p) {
                counter++;
            } else {
                result[resulti++] = p;
                result[resulti++] = (char)(((int)'0') + counter + 1);
                counter = 0;
            }
        }
        result[resulti++] = '\0';
        int result_len = strlen(result);
        if (result_len < len) {
            char* ret = (char*)malloc(result_len + 1);
            memcpy(ret, result, result_len + 1);
            return ret;
        }
    }
    char* ret = (char*)malloc(len + 1);
    memcpy(ret, str, len + 1);
    ret[len] = '\0';
    return ret;
}


void test1_5() {
    char* result = compress_string("aabcccccaaa");
    assert(strcmp(result, "a2b1c5a3") == 0);
    free(result);
    printf("1.5 passed!\n");
}
