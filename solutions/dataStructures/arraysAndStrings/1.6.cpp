#include "1.6.h"
#include <cstdio>
#include "assert.h"
#include "lib/utils/Utils.h"

/*
    1.6 Given an image represented by an NxN matrix, where
    each pixel in the image is 4 bytes, write a method to
    rotate the image by 90 degrees. Can you do this in place?
*/

void rotateMatrix(int matrix[][4]) {
    int n = 4;
    for (int layer = 0; layer < n / 2; ++layer) {
        int first = layer;
        int last = n - 1 - layer;

        for (int i = first; i < last; ++i) {
            int offset = i - first;
            int top = matrix[first][i];
            matrix[first][i] = matrix[last - offset][first];
            matrix[last - offset][first] = matrix[last][last - offset];
            matrix[last][last - offset] = matrix[i][last];
            matrix[i][last] = top;
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

    rotateMatrix(a);

    assert(a[0][0] == 12);
    assert(a[1][1] == 9);
    assert(a[2][2] == 6);
    assert(a[3][3] == 3);

    printf("1.6 passed!\n");
}
