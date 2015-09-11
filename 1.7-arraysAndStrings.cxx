#include "lib/utils/Utils.h"
#include "assert.h"

/*
    1.7 Write an algorithm such that if an element in an MxN
    matrix is 0, its entire row and column are set to 0.
*/

void setZeroRowColumns4x4(int a[4][4]) {
    int rows[4] = {0};
    int columns[4] = {0};

    for (unsigned int i = 0; i < 4; i++) {
        for (unsigned int j = 0; j < 4; j++) {
            if (a[i][j] == 0) {
                rows[i] = 1;
                columns[i] = 1;
            }
        }
    }

    for (unsigned i = 0; i < 4; i++) {
        if (rows[i])
            for (unsigned j = 0; j < 4; j++)
                a[i][j] = 0;
        if (columns[i])
            for (unsigned j = 0; j < 4; j++)
                a[j][i] = 0;
    }
}

void test1_7() {
    int a[4][4] = {
        {0,  1,  2,   3},
        {4,  5,  6,   7},
        {8,  9,  10,  11},
        {12, 13, 14,  15},
    };

    setZeroRowColumns4x4(a);

    //print4x4Matrix(a);

    assert(a[0][0] == 0);
    assert(a[0][1] == 0);
    assert(a[0][2] == 0);
    assert(a[0][3] == 0);
    assert(a[0][0] == 0);
    assert(a[1][0] == 0);
    assert(a[2][0] == 0);
    assert(a[3][0] == 0);

    printf("1.7 passed!\n");
}
