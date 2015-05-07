#include "1.6.h"
#include <cstdio>
#include "assert.h"
#include "Utils.h"

/*
    1.6 Given an image represented by an NxN matrix, where
    each pixel in the image is 4 bytes, write a method to
    rotate the image by 90 degrees. Can you do this in place?
*/

void rotateMatrix(int matrix[][4])
{
    int n = 4;
    for (int layer = 0; layer < n / 2; ++layer)
    {
        //printf("layer %i\n", layer);
        int first = layer;
        int last=n-1-layer;
        
        for(int i = first; i < last; ++i)
        {
            int offset = i - first;
            int top = matrix[first][i];
            matrix[first][i] = matrix[last-offset][first];
            //print4x4Matrix(matrix);
            matrix[last-offset][first] = matrix[last][last - offset];
            //print4x4Matrix(matrix);
            matrix[last][last - offset] = matrix[i][last];
            //print4x4Matrix(matrix);
            matrix[i][last] = top;
            //print4x4Matrix(matrix);
        }
    }
}

void test1_6()
{
    int a[4][4] =
    {
        {0,  1,  2,   3},
        {4,  5,  6,   7},
        {8,  9,  10,  11},
        {12, 13, 14,  15},
    };
    
    //print4x4Matrix(a);
    
    rotateMatrix(a);
    
    //print4x4Matrix(a);

    assert(a[0][0] == 12);
    assert(a[1][1] == 9);
    assert(a[2][2] == 6);
    assert(a[3][3] == 3);
    
    printf("1.6 passed!\n");
}
