#include <cstdio>
#include "assert.h"
#include "lib/Utils.h"

/*
    1.6 Given an image represented by an NxN matrix, where
    each pixel in the image is 4 bytes, write a method to
    rotate the image by 90 degrees. Can you do this in place?
*/

void rotate_matrix(int m[][4]) {
    int n = 4;
    for (int layer = 0; layer < n / 2; ++layer) {
        int first = layer;
        int last = n - 1 - layer;

        for (int i = first; i < last; ++i) {
            int offset = i - first;
            int top = m[first][i];
            m[first][i] = m[last - offset][first];
            m[last - offset][first] = m[last][last - offset];
            m[last][last - offset] = m[i][last];
            m[i][last] = top;
        }
    }
}

void test1_6() {
    int a[4][4] = {
        {0,  1,  2,   3},
        {4,  5,  6,   7},
        {8,  9,  10,  11},
        {12, 13, 14,  15},
    };

    rotate_matrix(a);

    assert(a[0][0] == 12);
    assert(a[1][1] == 9);
    assert(a[2][2] == 6);
    assert(a[3][3] == 3);

    printf("1.6 passed!\n");
}
