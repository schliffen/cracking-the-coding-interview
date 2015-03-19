//
//  isRotation.c
//  test
//
//  Created by Oliver Shyal Beardsley on 24/12/2014.
//  Copyright (c) 2014 Oliver Shyal Beardsley. All rights reserved.
//

#include "1.8.h"
#include <stdbool.h>
#include <string.h>
#include <assert.h>

/*
 Assume you have a method isSubstring which checks if one word
 is a substring of another. Given two strings, s1 and s2, write
 code to check if s2 is a rotation of s1 using only one call
 to isSubstring (i.e., “waterbottle” is a rotation of “erbottlewat”).
 */

/* check if a is a rotation of b */
bool isRotation(char* a, char* b)
{
    unsigned long aLen = strlen(a);
    unsigned long bLen = strlen(b);
    
    if (aLen != bLen)
        return false;
    
    char together[aLen + bLen + 1];
    
    strcpy(together, b);
    strcat(together, b);
    
    printf("%s\n", together);
    
    return strstr(together, a);
}

void testIsRotation()
{
    assert(isRotation("waterfall", "llwaterfa"));
    assert(isRotation("yellow", "owyell"));
    assert(!isRotation("yellow", "oyellw"));
}
