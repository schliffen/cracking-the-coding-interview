#include "unittests/testsorting.h"
#include "lib/bubblesort.h"
#include "lib/quicksort.h"
#include "lib/mergesort.h"
#include "lib/insertionsort.h"
#include "lib/selectionsort.h"
#include "lib/shellsort.h"
#include "lib/bucketsort.h"
#include "lib/radixsort.h"
#include "lib/heapsort.h"
#include <assert.h>
#include "lib/Utils.h"
#include <vector>
#include "testhelper.h"

void testQuickSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    quickSort<int>(data, 0, 19);
    assert(isArraySorted(data, 20));
}

void testMergeSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    std::vector<int> vec(data, data + 20);
    mergeSort(vec);
    assert(isArraySorted(vec.data(), 20));
}

void testBubbleSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    bubbleSort<int>(data, 20);
    assert(isArraySorted(data, 20));
}

void testBubbleSortOptimised() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    bubbleSortOptimised<int>(data, 20);
    assert(isArraySorted(data, 20));
}

void testInsertionSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    insertionSort(data, 20);
    assert(isArraySorted(data, 20));
}

void testSelectionSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    selectSort(data, 20);
    assert(isArraySorted(data, 20));
}

void testShellSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    shellsort(data, 20);
    assert(isArraySorted(data, 20));
}

void testBucketSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    bucketSort<int>(data, 20);
    assert(isArraySorted(data, 20));
}

void testRadixSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    radixSort(data, 20);
    assert(isArraySorted(data, 20));
}

void testHeapSort() {
    int data[] = {2, 4, 6, 8, 8, 1, 2, 6, 7, 8, 9, 4, 5, 6, 3, 1, 5, 6, 4, 8};
    heapSort(data, 20);
    assert(isArraySorted(data, 20));
}

START_TEST(testsorting)
TEST(testBubbleSort)
TEST(testBubbleSortOptimised)
TEST(testQuickSort)
TEST(testMergeSort)
TEST(testInsertionSort)
TEST(testSelectionSort)
TEST(testShellSort)
TEST(testBucketSort)
TEST(testHeapSort)
END_TEST
