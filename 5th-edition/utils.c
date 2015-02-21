//
//  utils.c
//  test
//
//  Created by Oliver Shyal Beardsley on 24/12/2014.
//  Copyright (c) 2014 Oliver Shyal Beardsley. All rights reserved.
//

#include "utils.h"
#include "stdbool.h"
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void swap(void* a, void* b, unsigned short size)
{
    void* tmp = malloc(size);
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
    free(tmp);
}

/* is 'a' a substring of 'b' */
bool isSubstring(char* a, char* b)
{
    /* a = wafer
     b = waterfall
     */
    
    int aIndex = 0;
    int numSimilarLetters = 0;
    bool previousSimilar = false;
    unsigned long aLen = strlen(a);
    unsigned long bLen = strlen(b);
    if (aLen > bLen)
        return false;
    for (unsigned int i = 0; i < bLen; i++)
    {
        if (a[aIndex] == b[i])
        {
            numSimilarLetters += 1;
            previousSimilar = true;
            aIndex++;
        }
        else if (previousSimilar)
        {
            if (numSimilarLetters == aLen)
                return true;
            else
                return false;
        }
    }
    return numSimilarLetters == aLen;
}

void testSubstring()
{
    assert(isSubstring("hello", "hello there"));
    assert(isSubstring("", "hello there"));
    assert(isSubstring("there", "hello there"));
    assert(isSubstring("water", "waterfall"));
    assert(!isSubstring("wafer", "waterfall"));
}


void print3x3Matrix(int matrix[3][3])
{
    printf("-----\n");
    
    for (unsigned i = 0; i < 3; i++)
    {
        for (unsigned j = 0; j < 3; j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print4x4Matrix(int matrix[4][4])
{
    printf("-----\n");
    
    for (unsigned i = 0; i < 4; i++)
    {
        for (unsigned j = 0; j < 4; j++)
        {
            printf("%i\t", matrix[i][j]);
        }
        printf("\n");
    }
}
