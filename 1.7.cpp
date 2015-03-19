#include "1.7.h"
#include "Utils.h"

void setZeroRowColumns4x4(int a[4][4])
{
    int rows[4] = {0};
    int columns[4] = {0};
    
    for (unsigned int i = 0; i < 4; i++)
    {
        for (unsigned int j = 0; j < 4; j++)
        {
            if (a[i][j] == 0)
            {
                rows[i] = 1;
                columns[i] = 1;
            }
        }
    }
    
    for (unsigned i = 0; i < 4; i++)
    {
        if (rows[i])
            for (unsigned j = 0; j < 4; j++)
                a[i][j] = 0;
        if (columns[i])
            for (unsigned j = 0; j < 4; j++)
                a[j][i] = 0;
    }
}

void testZeroRowColumns()
{
    int a[4][4] =
    {
        {0,  1,  2,   3},
        {4,  5,  6,   7},
        {8,  9,  10,  11},
        {12, 13, 14,  15},
    };
    
    setZeroRowColumns4x4(a);
    
    print4x4Matrix(a);
}
