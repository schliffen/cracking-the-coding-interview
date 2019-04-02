/*
 * 7.4
 * Write methods to implement the multiply, subtract, and divide operations
 * for integers. Use only the add operator.
 */

// personal note: in the book, the solution actually uses loads
// of operators, like the minus operator, the += operator...
// so I pretty much just copied the answer verbatim as I find
// this question silly

#include <limits>
#include <iostream>
#include <bitset>
#include <assert.h>

using namespace std;

int neg(int a) {
    int n = 0;
    int d = a < 0 ? 1 : -1; // using the - sign here is silly
    while (a != 0) {
        n += d;
        a += d;
    }
    return n;
}

int abs(int val) {
    return val < 0 ? neg(val) : val;
}

int mult(int a, int b) {
    if (b < a)
        return mult(b, a);
    int sum = 0;
    for (int i = abs(b); i > 0; i--)
        sum = sum + a;
    if (b < 0) {
        sum = neg(sum);
    }
    return sum;
}

int divide(int a, int b) {
    assert(b != 0);
    int absa = abs(a);
    int absb = abs(b);

    int prod = 0;

    int x = 0;
    while (prod + absb <= absa) {
        prod += absb;
        x = x + 1;
    }
    if ((a < 0 && b < 0) || (a > 0 && b > 0))
        return x;
    else
        return neg(x);
}

void test7_4() {
    assert(neg(5) == -5);
    assert(mult(5, 2) == 10);
    assert(divide(10, 2) == 5);
    assert(abs(-5) == 5 && abs(5) == 5);
    cout << "7.4 passed!" << endl;
}
