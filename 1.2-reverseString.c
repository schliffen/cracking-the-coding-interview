#include "1.2-reverseString.h"
#include <string.h>


void removeDuplicates(char* str)
{
    if (!str)
        return;
    unsigned long len = strlen(str);
    
    if (len < 2)
        return;
    
    int tail = 1;
    
    for (int i = 1; i < len; i++)
    {
        printf("tail: %d\n", tail);
        
        int j;
        printf("\n---%c---\n", str[i]);
        
        for (j = 0; j < tail; j++)
        {
            printf("\tif %c == %c: ", str[i], str[j]);
            if (str[i] == str[j])
            {
                printf("match!\n");
                break;
            }
            else
                printf("nope\n");
        }
        
        printf("j=%d\n", j);
        
        if (j == tail)
        {
            printf("str[%d] = %c\n", tail, str[i]);
            str[tail] = str[i];
            ++tail;
        }
        else
        {
            printf("skipped\n");
        }
        printf("%s\n", str);
        printf("tail: %c\n", str[tail]);
        printf("--------------------------------\n");
    }
    str[tail] = 0;
}
