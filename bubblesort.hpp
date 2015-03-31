#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "Utils.h"

template <class a_type>
void bubbleSort(a_type* data, int n)
{
    bool swapped = false;
    do
    {
        swapped = false;

        for (int i = 1; i < n; i++)
        {
            if (data[i-1] > data[i])
            {
                swap(&data[i-1], &data[i]);
                swapped = true;
            }
        }
    }
    while(swapped);
}

template <class a_type>
void bubbleSortOptimised(a_type* data, int n)
{
    do
    {
        int newn = 0;
        for (int i = 1; i < n; i++)
        {
            if (data[i-1] > data[i])
            {
                swap(&data[i-1], &data[i]);
                newn = i;
            }
        }
        n = newn;
    }
    while(n > 0);
}

#endif
