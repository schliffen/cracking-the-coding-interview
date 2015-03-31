#ifndef BUBBLESORT_H
#define BUBBLESORT_H

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
                a_type tmp = data[i-1];
                data[i-1] = data[i];
                data[i] = tmp;
                swapped = true;
            }
        }
    }
    while(swapped);
}

#endif
