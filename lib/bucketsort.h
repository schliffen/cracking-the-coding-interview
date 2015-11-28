#ifndef BUCKETSORT_H
#define BUCKETSORT_H

#include "lib/vector.h"
#include <algorithm>
#include <vector>

template<class T>
void bucketSort (int arr[], int n)
{
  //Here range is [1,100]
  int m = 101;

  //Create m empty buckets
  int buckets[m];

  //Intialize all buckets to 0
  for (int i = 0; i < m; ++i)
    buckets[i] = 0;

  //Increment the number of times each element is present in the input
  //array. Insert them in the buckets
  for (int i = 0; i < n; ++i)
    ++buckets[arr[i]];

  //Sort using insertion sort and concatenate
  for (int i = 0, j = 0; j < m; ++j)
    for (int k = buckets[j]; k > 0; --k)
      arr[i++] = j;
}

#endif // BUCKETSORT_H

