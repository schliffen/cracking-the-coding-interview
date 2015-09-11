#include <assert.h>
#include <iostream>

using namespace std;

/*
 * 11.1 You are given two sorted arrays, A and B, where A has a large
 * enough buffer at the end to hold B. Write a method to merge B into
 * A in sorted order.
 */

void mergeArrays(int a[], int b[], int aSize, int bSize) {
    int iA = aSize - 1;
    int iB = bSize - 1;
    int im = aSize + bSize - 1;

    while (iA >= 0 && iB >= 0) {
        if (a[iA] > b[iB]) {
            a[im] = a[iA];
            iA--;
        } else {
            a[im] = b[iB];
            iB--;
        }
        im--;
    }
}

void test11_1() {
    int a[] = {0, 1, 2, 2, 3, 4, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int b[] = {2, 2, 3, 3, 4, 5, 5, 6, 7, 8, 9};
    int sorted[] = {0, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 7, 8, 8, 9};

    mergeArrays(a, b, 7, 11);

    for (int i = 0; i < 18; i++) {
        assert(a[i] == sorted[i]);
    }
    cout << "11.1 passed!" << endl;
}
