#include "1.6.h"
#include <cstdio>
#include "Utils.h"

void rotateMatrix(int matrix[][4])
{
    int n = 4;
    for (int layer = 0; layer < n / 2; ++layer)
    {
        printf("layer %i\n", layer);
        int first = layer;
        int last=n-1-layer;
        
        for(int i = first; i < last; ++i)
        {
            int offset = i - first;
            int top = matrix[first][i];
            matrix[first][i] = matrix[last-offset][first];
            print4x4Matrix(matrix);
            matrix[last-offset][first] = matrix[last][last - offset];
            print4x4Matrix(matrix);
            matrix[last][last - offset] = matrix[i][last];
            print4x4Matrix(matrix);
            matrix[i][last] = top;
            print4x4Matrix(matrix);
        }
    }
}

void testMatrixRotation()
{
    int a[4][4] =
    {
        {0,  1,  2,   3},
        {4,  5,  6,   7},
        {8,  9,  10,  11},
        {12, 13, 14,  15},
    };
    
    print4x4Matrix(a);
    
    rotateMatrix(a);
    
    print4x4Matrix(a);
}
