/*
 * 9.6 Implement an algorithm to print all valid
 * (e.g., properly opened and closed) combinations
 * of n-pairs of parentheses.
 * EXAMPLE Input: 3
 * Output: ( ( ( ) ) ) , ( ( ) ( ) ) , ( ( ) ) ( ) , ( ) ( ( ) ) , ( ) ( ) ( )
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void addParen(int leftRem, int rightRem, string& str, int count)
{
    if (leftRem < 0 || rightRem < leftRem) return;

    if (leftRem == 0 && rightRem == 0) {
        cout << str << endl;
    }
    else {
        if (leftRem > 0) {
            str[count] = '(';
            addParen(leftRem - 1, rightRem, str, count + 1);
        }

        if (rightRem > leftRem) {
            str[count] = ')';
            addParen(leftRem, rightRem -1, str, count + 1);
        }
    }
}

void test9_6() {
    int n = 2;
    string str = "    ";
    addParen(n, n, str, 0);
}
