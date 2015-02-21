//
//  1.1.c
//  test
//
//  Created by Oliver Shyal Beardsley on 23/12/2014.
//  Copyright (c) 2014 Oliver Shyal Beardsley. All rights reserved.
//

#include "1.1-uniqueChars.h"
#include "assert.h"

int eachCharIsUnique(char* str)
{
    int asciiCounts[128] = {0};
    
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (asciiCounts[str[i]])
            return 0;
        asciiCounts[str[i]]++;
        i++;
    }
    
    return 1;
}

void testUniqueChars()
{
    assert(eachCharIsUnique("asdfqwer") == 1);
    assert(eachCharIsUnique("asdfqwera") == 0);
    printf("unique chars passed\n");
}