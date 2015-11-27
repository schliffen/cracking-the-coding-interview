#ifndef QUICKSORT_H
#define QUICKSORT_H

template<class T>
void quickSort(T arr[], T left, T right) {
    int i = left, j = right;
    T tmp;
    T pivot = arr[(left + right) / 2];

    /* partition */
    while (i <= j) {
          while (arr[i] < pivot)
                i++;
          while (arr[j] > pivot)
                j--;
          if (i <= j) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                i++;
                j--;
          }
    };

    /* recursion */
    if (left < j)
          quickSort(arr, left, j);
    if (i < right)
          quickSort(arr, i, right);
}

#endif // QUICKSORT_H

